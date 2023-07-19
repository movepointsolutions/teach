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
	teach::algorithm<std::unique_ptr<model_type>> algorithm;
	model_type *model = algorithm.model().get();
	algorithm.transport(key, value);
}
