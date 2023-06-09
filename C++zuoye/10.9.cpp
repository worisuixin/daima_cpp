#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};

    // 使用swap函数交换两个单值
    swap(arr1[0], arr2[0]);
    cout << "After swap(arr1[0], arr2[0]): ";
    for (int i : arr1) cout << i << " ";
    cout << endl;
    for (int i : arr2) cout << i << " ";
    cout << endl;

    // 使用iter_swap函数交换两个迭代器指向的值
    iter_swap(arr1+1, arr2+1);
    cout << "After iter_swap(arr1+1, arr2+1): ";
    for (int i : arr1) cout << i << " ";
    cout << endl;
    for (int i : arr2) cout << i << " ";
    cout << endl;

    // 使用swap_ranges函数交换两个范围内的值
    swap_ranges(arr1, arr1+3, arr2);
    cout << "After swap_ranges(arr1, arr1+3, arr2): ";
    for (int i : arr1) cout << i << " ";
    cout << endl;
    for (int i : arr2) cout << i << " ";
    
}