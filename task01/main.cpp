#include "util.h"
#include "logic.h"

#define SIZE 20
int main() {
	int array[SIZE];

	init(array, SIZE, -50, 50);
	cout << "array before sort: " << convert(array, SIZE) << endl;

	bubble_sort(array, SIZE);

	cout << "array after sorting: " << convert(array, SIZE) << endl;

	return 0;


}