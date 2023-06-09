#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    // 打开文件，如果不存在则创建
    ofstream file("test1.txt", ios::app);

    if (file.is_open()) {
        // 写入文本到文件中
        file << "已成功添加字符!" << endl;

        // 关闭文件
        file.close();
    } else {
        cout << "无法打开文件！" << endl;
        return 1;
    }

    // 打开文件
    ifstream in("test1.txt");

    if (in.is_open()) {
        // 读取文件内容
        ostringstream content;
        content << in.rdbuf();
        string text = content.str();

        // 关闭文件
        in.close();

        // 输出文件内容
        cout << text << endl;
    } else {
        cout << "无法打开文件！" << endl;
        return 1;
    }

    return 0;
}
