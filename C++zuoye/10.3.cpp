#include <iostream>
#include <vector>
int main() {
    std::vector<int> s;

    for(int i = 0; i < 10; i++) {
        s.push_back(i);
        std::cout << "Size: " << s.size() << ", Capacity: " << s.capacity() << std::endl;
    }

    return 0;
}
