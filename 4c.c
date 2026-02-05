EXPERIMENT NO :4c 
Program 4c: Program to Resize Previously Allocated Memory Using realloc() 
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
    int *ptr; 
    int n, new_n, i; 
    printf("Enter initial number of elements: "); 
    scanf("%d", &n); 
    ptr = (int *)malloc(n * sizeof(int)); 
    if(ptr == NULL) 
    { 
        printf("Memory allocation failed"); 
        return 1; 
    } 
    printf("Enter %d elements:\n", n); 
    for(i = 0; i < n; i++) 
    { 
        scanf("%d", &ptr[i]); 
    } 
    printf("\nEnter new number of elements: "); 
    scanf("%d", &new_n); 
    ptr = (int *)realloc(ptr, new_n * sizeof(int)); 
    if(ptr == NULL) 
    { 
        printf("Memory reallocation failed"); 
        return 1;    } 
    if(new_n > n) 
    { 
        printf("Enter remaining %d elements:\n", new_n - n); 
        for(i = n; i < new_n; i++) 
        { 
            scanf("%d", &ptr[i]); 
        } 
    } 
    printf("\nThe elements are:\n"); 
    for(i = 0; i < new_n; i++) 
    { 
        printf("%d ", ptr[i]); 
    } 
    free(ptr); 
    return 0;
}
