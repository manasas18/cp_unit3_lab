EXPERIMENT NO :1b 
Program 1b: Program to Use typedef with Structure 
#include <stdio.h> 
typedef struct 
{ 
int id; 
char name[20]; 
f
loat marks; 
} Student; 
int main() 
{ 
} 
Student s; 
printf("Enter Student ID: "); 
scanf("%d", &s.id); 
printf("Enter Student Name: "); 
scanf("%s", s.name); 
printf("Enter Student Marks: "); 
scanf("%f", &s.marks); 
printf("\nStudent Details:\n"); 
printf("ID    : %d\n", s.id); 
printf("Name  : %s\n", s.name); 
printf("Marks : %.2f\n", s.marks);
return 0;
}
