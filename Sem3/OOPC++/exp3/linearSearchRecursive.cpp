#include<iostream>
using namespace std;

int linearSearch(int arr[], int searchElement, int index , int size){
    if(index == size){
        cout << "element not found."<<endl;
        return 0 ;
    }
    if(searchElement == arr[index] ){
        cout << "Element found at index: "<< index << endl;;
        return index;
    }
    return linearSearch(arr, searchElement, index +1, size);
}

int main(){
    int size = 5;
    int arr[5] = { 1, 3, 5, 6, 9};
    int searchElement = 0;
    
    cout << "Enter the element to be searched: ";
    cin >> searchElement;
    
    linearSearch(arr, searchElement, 0, size);
    
    return 0;
}
