#include <stdio.h>
#include <stdlib.h>

int main(){
    // c = 99
    // C = 67
    char arr[] = {'c', 'h', 'a', 'r'};
    //int arr[] = {65, 66, 67, 68};
    for(int i = 0; i < 4; i++){
        *(arr+i) = *(arr+i)-32;
    }
    for(int i = 0; i < 4; i++){
        printf("%c", *(arr+i));
    }
    printf("\n");
}