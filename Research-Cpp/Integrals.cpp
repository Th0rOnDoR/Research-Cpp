#include "Header.h"
#include <functional>

namespace ResearchCpp {

	static double random(double borne_inf, double borne_sup, std::function<double(double)> f, int k = 100) {
		for (int i = 0; i / k + borne_inf < borne_sup; i++) {
			if (std::rand(//qqc) < p,feorf) alors +1 au ratio
		}
	}
	static double integral(double borne_inf, double borne_sup, std::function<double(double)> f, int k = 100) {
		double result = 0;
		for (int i = 0; borne_inf + i / k < borne_sup; i++) {
			//+ val inf * largeur
			result += (1 / k) * f(borne_inf + i / k);
			//+/- alea sur le bout
		}
		return result;
	}
}