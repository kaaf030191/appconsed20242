#include <iostream>

template <typename T> class MyArray {
    public:
        T elementArray[1000];
        int elementNumber;

        MyArray() {}
        MyArray(int en): elementNumber(en) {}

        void insertData();
        void showData();
};