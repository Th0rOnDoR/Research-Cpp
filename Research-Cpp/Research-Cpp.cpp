#include <iostream>
#include "Maths.h";
#include "Trees.h";
#include "Test.h";

#include <iostream>
#include <fstream>
using namespace std;
using namespace ResearchCpp;




double f(double x) { return x; }
int main()
{
	std::cout << "Hello World!\n";

	if (!NULL) { //this, is true.
		std::cout << "Hello World!\n";
	}
	ofstream myfile;
	myfile.open("example.txt");
	for (int i = 0; i < 100000; i++) {
		myfile << "Writing this to a file.\n";
		myfile << "Writing this to a file.\n";
		myfile << "Writing this to a file.\n";
		myfile << "Writing this to a file.\n";
		myfile << "Writing this to a file.\n";
		myfile << "Writing this to a file.\n";
	}
	myfile.close();
	return 0;
}