EXPERIMENT NO :3a 
Program 3a: Program to Store and Display Multiple Student Records Using Array of 
Structures 
#include <stdio.h> 
struct Student 
{ 
    int id; 
    char name[20]; 
    float marks; 
}; 
int main() 
{ 
    struct Student s[5]; 
    int n, i; 
    printf("Enter number of students: "); 
    scanf("%d", &n); 
    for(i = 0; i < n; i++) 
    { 
        printf("\nEnter details of student %d\n", i + 1); 
 
        printf("ID: "); 
        scanf("%d", &s[i].id); 
 
        printf("Name: "); 
        scanf("%s", s[i].name); 
 
        printf("Marks: "); 
        scanf("%f", &s[i].marks); 
    } 
printf("\nStudent Details:\n"); 
for(i = 0; i < n; i++) 
{ 
} 
printf("\nStudent %d\n", i + 1); 
printf("ID    : %d\n", s[i].id); 
printf("Name  : %s\n", s[i].name); 
printf("Marks : %.2f\n", s[i].marks);
}
return 0;
}
