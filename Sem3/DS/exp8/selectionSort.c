#include<stdio.h>

void selecSort(int list[],int size){
	int i ,j,min=0;
	for(i=0;i<size;i++){
		min= i;
		for(j=i+1;j<size;j++){
			if(list[j]>list[min]){
				min= j;
			}
		}
		if(min != i){
			int temp = list[min];
			list[min] = list[i];
			list[i] = temp;	
		}	
	}
}

int main(){
	int n=8 ;
   int list[]={
 	2,4,5,7,6,9,8,3
	} ;
	selecSort(list,n);
	int i;
	for(i=0;i<n;i++){
		printf("%d,",list[i]);
	}
}