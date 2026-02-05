EXPERIMENT NO :4b 
Program 4b: Program to Allocate Memory Using calloc() and Display Values 
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
int *ptr; 
int n, i; 
printf("Enter number of elements: "); 
scanf("%d", &n); 
ptr = (int *)calloc(n, sizeof(int)); 
if(ptr == NULL) 
{ 
printf("Memory allocation failed"); 
return 1; 
} 
/* Reading values */ 
printf("Enter %d elements:\n", n); 
for(i = 0; i < n; i++) 
{ 
scanf("%d", &ptr[i]); 
} 
printf("The elements are:\n"); 
for(i = 0; i < n; i++) 
{ 
printf("%d ", ptr[i]); 
} 
free(ptr); 
return 0; 
}
