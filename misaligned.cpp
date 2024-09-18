#include <assert.h>
#include <iostream>
#include <sstream>
#include <string>

int printColorMap(std::ostream& out) {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            out << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
        }
    }
    return i * j;
}

// Test
int testPrintColorMap() {
    int num = 0;
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    std::stringstream ss;
    printColorMap(ss);
    std::string input;
    while (std::getline(ss, input, '\n')) {
        std::string expectedInputStr = std::to_string(i * 5 + j) +
                    " | " + majorColor[i] + " | " + minorColor[j];
        j++;
        if (j == 5) {
            i++;
            j = 0;
        }
        // std::cout << expectedInputStr << "\n";
        if (expectedInputStr == input) {
            num++;
        }
    }
    return num;
}

int main() {
    int result = printColorMap(std::cout);
    assert(result == 25);
    auto num = testPrintColorMap();
    assert(num == 25);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
