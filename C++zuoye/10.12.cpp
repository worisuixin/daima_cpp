#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

int main() {
    std::vector<int> v(10); // 创建一个大小为10的vector

    std::random_device rd; // 获取一个真正的随机数生成器
    std::mt19937 gen(rd()); // 使用Mersenne Twister算法作为生成器引擎
    std::uniform_int_distribution<> dis(0, 9); // 创建一个均匀分布在[0,9]区间内的整数分布器

    // 使用generate算法将v中的元素赋值为随机数
    std::generate(v.begin(), v.end(), [&]() { return dis(gen); });

    // 输出v中的内容
    for (auto i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}