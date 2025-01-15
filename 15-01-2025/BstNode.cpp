#ifndef CLASS_CPP_BST_NODE
#define CLASS_CPP_BST_NODE

template<class T> class BstNode {
	public:
		BstNode() {
			left = right = 0;
		}

		BstNode(const T& e, BstNode<T> *l = 0, BstNode<T> *r = 0) {
			el = e; left = l; right = r;
		}

		T el;
		BstNode<T> *left, *right;
};

#endif