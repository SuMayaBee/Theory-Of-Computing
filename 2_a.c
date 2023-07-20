#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;
    for(int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);
    int p = power(2, n);

    char arr[p][n];

    for(int i = 0; i < p; i++) {
        int temp = i;
        for(int j = n - 1; j >= 0; j--) {
            arr[i][j] = temp % 2 + '0';
            temp /= 2;
        }
    }

    for(int i = 0; i < p; i++) {
        for(int j = 0; j < n; j++) {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}