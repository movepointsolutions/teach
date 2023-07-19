#include <iostream>
#include <memory>
#include <string>
#include "algorithm.h++"
#include "model.h++"

int main()
{
	auto key = "La Biznas";
	auto value = "Hola";
	struct model_type : public teach::model<std::string, std::string>
	{
		void emit(const std::string &k, const std::string &v)
		{
			std::cout << v << " (" << k << ")" << std::endl;
		}
	};
	std::unique_ptr<model_type> mptr(new model_type());
	teach::algorithm<std::unique_ptr<model_type>> algorithm(std::move(mptr));
	model_type *model = algorithm.model().get();
	algorithm.transport(key, value);
}
