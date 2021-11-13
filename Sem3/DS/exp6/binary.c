#include<stdio.h>
#include<conio.h>
#define MAX 8

void binarySearch(int elem, int arr[MAX]) {
	int i = 0;
	int low = 0, high = MAX - 1, mid = (low + high)/2; 
	
	while (high >= low) {
		if (arr[mid] < elem) {
			low = mid + 1;
		}
		else if(arr[mid] == elem) {
			printf_s("Element found at index %d", mid);
			return;
		}
		else {
			high = mid - 1;
		}
		mid = (high + low) / 2;
	}

	if (low > high) {
		printf_s("Element not found");
	}
	return;
}

int main() {
	int arr[MAX] = { 0 };
	int searchElem = 0, i = 0;
	printf_s("Enter the elements of the array in sorted order.\n");
	for (i = 0; i < MAX; i++) {
		printf_s("array[%d] = ", i);
		scanf_s("%d", &arr[i]);
		printf_s("\n");
	}

	printf_s("Enter the element to be searched: ");
	scanf_s("%d", &searchElem);
	binarySearch(searchElem, arr);

	_getch();
	return 0;
}