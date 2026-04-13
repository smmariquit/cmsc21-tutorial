#include <stdio.h>
#include <stdlib.h>
#define N_ELEMENTS 4;

int main(){
    // int arr[] = {1,2,3,4};
    // if u declare an array with [], it just does this under the hood
    int *arr = (int*)malloc(sizeof(int)*4);
    // arr[0] = 1;
    *(arr+0) = 1;
    // arr[1] = 2;
    *(arr+1) = 2;
    // arr[2] = 3;
    *(arr+2) = 3;
    // arr[3] = 4;
    *(arr+3) = 4;

    // malloc returns void*
    // any data type
    for(int i = 0; i < 4; i++){
        *(arr+i) = *(arr+i)*10;
    }
    for(int i = 0; i < 4; i++){
        printf("%d ", *(arr+i));
    }
    printf("\n");
}