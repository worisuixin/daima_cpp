#include <iostream>
using namespace std;

int main() //
{
const int N = 8; //学生人数
int score[N]; //定义一个长度为N的整形数组，用于储存N个学生的成绩
int sum = 0; //总分初始化为0
double average; //定义平均分

for (int i = 0; i < N; i++) //注意，下标从0开始，小于N
{
    cout << "请输入第" << i + 1 << "个学生的成绩：" ;
    cin >> score[i]; //输入第i个学生的成绩
    sum += score[i]; //计算总分
}

average = sum * 1.0 / N; //计算平均分（用1.0乘是因为要将sum转换为double类型进行浮点数除法）

cout << "8名学生的平均成绩为:" << average << endl; //显示平均分

return 0; 
}