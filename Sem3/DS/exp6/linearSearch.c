#include<stdio.h>
#include<conio.h>
#define MAX 8

void linearSearch(int elem, int arr[MAX]);

int main() {
	int arr[MAX] = { 0 };
	int searchElem = 0, i = 0;

	printf("Enter the elements of the array\n");
	for (i = 0; i < MAX; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
		printf("\n");
	}

	printf("Enter the element to be searched: ");
	scanf("%d", &searchElem);
	linearSearch(searchElem, arr);

	_getch();
	return 0;
}

void linearSearch(int elem, int arr[MAX]) {
	int i = 0;
	for (i = 0; i < MAX; i++) {
		if (elem == arr[i]) {
			printf("Element found at index: %d", i);
			return;
		}
	}
	printf("Element not found.");
	return;
}