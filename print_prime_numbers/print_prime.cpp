#include <iostream>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; // Numbers <= 1 are not prime
    if (num == 2 || num == 3) return true; // 2 and 3 are prime numbers
    if (num % 2 == 0 || num % 3 == 0) return false; // Exclude multiples of 2 and 3

    // Only check for factors up to sqrt(num)
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int lower, upper;

    std::cout << "Enter the lower bound: ";
    std::cin >> lower;

    std::cout << "Enter the upper bound: ";
    std::cin >> upper;

    std::cout << "Prime numbers in the range are:\n";
    for (int num = lower; num <= upper; num++) {
        if (isPrime(num)) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
