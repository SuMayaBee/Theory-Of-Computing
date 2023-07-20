#include<stdio.h>

int main() {
    char arr1[100], arr2[100];
    printf("Enter the first string:");
    scanf("%s", arr1);
    printf("Enter the second string:");
    scanf("%s", arr2);

    char arr3[100];
    int i;
    for(i=0; arr1[i]; i++) {
        arr3[i] = arr1[i];
    }
    for(int j=0; arr2[j]; j++) {
        arr3[i] = arr2[j];
        i++;
    } arr3[i] = '\0';

    printf("The concatenated string: %s\n", arr3);

    return 0;
}