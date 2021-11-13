#include<stdio.h>
#include<conio.h>
#define MAX 8

void linearSearch(int elem, int arr[MAX]);

int main() {
	int arr[MAX] = { 0 };
	int searchElem = 0, i = 0;

	printf_s("Enter the elements of the array\n");
	for (i = 0; i < MAX; i++) {
		printf_s("arr[%d] = ", i);
		scanf_s("%d", &arr[i]);
		printf_s("\n");
	}

	printf_s("Enter the element to be searched: ");
	scanf_s("%d", &searchElem);
	linearSearch(searchElem, arr);

	_getch();
	return 0;
}

void linearSearch(int elem, int arr[MAX]) {
	int i = 0;
	for (i = 0; i < MAX; i++) {
		if (elem == arr[i]) {
			printf_s("Element found at index: %d", i);
			return;
		}
		//printf_s("%d\t", arr[i]);
	}
	printf_s("Element not found.");
	return;
}