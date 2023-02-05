#include <iostream>
#include <math.h>
#include <string>
#include "Header.h"
//using namespace TD;
using std::string;



	int main() {
		//Vous pouvez appeller vos fonctions ici
		//std::cout <<  << std::endl; //exemple
		//Pour les boucles (partie 1) c'est: TD_Boucles::
		//Pour les strings (partie 2) c'est: TD_Strings::
		//Pour les impérative (partie 3) c'est: TD_Imperative::
		TD::TD_Boucles::Addition(5, 6);
		return 0;
	}


/*
int size = 1000;
	double* forfun = new double[size] {};
	int long* forfact = new int long[size] {};
	for (int i = 0; i < 1000; i++) {
		forfun[i] = -1;
		forfact[i] = -1;
	}
	std::cout << fun(3.0 / 8.0, 5, forfun, forfact);
	return;


*
int long fact(int long x, int long* forfact) {
	if (x <= 0) {
		return 1;
	}
	if (forfact[x] != 0) {
		return forfact[x];
	}
	else {
		int long k = 1;
		for (int i = x; i > 0; i--) {
			k *= i;
		}
		forfact[x] = k;
	}
	return (x * fact(x - 1, forfact));
}

double fun(double x, int k, double* val, int long* forfact) {
	if (k <= 0) {
		std::cout << round(x) << "\n";
		return round(x);
	}
	if (val[k] != -1) {
		return val[k];
	}
	double L = 0;
	for (int i = 0; i < k; i++) {
		L += fun(x, i, val, forfact) / fact(i, forfact);
	}
	double tmp = (fact(k + 1, forfact) * (x - L));
	std::cout << tmp << " , " << k << "\n";
	val[k] = tmp;
	return tmp;
}
*/