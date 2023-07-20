#include<stdio.h>

int main() {
    char arr[100];
    printf("Enter the string:");
    scanf("%s", arr);
    int i;
    while(arr[i]){
        i++;
    }

   // printf("%d\n", i);
    int j=i/2;
    int flag=0;
    for(int a=0, b=i-1; a<j; a++, b--) {
        if(arr[a] != arr[b]) {
            flag = 1;
            break;
        }
    }

    if(flag) {
        printf("NOT A PALINDROME\n");
    } else {
        printf("PALINDROME\n");
    }

    return 0;
}