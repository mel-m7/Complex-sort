
#include "bubbleSort.h"

void bubbleSort(std::vector<Complex>& arr, int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j].complexAbs() > arr[j + 1].complexAbs()) {
				arr[j].swap(arr[j+1]);
			}
		}
	}
}
