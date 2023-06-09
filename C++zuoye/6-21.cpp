#include <iostream>
using namespace std;
// 统计英文句子中字母的个数
int countLetters(string sentence) {
    int count = 0; // 初始化计数器
    for (int i = 0; i < sentence.length(); i++) { // 遍历句子中的每个字符
        if (isalpha(sentence[i])) { // 判断当前字符是否是字母
            count++; // 如果是字母，则计数器加1
        }
    }
    return count; // 返回字母个数
}
int main() {
    string sentence;
    cout << "请输入一个英文句子：" << endl;
    getline(cin, sentence); // 使用getline()函数读入一行字符串
    int count = countLetters(sentence); // 调用函数统计字母个数
    cout << "该句子中字母的个数为：" << count << endl; // 输出字母个数
    return 0;
}
