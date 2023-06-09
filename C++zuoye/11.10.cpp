#include<iostream>
#include<fstream>
#include<unordered_map>

using namespace std;

int main(){
wifstream fin(“input.txt”); // 宽输入流读入文件
fin.imbue(locale(“zh_CN.UTF-8”)); // 设置文件编码为UTF-8
unordered_map<wchar_t, int> counts; // 用哈希表记录每个字符出现的次数

wchar_t ch;
while(fin>>ch){
    counts[ch]++;
}

wofstream fout("output.txt"); // 宽输出流写入文件
fout.imbue(locale("zh_CN.UTF-8")); // 设置文件编码为UTF-8

for(auto it=counts.begin(); it!=counts.end(); ++it){
    fout<<it->first<<" "<<it->second<<endl; // 输出每个字符和对应的计数结果
}

fin.close();
fout.close();

return 0;
}