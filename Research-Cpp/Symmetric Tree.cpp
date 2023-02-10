#include "Header.h"
#include <functional>

namespace ResearchCpp {
	static bool _IsSymmetric(TreeNode* r, TreeNode* l) {
		if (!r && !l) {
			return true;
		}
		if (!r || !l) {
			return false;
		}
		if (r->key == l->key) {
			return _IsSymmetric(r->right, l->left) && _IsSymmetric(r->left, l->right);
		}
		return false;
	}
	static bool isSymmetric(TreeNode* root) {
		if (root == nullptr) {
			return true;
		}
		return _IsSymmetric(root->right, root->left);
	};
}

