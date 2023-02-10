#pragma once
#include <functional>
#include <vector>

namespace ResearchCpp {

	struct TreeNode {
		int key;
		TreeNode* left;
		TreeNode* right;
		TreeNode() : key(0), left(nullptr), right(nullptr) {}
		TreeNode(int x) : key(x), left(nullptr), right(nullptr) {}
		TreeNode(int x, TreeNode* left, TreeNode* right) : key(x), left(left), right(right) {}
	};
	struct Polynomial {
		double coef;
		int degree;
		Polynomial* next;
		Polynomial() : coef(0), degree(0), next(nullptr) {}
		Polynomial(double coefficient, int degree) : coef(coefficient), degree(degree), next(nullptr) {}
		Polynomial(double coefficient, int degree, Polynomial* next) : coef(coefficient), degree(degree), next(next) {}
	};
	struct Element {
		int val;
		Element* next;
		Element() : val(0), next(nullptr) {}
		Element(int val) : val(val), next(nullptr) {}
		Element(Element* next) : val(0), next(next) {}
		Element(int val, Element* next) : val(val), next(next) {}
	};
	struct List {
		Element head;
		int size;
		List() : head(Element()), size(1) {}
		List(Element head) : head(head), size (1) {}
	};

	static bool isSymmetric(TreeNode* root);
	static double Val_Polynomial(double, Polynomial);
	static Polynomial Derivee(Polynomial);
	static Polynomial Primitive(Polynomial);
	static double integral(double, double, std::function<double(double)>, int k);
	static double integral(double, double, Polynomial);
}