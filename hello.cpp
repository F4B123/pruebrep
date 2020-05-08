#include <iostream>
#include <string>

std::string f1(std::string a);

int main()
{
	std::string a = "hola";
	std::cout<<a<<std::endl;
	std::cout<<f1(a)<<std::endl;

	return 0;
}

std::string f1(std::string a)
{
	std::string b = " mundo", c;
	c = a + b;

	return c;
}