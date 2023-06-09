#include <iostream>
using namespace std;

template <typename T>
int seqSearch(T arr[], int size, T target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int data1[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19,
                   2, 4, 6, 8, 10, 12, 14, 16 ,18 ,20};
    int size = sizeof(data1)/sizeof(int);
    int target;

    cout << "请输入一个数字：";
    cin >> target;

    int index = seqSearch(data1, size, target);

    if (index == -1) {
        cout << "没有找到该数字" << endl;
    } else {
        cout << "该数字在数组中的位置为：" << index << endl;
    }

    return 0;
}
