#include <iostream>
#include <memory>
#include <string>
#include "algorithm.h++"
#include "model.h++"

struct model_type : public teach::model<std::string, std::string>
{
	void emit(const std::string &k, const std::string &v)
	{
		std::cout << v << " (" << k << ")" << std::endl;
	}
};

typedef teach::algorithm<std::unique_ptr<model_type>> algorithm_type;
algorithm_type algorithm(std::unique_ptr<model_type>(new model_type()));

int main()
{
	auto key = "La Biznas";
	auto value = "Hola";
	algorithm.transport(key, value);
}
