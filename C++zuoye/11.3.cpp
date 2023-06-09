#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outfile("test1.txt"); // 建立一个输出文件流
    if(outfile.is_open()) // 判断是否成功打开文件
    {
        outfile << "已成功写入文件!"; // 写入文件
        outfile.close(); // 关闭文件
    }
    else
    {
        cout << "文件打开失败！" << endl;
    }
    return 0;
}
