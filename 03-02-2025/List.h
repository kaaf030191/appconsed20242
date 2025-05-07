#ifndef CLASS_LIST_H
#define CLASS_LIST_H

template <typename T> class List {
	public:
		T *head = nullptr;

		void add(char element);
};

#endif