#include <stdio.h>

int main() {
    unsigned int num;
    printf("Enter a 4-bit positive integer (0 to 15): ");
    scanf("%u", &num);

    if (num == 0) {
        printf("The number of 0s after the leftmost 1 is: 0\n");
        return 0;
    }

    int count = 0;         // To count the number of 0s after the leftmost 1
    int found_one = 0;     // To track if the leftmost 1 has been found

    for (int i = 3; i >= 0; i--) {  // Check bits from left to right
        int bit = (num >> i) & 1;   // Extract the i-th bit

        if (bit == 1) {
            found_one = 1;          // Found the leftmost 1
        } else if (found_one) {
            count++;                // Count 0s after the leftmost 1
        }
    }

    printf("The number of 0s after the leftmost 1 is: %d\n", count);
    return 0;
}
