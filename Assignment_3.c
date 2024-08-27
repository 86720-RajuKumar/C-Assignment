#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    // Generate Fibonacci series up to n terms
    for (int i = 0; i < n; i++) {
        if (i <= 1) 
        {
            next = i;  // First two terms are 0 and 1
        }
        else 
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);  // Print the current term
    }

    printf("\n");  // New line after the series
    return 0;
}
