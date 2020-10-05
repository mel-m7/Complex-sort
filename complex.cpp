#include "complex.h"
#include "bubbleSort.h"



int main() {
	int size;
	std::cin >> size;
	std::vector<Complex> arr;
	for (int i = 0; i < size; ++i) {
		double real, imag;
		std::cin >> real >> imag;
		Complex c(real, imag);
		arr.push_back(c);
	}

	bubbleSort(arr, size);
	for (int i = 0; i < size; ++i) {
		arr[i].printInfo();
	}
	return 0;
}
