#ifndef CLASS_CPP_QUEUE
#define CLASS_CPP_QUEUE

#include <queue>

template<class T> class Queue : public std::queue<T> {
	public:
		T dequeue() {
			T tmp = this->front();

			std::queue<T>::pop();

			return tmp;
		}

		void enqueue(const T& el) {
			this->push(el);
		}
};

#endif