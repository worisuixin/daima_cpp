#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

class Power {
public:
    int operator()(int x, int y) const {
        int result = 1;
        for(int i=0; i<y; i++) {
            result *= x;
        }
        return result;
    }
};

int main() {
    int arr[] = {2,3,4};
    transform(arr, arr+3, ostream_iterator<int>(cout, " "), bind2nd(Power(), 3));
    return 0;
}