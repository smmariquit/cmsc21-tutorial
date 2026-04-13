#include <stdio.h>

// why does the pass by reference not return anything?
void add(int *a, int *b, int *sum){ // formal parameters
    printf("number 1 in the add function scope is %d\n", *a);
    printf("number 2 in the add function scope is %d\n", *b);
    *sum = *a + *b;
    // doesnt return anything
}

int main(){
    // dito natin idedefine yung numbers to be added
    int a = 2;
    int b = 5;

    // address_of_operator
    int* a_ptr = &a;
    int* b_ptr = &b;

    int sum;
    int *sum_ptr = &sum;
    add(&a, &b, &sum);
    
    printf("the sum is %d\n", sum);

}


    // dereferencing
    // indirection
    // int value_of_a = *a_ptr;
    // int value_of_b = *b_ptr;

    // printf("number 1 is %d\n", value_of_a);
    // printf("number 2 is %d\n", value_of_b);

    // 
    // int &sum; - invalid

    // these are the same:
    // int* sum;
    // int * sum;
    // int *sum;  

