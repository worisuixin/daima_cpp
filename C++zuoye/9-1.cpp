#include <iostream>
using namespace std;

template <typename T>
class Array {
private:
    T* arr;  
    int size;  

public:
    Array(int n);  /
    ~Array();  
    T& operator[](int i);  
    const T& operator[](int i) const;  
};

template <typename T>
Array<T>::Array(int n) {
    arr = new T[n];
    size = n;
}

template <typename T>
Array<T>::~Array() {
    delete [] arr;
}

template <typename T>
T& Array<T>::operator[](int i) {
    return arr[i];
}

template <typename T>
const T& Array<T>::operator[](int i) const {
    return arr[i];
}


int main() {
    int n;
    cout << "请输入学生人数：";
    cin >> n;

    Array<float> scores(n);
    float sum = 0.0f;  

    for (int i = 0; i < n; ++i) {
        cout << "请输入第" << i + 1 << "个学生的成绩：";
        cin >> scores[i];
        sum += scores[i];
    }

    float avg = sum / n;  

    cout << "平均成绩为：" << avg << endl;

    return 0;}