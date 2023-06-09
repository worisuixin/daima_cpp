#include <iostream>
using namespace std;
int main() {
int m, n; // 矩阵的行数和列数
cout << "请输入矩阵的行数和列数：";
cin >> m >> n;
int matrix[m][n]; // 定义矩阵
cout << "请输入矩阵的元素：" << endl;
for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
        cin >> matrix[i][j];
    }
}
cout << "转置后的矩阵为：" << endl;
for(int i = 0; i < n; i++) { // 行列互换，输出转置矩阵
    for(int j = 0; j < m; j++) {
        cout << matrix[j][i] << '\t';
    }
    cout << endl;
}
return 0;
}