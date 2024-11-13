#include <iostream>

template <typename T> class Storage {
	public:
		T array[1000];
		int elementNumber = 0;

		Storage() {}
};