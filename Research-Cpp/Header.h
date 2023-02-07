#pragma once
#include <functional>
#include <vector>

namespace ResearchCpp {

	struct TreeNode {
		int val;
		TreeNode* left;
		TreeNode* right;
		TreeNode() : val(0), left(nullptr), right(nullptr) {}
		TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
		TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}

	};
	struct Polynomial {
		int coef;
		int degree;
		Polynomial* next;
		Polynomial() : coef(0), degree(0), next(nullptr) {}
		Polynomial(int coefficient, int degree) : coef(coefficient), degree(degree), next(nullptr) {}
		Polynomial(int coefficient, int degree, Polynomial* next) : coef(coefficient), degree(degree), next(next) {}

	};

	static double integral(double, double, std::function<double(double)>, int k);
	static bool isSymmetric(TreeNode* root);
	static Polynomial Derivee(Polynomial);
}