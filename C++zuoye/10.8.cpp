#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;

int main() {
    multiset<string> words1;
    map<string, int> words2;
    string word;
    while (cin >> word) {
        cout << "输入单词：" << word << endl;
        auto found = words1.find(word);
        if (found == words1.end()) {
            cout << "该单词从未出现过" << endl;
        } else {
            cout << "该单词已经出现过" << endl;
            cout << "多重集合出现次数为：" << words1.count(word) << endl;
            cout << "映射出现次数为：" << words2[word] << endl;
        }
        words1.insert(word);
        ++words2[word];
    }
    return 0;
}
