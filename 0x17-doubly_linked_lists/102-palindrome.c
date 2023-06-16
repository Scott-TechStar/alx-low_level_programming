#include <stdio.h>

int isPalindrome(int number) {
    int reverse = 0;
    int original = number;

    while (number > 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }

    return (original == reverse);
}

int main() {
    int largestPalindrome = 0;
    int i, j;

    for (i = 999; i >= 100; i--) {
        for (j = 999; j >= 100; j--) {
            int product = i * j;
            if (product > largestPalindrome && isPalindrome(product)) {
                largestPalindrome = product;
            }
        }
    }

    printf("%d",largestPalindrome);

    return 0;
}
