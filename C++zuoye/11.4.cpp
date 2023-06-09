#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile("test1.txt"); // 建立一个输入文件流
    if(infile.is_open()) // 判断是否成功打开文件
    {
        char ch;
        while(infile.get(ch)) // 读取文件中的字符
        {
            cout << ch; // 显示文件内容
        }
        infile.close(); // 关闭文件
    }
    else
    {
        cout << "文件打开失败！" << endl;
    }
    return 0;
}
