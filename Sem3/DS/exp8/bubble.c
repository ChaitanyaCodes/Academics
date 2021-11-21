#include<stdio.h>
#include<stdlib.h>

void bubble(int[], int);

void main(){
	int *arr, i, n;
	
	printf("Enter the number of elements in the array :");
	scanf("%d",&n);
	
	arr = (int*) malloc(sizeof(int));
	
	printf("Enter the elements to be sorted: ");
	for(i = 0;i < n; i++)
		scanf("%d",&arr[i]);
	
	bubble(arr, n);
	
	printf("The sorted elements are : ");	
	for(i = 0;i < n; i++)
		printf("%d\t",arr[i]);
}

void bubble(int array[], int size){
	int i, j, temp;
	for(i = size;i > 1; i--)
		for(j = 0;j < i-1 ; j++)
			if(array[j] > array[j+1]){
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
}
