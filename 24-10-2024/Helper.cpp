#include <iostream>

#include "Helper.h"

int Helper::linealSearch(int arrayNumber[], int elementQuantity, int value) {
    for(unsigned int i = 0; i < elementQuantity; i++) {
		if(arrayNumber[i] == value) {
			return i;
		}
	}

    return -1;
}

int Helper::binarySearch(int arrayNumber[], int positionStart, int positionEnd, int value) {
    int midPosition = ((positionEnd - positionStart) / 2) + positionStart;

    if(arrayNumber[midPosition] == value) {
        return midPosition;
    }

    if(arrayNumber[midPosition] > value) {
        positionEnd = midPosition - 1;
    } else {
        positionStart = midPosition + 1;
    }

    if(positionStart == positionEnd) {
        return -1;
    }

    binarySearch(arrayNumber, positionStart, positionEnd, value);
}