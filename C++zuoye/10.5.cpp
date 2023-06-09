#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include<chrono>
using namespace std;

template<typename Container>
int josephus(int n, int m) {
    Container knights;
    for(int i = 1; i <= n; i++) {
        knights.push_back(i);
    }
    typename Container::iterator current_pos = knights.begin();
    while(n > 1) {
        current_pos = knights.erase(current_pos);
        if(current_pos == knights.end()) {
            current_pos = knights.begin();
        }
        --n;
        for(int i = 0; i < m - 1; i++) {
            ++current_pos;
            if(current_pos == knights.end()) {
                current_pos = knights.begin();
            }
        }
    }
    return *current_pos;
}

int main() {
    int n = 10000;
    int m = 5;

    // vector
    auto start_time = chrono::steady_clock::now();
    cout << "The last knight with vector container: " << josephus<vector<int>>(n, m) << endl;
    auto end_time = chrono::steady_clock::now();
    cout << "Time used with vector container: "
         << chrono::duration_cast<chrono::milliseconds>(end_time - start_time).count()
         << " ms" << endl;

    // deque
    start_time = chrono::steady_clock::now();
    cout << "The last knight with deque container: " << josephus<deque<int>>(n, m) << endl;
    end_time = chrono::steady_clock::now();
    cout << "Time used with deque container: "
         << chrono::duration_cast<chrono::milliseconds>(end_time - start_time).count()
         << " ms" << endl;

     // list
    start_time = chrono::steady_clock::now();
    cout << "The last knight with list container: " << josephus<list<int>>(n, m) << endl;
    end_time = chrono::steady_clock::now();
    cout << "Time used with list container: "
         << chrono::duration_cast<chrono::milliseconds>(end_time - start_time).count()
         << " ms" << endl;

    return 0;
}