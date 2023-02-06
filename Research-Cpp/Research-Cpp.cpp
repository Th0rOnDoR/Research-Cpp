#include <iostream>
#include "Header.h";
#include "Integrals.cpp"
#include "Symmetric Tree.cpp"

using namespace ResearchCpp;


double f(double x) { return x; }
int main()
{
	std::cout << "Hello World!\n";
	
	std::cout << integral(1,1,f,100);
}