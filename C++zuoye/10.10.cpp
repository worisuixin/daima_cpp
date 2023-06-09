#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main() {
// 创建两个 set 集合
set<int> set1, set2;

// 输入两个集合
cout << "请输入第一个集合，以负数结束：" << endl;
int temp1;
while (cin >> temp1 && temp1 >= 0) {
    set1.insert(temp1);
}
cout << "请输入第二个集合，以负数结束：" << endl;
int temp2;
while (cin >> temp2 && temp2 >= 0) {
    set2.insert(temp2);
}

// 输出同属于两组的整数
vector<int> intersection;
set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), back_inserter(intersection));
cout << "同属于两个集合的整数有：" << endl;
for (auto i : intersection) {
    cout << i << " ";
}
cout << endl;

// 输出属于至少一组的整数
vector<int> unionSet;
set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), back_inserter(unionSet));
cout << "属于至少一组的整数有：" << endl;
for (auto i : unionSet) {
    cout << i << " ";
}
cout << endl;

// 输出属于第一组但不属于第二组的整数
vector<int> difference;
set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), back_inserter(difference));
cout << "属于第一组但不属于第二组的整数有：" << endl;
for (auto i : difference) {
    cout << i << " ";
}
cout << endl;

return 0;
}