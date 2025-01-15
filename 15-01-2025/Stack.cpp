#ifndef CLASS_CPP_STACK
#define CLASS_CPP_STACK

#include <stack>

template<class T> class Stack : public std::stack<T> {
	public:
		T pop() {
			T tmp = this->top();

			std::stack<T>::pop();

			return tmp;
		}
};

#endif