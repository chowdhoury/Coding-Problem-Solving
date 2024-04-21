#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1005
#define ALPHABET_SIZE 26

int main() {
    int n;
    char s[MAX_LENGTH];
    int frequency[ALPHABET_SIZE] = {0};

    // Read the input
    scanf("%d %s", &n, s);

    // Count the frequency of each character
    for (int i = 0; i < n; i++) {
        frequency[s[i] - 'a']++;
    }

    // Calculate the maximum possible length of the palindrome
    int max_length = 0;
    int has_odd_frequency = 0;

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        max_length += (frequency[i] / 2) * 2;

        if (frequency[i] % 2 == 1) {
            has_odd_frequency = 1;
        }
    }

    // Add one more character if there is at least one with odd frequency
    if (has_odd_frequency) {
        max_length++;
    }

    // Print the result
    printf("%d\n", max_length);

    return 0;
}
