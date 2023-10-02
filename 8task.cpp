#include <iostream>

int main() {
    start:
    start1:
    int num1, num2;
    std::cout << "Enter the first integer number: ";
    std::cin >> num1;
    std::cout << "Enter the second integer number: ";
    std::cin >> num2;
    float result1 = 1.0 / static_cast<float>(num1);
    float result2 = 1.0 / static_cast<float>(num2);
    if (std::abs(result1 - result2) < 0.000001) {
        std::cout << "The results are approximately equal." << std::endl;
        goto start1;
    } else {
        std::cout << "The results are not approximately equal." << std::endl;
        goto start;
    }

    return 0;
}















