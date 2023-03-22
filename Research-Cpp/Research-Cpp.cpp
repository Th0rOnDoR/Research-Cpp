#include <iostream>
#include "Maths.h"
#include "Trees.h"
#include "Test.h"
#include <iostream>
#include <fstream>
using namespace std;
using namespace ResearchCpp;



void append(std::vector<int>* a, int b) {
	while (b >= a->size() + 1) {
		a->resize(b);
	}
}


double f(double x) { return x; }
int main()
{
	std::cout << "Hello World!\n";

	if (!NULL) { //this, is true.
		std::cout << "Hello World!\n";
	}
	int aaa = 1;
	int aa1 = 2;
	int aa2 = 3;
	int aa3 = 5;
	int aa5 = 7;
	std::vector<int*> vect = { nullptr,&aaa,&aa1,&aa2, nullptr,&aa3, nullptr, &aa5 };
	//append(&vect,10);
	
}