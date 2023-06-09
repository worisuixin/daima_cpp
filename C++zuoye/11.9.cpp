#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inFile("input.txt"); // 打开原始文本文件
    std::ofstream outFile("output.txt"); // 打开输出文本文件
    if (inFile && outFile) { // 打开文件成功
        std::string line; // 读取每一行的缓存
        int lineNumber = 1; // 行号从1开始
        while (std::getline(inFile, line)) { // 逐行读取原始文本文件
            outFile << lineNumber << ": " << line << std::endl; // 在输出文本文件中加入行号并输出
            ++lineNumber; // 行号加1
        }
        std::cout << "Done." << std::endl; // 输出完成提示
    } else { // 打开文件失败
        std::cerr << "Failed to open file." << std::endl; // 输出错误提示
    }
    return 0; // 返回程序执行的状态
}
