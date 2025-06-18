#include <iostream>
#include <chrono>

class Learn {
public:
    void test() {
        volatile int x = 5 + 3; // use volatile to prevent optimization
    }

    inline void test1() {
        volatile int x = 5 + 3;
    }
};

int main() {
    Learn l;
    int iterations = 100000000; // 100 million

    auto start1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i) {
        l.test();
    }
    auto stop1 = std::chrono::high_resolution_clock::now();
    auto duration1 = std::chrono::duration_cast<std::chrono::milliseconds>(stop1 - start1);
    std::cout << "Normal function took " << duration1.count() << " ms\n";

    auto start2 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i) {
        l.test1();
    }
    auto stop2 = std::chrono::high_resolution_clock::now();
    auto duration2 = std::chrono::duration_cast<std::chrono::milliseconds>(stop2 - start2);
    std::cout << "Inline function took " << duration2.count() << " ms\n";


    while(1) {}

    return 0;
}
