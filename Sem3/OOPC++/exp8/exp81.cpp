#include <conio.h>
#include <iostream>
using namespace std;

//Declaration of template class bubble
template <class bubble>
void bubbleSort(bubble a[], int n)
{
    int i, j;

    //bubble sort algorithm inside bubble template
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                bubble b;
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
}

int main()
{
    int arr[20], k, i;
    char ch[20];

        cout << "\nEnter the number of elements in integer array:";
        cin >> k;
        cout << "\nEnter elements:";
        for (i = 0; i < k; i++)
            cin >> arr[i];

        bubbleSort(arr, k);
        cout << "\nSorted integer array: ";
        for (i = 0; i < k; i++)
            cout << arr[i] << "\t";

        cout << "\nEnter the number of characters in the array:";
        cin >> k;
        cout << "\nEnter elements:";
        for (i = 0; i < k; i++)
            cin >> ch[i];

        bubbleSort(ch, k);
        cout << "\nSorted character array: ";
        for (i = 0; i < k; i++)
            cout << ch[i] << "\t";
            
        cout << endl;
        
    getch();
    return 0;
}