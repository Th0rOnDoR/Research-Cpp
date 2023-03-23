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

	BinTreeNodeSize __Copy(BinTreeNodeSize c) {
		BinTreeNodeSize result = BinTreeNodeSize(c.key, nullptr, nullptr, 1);
		if (c.left) {
			BinTreeNodeSize left = __Copy(*c.left);
			result.left = &left;
			result.size += left.size;
		}
		if (c.right) {
			BinTreeNodeSize right = __Copy(*c.right);
			result.right = &right;
			result.size += right.size;
		}
		return result;
	}

	BinTreeNodeSize* ListToBinSize(std::vector<int*>* a, int i) {
		if (i >= a->size() || (*a)[i] == nullptr) {
			return nullptr;
		}
		else {
			BinTreeNodeSize* l = ListToBinSize(a, i * 2);
			BinTreeNodeSize main = BinTreeNodeSize(*((*a)[i]), nullptr, nullptr, 1);
			if (l) {
				BinTreeNodeSize k = __Copy(*l);
				main.left = &k;
				main.size += k.size;
			}
			BinTreeNodeSize* r = ListToBinSize(a, i * 2 + 1);
			if (r) {
				main.right = r;
				main.size += r->size;
			}
			return &main;
		}
	}

	int __GetTreeHeight(BinTreeNodeSize* r) {
		if (!r) {
			return -1;
		}
		else {
			return 1 + max(__GetTreeHeight(r->left), __GetTreeHeight(r->right));
		}
	}

	void __recBinToVect(BinTreeNodeSize* r, int i, std::vector<int*>* a) {
		if (!r) {
			return;
		}
		std::vector<int*> t = *a;
		int key = r->key;
		t[i] = &(key);
		__recBinToVect(r->left, i * 2, a);
		__recBinToVect(r->right, i * 2 + 1, a);
	}

	std::vector<int*> BinToVect(BinTreeNodeSize* r) {
		int height = __GetTreeHeight(r);
		std::vector<int*> result = std::vector<int*>(exposant(2,height));
		for (int i = 0; i < exposant(2, height); i++) {
			result[i] = nullptr;
		}
		__recBinToVect(r, 1, &result);
		return result;
	}
}