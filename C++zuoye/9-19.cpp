#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        int key = arr[i];
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int data1[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19,
                   2, 4, 6, 8, 10, 12,14 ,16 ,18 ,20};
    int n1 = sizeof(data1) / sizeof(data1[0]);

    insertionSort(data1, n1);

    cout << "输入要查找的数字: ";
    int x;
    cin >> x;
    int index = binarySearch(data1,0,n1-1,x);

    if(index==-1){
        cout<<"数字 "<<x<<" 找不到";
    }else{
        cout<<"数字 "<<x<<" 在这 "<<index;
    }

    return 0;
}