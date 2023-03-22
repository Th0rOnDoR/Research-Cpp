#include "Trees.h"
#include <functional>
#include "Maths.h"
#include <string>
#include <queue>
#include "numbers.cpp"

namespace ResearchCpp {
	
 
	bool _IsSymmetric(BinTreeNode* r, BinTreeNode* l) {
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
		
	int BinTreeNode::Deep() {
		if (!this) {
			return 0;
		}
		else {
			return 1 + max((this->left)->Deep(), (this->right)->Deep());
		}
	}

	int BinTreeNode::Size() {
		if (!this) {
			return 0;
		}
		else {
			return 1 + (this->left)->Size() + (this->right)->Size();
		}
	}

	bool BinTreeNode::IsSymmetric() {
		if (!this) {
			return true;
		}
		return _IsSymmetric(this->right, this->left);
	}
	/*
	List<Couple<int, int>> BinTreeNode::ToList(int p) {
		if (!this) {
			return List<Couple<int, int>>();
		}
		else {}
		

	}
	*/
	List<int> get_average(BinTreeNode* B) {
		List<int> result;
		if (B) {
			std::queue<BinTreeNode*> q;
			std::queue<BinTreeNode*> q2;
			q.push(B);
			int sum = 0;
			int counter = 0;
			BinTreeNode tmp;
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
		}
		return result;
	}
	
	int search_hier(BinTreeNode* B, int i, int pos = 0) {
		if (!B) {
			return NULL;
		}
		if (B->key = i) {
			return pos;
		}
		int left = search_hier(B->left,i,2*pos);
		if (left) {
			return left;
		}
		return search_hier(B->right, i, 2 * pos + 1);;
	}
}

