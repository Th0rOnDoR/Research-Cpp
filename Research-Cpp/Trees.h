#pragma once
#include <cstddef>
namespace ResearchCpp {
	
	class TreeNode {
	public:
		int key;
		TreeNode* left;
		TreeNode* right;

		TreeNode() {
			this->key = NULL;
			this->left = nullptr;
			this->right = nullptr;
		}

		TreeNode(int key) {
			this->key = key;
			this->left = nullptr;
			this->right = nullptr;
		}
		TreeNode(int key, TreeNode* left, TreeNode* right) {
			this->key = 0;
			this->left = left;
			this->right = right;
		}

		int Size();
		bool IsSymmetric();
		int Deep();
		List<Couple<int,int>> toList();




	};
}