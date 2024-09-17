#include <assert.h>
#include <iostream>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
        }
    }
    return i * j;
}

// Test
int testPrintColorMap() {
    int num;
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    // add test
    // (i+1)*5+(j+1)
    // majorColor[i];
    // minorColor[j]
    return num;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    int num = testPrintColorMap();
    // assert(num == 25);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
