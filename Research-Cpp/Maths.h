#pragma once
#include <functional>
#include <vector>
#include <array>

namespace ResearchCpp {

	struct Polynomial {
		double coef;
		int degree;
		Polynomial* next;
		Polynomial() : coef(0), degree(0), next(nullptr) {}
		Polynomial(double coefficient, int degree) : coef(coefficient), degree(degree), next(nullptr) {}
		Polynomial(double coefficient, int degree, Polynomial* next) : coef(coefficient), degree(degree), next(next) {}
	};
	template <typename type>
	struct Element {
		type val;
		Element* next;
		Element() : val(0), next(nullptr) {}
		Element(int val) : val(val), next(nullptr) {}
		Element(Element* next) : val(0), next(next) {}
		Element(int val, Element* next) : val(val), next(next) {}
	};
	template <typename type>
	struct List {
		Element<type> head;
		List() : head(Element<type>()) {}
		List(Element<type> head) : head(head){}
		Append(Element<type> toadd) {
			if (!head) {
				head = toadd;
			}
			Element<type> tmp = head;
			while (tmp.next) {
				tmp = tmp.next;
			}
			tmp.next = toadd;
		}
	};
	template <typename type1, typename type2>
	struct Couple {
		type1 key;
		type2 val;
		Couple() : key(NULL), val(NULL) {}
		Couple(type1 key) : key(key), val(NULL) {}
		Couple(type1 key, type2 val) : key(key), val(val) {}
	};
	static double Val_Polynomial(double, Polynomial);
	static Polynomial Derivee(Polynomial);
	static Polynomial Primitive(Polynomial);
	static double integral(double, double, std::function<double(double)>, int k);
	static double integral(double, double, Polynomial);
	
	//numbers.cpp for already implemented types
	static bool max(int, int);
}