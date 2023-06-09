#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        
        // 输出当前数组
        cout << "Sorting: ";
        for(int k = 0; k < n; ++k) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int data[]={
         1, 3, 5, 7, 9,11,13,15,17,19,
         2, 4, 6, 8,10,12,14,16,18,20
    };
    int n=sizeof(data)/sizeof(data[0]);

    cout << "Original: ";
    for(int k=0;k<n;++k)
      cout<<data[k]<<" ";
      
    cout << endl;
    
    insertionSort(data,n);

    cout << "\nSorted: ";
    for(int k=0;k<n;++k)
      cout<<data[k]<<" ";

   return 0;
}