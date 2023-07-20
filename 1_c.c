#include<stdio.h>

int main() {
    char arr[100]; 
    printf("Enter the string:");
    scanf("%s", arr);
    int flag = 0; 
    int i = 0;
    while(arr[i] ) {
        
        if(arr[i] != '1' && arr[i] != '0') {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag) {
        printf("THIS IS NOT A BINARY STRING\n");
    } else {
        printf("THIS IS A BINARY STRING\n");
    }

    return 0;

}