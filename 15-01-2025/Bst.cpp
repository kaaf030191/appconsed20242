#ifndef CLASS_CPP_BST
#define CLASS_CPP_BST

#include <iostream>

#include "Queue.cpp"
#include "Stack.cpp"
#include "BstNode.cpp"

template<class T> class Bst {
	public:
		Bst() {
			root = 0;
		}

		~Bst() {
			clear();
		}

		void clear() {
			clear(root);
			
			root = 0;
		}

		bool isEmpty() const {
			return root == 0;
		}

		void preorder() {
			preorder(root);
		}

		void inorder() {
			inorder(root);
		}

		void postorder() {
			postorder(root);
		}

		T* search(const T& el) const {
			return search(root, el);
		}

		void breadthFirst();
		void iterativePreorder();
		void iterativeInorder();
		void iterativePostorder();
		void MorrisInorder();
		void insert(const T&);
		void deleteByMerging(BstNode<T>*&);
		void findAndDeleteByMerging(const T&);
		void deleteByCopying(BstNode<T>*&);
		void balance(T*, int, int);

	protected:
		BstNode<T>* root;
		void clear(BstNode<T>*);
		T* search(BstNode<T>*, const T&) const;
		void preorder(BstNode<T>*);
		void inorder(BstNode<T>*);
		void postorder(BstNode<T>*);

		virtual void visit(BstNode<T>* p) {
			std::cout << p->el << ' ';
		}
};

template<class T> void Bst<T>::breadthFirst() {
	Queue<BstNode<T>*> queue;
	BstNode<T> *p = root;

	if(p != 0) {
		queue.enqueue(p);

		while(!queue.empty()) {
			p = queue.dequeue();

			visit(p);

			if(p->left != 0) {
				queue.enqueue(p->left);
			}

			if(p->right != 0) {
				queue.enqueue(p->right);
			}
		}
	}
}

template<class T> void Bst<T>::iterativePreorder() {
	Stack<BstNode<T>*> travStack;
	BstNode<T> *p = root;

	if(p != 0) {
		travStack.push(p);

		while(!travStack.empty()) {
			p = travStack.pop();

			visit(p);

			if(p->right != 0) {
				travStack.push(p->right);
			}

			if(p->left != 0) {
				travStack.push(p->left);
			}
		}
	}
}

template<class T> void Bst<T>::iterativeInorder() {
	Stack<BstNode<T>*> travStack;
	BstNode<T> *p = root;

	while(p != 0) {
		while(p != 0) {
			if(p->right) {
				travStack.push(p->right);
			}

			travStack.push(p);

			p = p->left;
		}

		p = travStack.pop();

		while(!travStack.empty() && p->right == 0) {
			visit(p);
			p = travStack.pop();
		}

		visit(p);

		if(!travStack.empty()) {
			p = travStack.pop();
		} else {
			p = 0;
		}
	}
}

template<class T> void Bst<T>::iterativePostorder() {
	Stack<BstNode<T>*> travStack;

	BstNode<T>* p = root, *q = root;

	while(p != 0) {
		for ( ; p->left != 0; p = p->left) {
			travStack.push(p);
		}

		while(p->right == 0 || p->right == q) {
			visit(p);

			q = p;

			if(travStack.empty()) {
				return;
			}

			p = travStack.pop();
		}

		travStack.push(p);

		p = p->right;
	}
}

template<class T> void Bst<T>::MorrisInorder() {
	BstNode<T> *p = root, *tmp;

	while(p != 0) {
		if(p->left == 0) {
			visit(p);

			p = p->right;
		}
		else {
			tmp = p->left;

			while(tmp->right != 0 && tmp->right != p) {
				tmp = tmp->right;
			}

			if(tmp->right == 0) {
				tmp->right = p; 
				p = p->left; 
			} else { 
				visit(p); 

				tmp->right = 0; 
				
				p = p->right; 
			} 
		}
	}
}

template<class T> void Bst<T>::insert(const T& el) {
	BstNode<T> *p = root, *prev = 0;

	while(p != 0) {
		prev = p;

		if(el == p->el) {
			std::cout << "El elemento [" << el << "] ya existe por lo que no se ha vuelto a insertar." << std::endl;

			return;
		}

		if(el < p->el) {
			p = p->left;
		} else {
			p = p->right;
		}
	}

	if(root == 0) {
		root = new BstNode<T>(el);
	} else {
		if(el < prev->el) {
			prev->left = new BstNode<T>(el);
		} else {
			prev->right = new BstNode<T>(el);
		}
	}
}

template<class T> void Bst<T>::deleteByMerging(BstNode<T>*& node) {
	BstNode<T> *tmp = node;

	if(node != 0) {
		if(!node->right) {
			node = node->left;
		} else {
			if(node->left == 0) {
				node = node->right;
			} else {
				tmp = node->left;

				while(tmp->right != 0) {
					tmp = tmp->right;
				}

				tmp->right = node->right; 
				
				tmp = node;
				node = node->left; 
			}
		}

		delete tmp;
	}
}

template<class T> void Bst<T>::findAndDeleteByMerging(const T& el) {
	BstNode<T> *node = root, *prev = 0;

	while(node != 0) {
		if(node->el == el) {
			break;
		}

		prev = node;

		if(el < node->el) {
			node = node->left;
		} else {
			node = node->right;
		}
	}

	if(node != 0 && node->el == el) {
		if(node == root) {
			deleteByMerging(root);
		} else {
			if(prev->left == node) {
				deleteByMerging(prev->left);
			} else {
				deleteByMerging(prev->right);
			}
		}
	} else {
		if(root != 0) {
			std::cout << "element" << el << "is not in the tree\n";
		} else {
			std::cout << "the tree is empty\n";
		}
	}
}

template<class T> void Bst<T>::deleteByCopying(BstNode<T>*& node) {
	BstNode<T> *previous, *tmp = node;

	if(node->right == 0) {
		node = node->left;
	} else {
		if(node->left == 0) {
			node = node->right;
		} else {
			tmp = node->left;
			previous = node;

			while(tmp->right != 0) {
				previous = tmp;
				tmp = tmp->right;
			}

			node->el = tmp->el;

			if(previous == node) {
				previous ->left = tmp->left;
			} else {
				previous ->right = tmp->left;
			}
		}
	}

	delete tmp;
}

template<class T> void Bst<T>::balance(T data[], int first, int last) {
	if(first <= last) {
		int middle = (first + last)/2;

		insert(data[middle]);

		balance (data,first,middle-1);
		balance (data,middle+1,last);
	}
}

template <class T> void Bst<T>::clear(BstNode<T>* node) {
	if(node != nullptr) {
		clear(node->left);
		clear(node->right);

		delete node;
	}
}

template<class T> T* Bst<T>::search(BstNode<T>* p, const T& el) const {
	while(p != 0) {
		if(el == p->el) {
			return &p->el;
		} else {
			if(el < p->el) {
				p = p->left;
			} else {
				p = p->right;
			}
		}
	}

	return 0;
}

template<class T> void Bst<T>::preorder(BstNode<T> *p) {
	if(p != 0) {
		visit(p);
		preorder(p->left);
		preorder(p->right);
	}
}

template<class T> void Bst<T>::inorder(BstNode<T> *p) {
	if(p != 0) {
		inorder(p->left);
		visit(p);
		inorder(p->right);
	}
}

template<class T> void Bst<T>::postorder(BstNode<T>* p) {
	if(p != 0) {
		postorder(p->left);
		postorder(p->right);
		visit(p);
	}
}

#endif