#include<stdio.h>
#define SIZE 8

int binSearch(int key,int arr[],int len){
	int low = 0, high = len-1, mid;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==key){
			printf("Element found at index %d\n", mid);
			return;
		}else if(arr[mid]>key){
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	if (low > high)
		printf("Element not Found\n");
}

int main() {
	int arr[SIZE] = { 0 };
	int searchElem = 0, i = 0;
	printf("Enter the elements of the array in sorted order.\n");
	for (i = 0; i < SIZE; i++) {
		printf("array[%d] = ", i);
		scanf("%d", &arr[i]);
		printf("\n");
	}

	printf("Enter the element to be searched: ");
	scanf
	("%d", &searchElem);
	binSearch(searchElem,arr,SIZE);

	return 0;
}