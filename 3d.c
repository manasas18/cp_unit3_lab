EXPERIMENT NO :3d 
Program 3d: Passing Array of Structures to a Function 
#include <stdio.h> 
struct Student 
{ 
    int id; 
    char name[20]; 
    float marks; 
}; 
void display(struct Student s[], int n) 
{ 
    int i; 
    for(i = 0; i < n; i++) 
    { 
        printf("\nStudent %d\n", i + 1); 
        printf("ID    : %d\n", s[i].id); 
        printf("Name  : %s\n", s[i].name); 
        printf("Marks : %.2f\n", s[i].marks); 
    } 
} 
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
    display(s, n); 
    return 0;
}
