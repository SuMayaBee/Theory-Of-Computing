#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(0));
    char str[5][100];
    char binarr[2] = {'0', '1'};
    int n;
    printf("Enter the number of strings you wanna input: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int length = rand()%25;
        for(int j=0; j<length; j++){
            str[i][j] = binarr[rand()%2];
        } str[i][length] = '\0';
    }

    for(int i=0; i<n; i++){
        printf("%s \n", str[i]);
    }

    return 0;
}