#include "logic.h"

void bubble_sort(int* array, int size) {
	for (int i = 0; i < size; i++) {
		if (array[i] > array[i + 1]) {
			int b = array[i];
			array[i] = array[i + 1];
			array[i + 1] = b;
		}
	}
}