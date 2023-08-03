#include <iostream>

// Template function to add two numbers of any data type
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    std::cout << "Sum of " << num1 << " and " << num2 << " is: " << add(num1, num2) << std::endl;

    double num3 = 3.14;
    double num4 = 2.71;
    std::cout << "Sum of " << num3 << " and " << num4 << " is: " << add(num3, num4) << std::endl;

    return 0;
}
