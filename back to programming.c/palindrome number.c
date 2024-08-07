
#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

// Function to count palindrome numbers in a range
int countPalindromes(int start, int end) {
    int count = 0;

    for (int i = start; i <= end; i++) {
        if (isPalindrome(i)) {
            count++;
        }
    }

    return count;
}

int main() {
    int start, end;

    printf("Enter the starting range: ");
    scanf("%d", &start);

    printf("Enter the ending range: ");
    scanf("%d", &end);

    int palindromeCount = countPalindromes(start, end);

    printf("The number of palindromes between %d and %d is: %d\n", start, end, palindromeCount);

    return 0;
}