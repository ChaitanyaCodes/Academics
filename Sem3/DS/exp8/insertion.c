#include<stdio.h>
#include<stdlib.h>

void insertion(int[], int);
void main(){
	int *arr, i, n;
	
	printf("Enter the number of elements in the array :");
	scanf("%d",&n);
	
	arr = (int*) malloc(sizeof(int));
	
	printf("Enter the elements to be sorted: ");
	for(i = 0;i < n; i++)
		scanf("%d",&arr[i]);
	
	insertion(arr, n);
	
	printf("The sorted elements are : ");	
	for(i = 0;i < n; i++)
		printf("%d\t",arr[i]);
}

void insertion(int array[], int size){
	int i, j, temp;
	for(i = 1;i < size; i++){
		temp = array[i];
		for(j = i-1 ;j >= 0; j--){
		    if(array[j] > temp){
		        array[j+1] = array[j];
		    }else{
		        break;
		    }
		}
		array[j+1] = temp;	
	}
}
