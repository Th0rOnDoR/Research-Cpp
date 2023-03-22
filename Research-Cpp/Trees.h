#pragma once

#include <cstddef>
#include "Maths.h"

namespace ResearchCpp {
	
	struct BinTreeNode {
		int key;
		BinTreeNode* left;
		BinTreeNode* right;

		BinTreeNode() {
			this->key = NULL;
			this->left = nullptr;
			this->right = nullptr;
		}

		BinTreeNode(int key) {
			this->key = key;
			this->left = nullptr;
			this->right = nullptr;
		}
		BinTreeNode(int key, BinTreeNode* left, BinTreeNode* right) {
			this->key = 0;
			this->left = left;
			this->right = right;
		}
		int Size();
		bool IsSymmetric();
		int Deep();
		List<Couple<int,int>> ToList(int p = 0); 
	};

	template<typename T>
	struct Queue
	{
		Element<T>* Head;
		Element<T>* Last;
		Queue() : Head(nullptr), Last(nullptr) {}
		Queue(T head) : Head(Element<T>(head, nullptr)), Last(Element<T>(head, nullptr)) {}
		Element<T> Dequeue() {
			if (!Head) { return nullptr; }
			if (Head->next) {
				T result = Head->val;
				Head = Head->next;
				return result;
			}
			else {
				T result = Head->val;
				Head = nullptr;
				Last = nullptr;
				return result;
			}
		}
		void Enqueue(T val) {
			if (!Last) { Head = Element<T>(val); Head = Last; }
			if (Last) {
				Last->next = Element<T>(val);
				Last = Last.next;
			}
			else {
				Head = Element<T>(val);
				Last = Head;
			}
		}
		bool IsEmpty() {
			return Head == nullptr;
		}

	};
}