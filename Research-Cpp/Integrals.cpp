#include "Header.h"
#include <functional>

namespace ResearchCpp {

	static double pow(double x, int p) {
		if (p == 1) { return x; }
		if (p % 2 == 0) {
			return pow(x * x, p / 2);
		}
		else {
			return x * pow(x * x, p / 2);
		}
	}

	static double Val_Polynomial(double x, Polynomial p) {
		if (p.next) {
			return p.coef * (pow(x, p.degree)) + Val_Polynomial(x, *p.next);
		}
		return p.coef * (pow(x, p.degree));
	}

	static Polynomial Derivee(Polynomial p) {
		if (p.degree <= 0) { return Polynomial(); }
		Polynomial result = Polynomial(p.degree*p.coef, p.degree-1);
		if (p.next) {
			Polynomial tmp = Derivee(*p.next);
			result.next = &tmp;
		}
		return result;
	}
	static Polynomial Primitive(Polynomial p) {
		if (p.degree < 0) { return Polynomial(); }
		Polynomial result = Polynomial(p.degree / p.coef, p.degree + 1);
		if (p.next) {
			Polynomial tmp = Primitive(*p.next);
			result.next = &tmp;
		}
		return result;
	}

	static double integral(double x1, double x2, std::function<double(double)> f, int k) {
		double result = 0;
		double pas = (x2 - x1) / k;
		for (int i = 0; x1 + i * pas < x2; i++) {
			double t = f(x1 + i * pas);
			result += t;
			/*
			if (t < 0) {
				result -= random(x1 + i * pas, pas, t, f, k);
			}
			else {
				result += random(x1 + i * pas, pas, t, f, k);
			} */
		}
		return result;
	}

	static double integral(double x1, double x2, Polynomial p) {
		Polynomial prim = Primitive(p);
		if (x1 > x2) {
			double t = x2;
			x2 = x1;
			x1 = t;
		}
		return Val_Polynomial(x1, prim) - Val_Polynomial(x2, prim);
	}
}