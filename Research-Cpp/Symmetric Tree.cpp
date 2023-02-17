#include "Trees.h";
#include <functional>
#include "Maths.h"
#include <string>;
#include <queue>;

namespace ResearchCpp {
	
 
	bool _IsSymmetric(TreeNode* r, TreeNode* l) {
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
		
	int TreeNode::Deep() {
		if (!this) {
			return 0;
		}
		else {
			return 1 + max((this->left)->Deep(), (this->right)->Deep());
		}
	}

	int TreeNode::Size() {
		if (!this) {
			return 0;
		}
		else {
			return 1 + (this->left)->Size() + (this->right)->Size();
		}
	}

	bool TreeNode::IsSymmetric() {
		if (!this) {
			return true;
		}
		return _IsSymmetric(this->right, this->left);
	}
	List<Couple<int, int>> TreeNode::toList() {
		if (!this) {

		}
	}

	List<int> get_average(TreeNode* B) {
		List<int> result;
		if (B) {
			std::queue<TreeNode*> q;
			std::queue<TreeNode*> q2;
			q.push(B);
			int sum = 0;
			int counter = 0;
			TreeNode tmp;
			while (!q.empty()) {
				tmp = *q.front();
				sum += B->key;
				counter++;
				if (B->left) {
					q2.push(B->left);
				}
				if (B->right) {
					q2.push(B->right);
				}
				if (q.empty()) {
					Element<int> tmp2 = new Element<int>(sum / counter);
					result.Append(tmp2);
					(q, q2) = (q2, q);
					sum = 0;
					counter = 0;
				}
			}
			return result;
		}
	}
}

