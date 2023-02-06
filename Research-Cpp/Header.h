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

	static double integral(double, double, std::function<double(double)>, int k);
	static bool isSymmetric(TreeNode* root);
	static int lengthOfLIS(std::vector<int>& nums);
}