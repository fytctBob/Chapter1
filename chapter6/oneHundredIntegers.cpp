#include <iostream>
#include <fstream>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));

    const int numIntegers = 100;
    const int minValue = 1;
    const int maxValue = 100;
    int integers[numIntegers];
    for (int i = 0; i < numIntegers; ++i) {
        int randomValue = std::time(nullptr) + i;
        std::srand(randomValue);
        int randomInt = minValue + (std::rand() % (maxValue - minValue + 1));
        integers[i] = randomInt;
    }

    std::ofstream outFile("calculateSumAvg.txt");
    if (outFile.is_open()) {
        for (int i = 0; i < numIntegers; ++i) {
            outFile << integers[i] << "\n";
        }
        outFile.close();
        std::cout << "Integers written to file successfully.\n";
    } else {
        std::cerr << "Failed to open file.\n";
        return 1;
    }

    return 0;
}
