#include <iostream>
#include "Header.h";

using namespace ResearchCpp;


double f(double x) { return x; }
int main()
{
	std::cout << "Hello World!\n";
	
	std::cout << integral(1,1,f);
}