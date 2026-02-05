EXPERIMENT NO :3c 
Program 3c: Passing Structure to Function 
Program to Pass Structure to Function Using Pointer (Call by Reference) 
#include <stdio.h> 
struct Student 
{ 
int id; 
char name[20]; 
float marks; 
}; 
void display(struct Student *s) 
{ 
printf("\nStudent Details:\n"); 
printf("ID    : %d\n", s->id); 
printf("Name  : %s\n", s->name); 
printf("Marks : %.2f\n", s->marks); 
} 
int main() 
{ 
struct Student s1; 
printf("Enter Student ID: "); 
scanf("%d", &s1.id); 
printf("Enter Student Name: "); 
scanf("%s", s1.name); 
printf("Enter Student Marks: "); 
scanf("%f", &s1.marks); 
display(&s1); 
return 0;
}
