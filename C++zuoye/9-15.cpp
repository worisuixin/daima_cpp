#include <iostream>
using namespace std;
template <typename T>
void bubble_sort_desc(T arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        bool flag = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        cout << "Round " << i + 1 << ": ";
        for (int k = 0; k < n; ++k) {
            cout << arr[k] << ' ';
        }
        cout << endl;
        if (!flag) break;
    }
}

int main() {
    int data[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 
                  2, 4, 6, 8, 10, 12,14,16,18,20};
    int size = sizeof(data)/sizeof(int);

    bubble_sort_desc(data,size);

    return 0;
}