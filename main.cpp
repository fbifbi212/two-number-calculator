#include <iostream>

int main() {
    int number1, number2;

    // Ask user to input the first number
    std::cout << "Enter the first number: ";
    std::cin >> number1;

    // Ask user to input the second number
    std::cout << "Enter the second number: ";
    std::cin >> number2;

    // Calculate the sum of the two numbers
    int sum = number1 + number2;

    // Display the sum
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}