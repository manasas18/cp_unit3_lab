EXPERIMENT NO :3b 
Program 3b: Pointer to Structure 
Program to Access Structure Members Using Pointer to Structure: 
#include <stdio.h>  
struct Student 
{ 
}; 
int id; 
char name[20]; 
f
loat marks; 
int main() 
{ 
} 
struct Student s; 
struct Student *ptr; 
ptr = &s;    
printf("Enter Student ID: "); 
scanf("%d", &ptr->id); 
printf("Enter Student Name: "); 
scanf("%s", ptr->name); 
printf("Enter Student Marks: "); 
scanf("%f", &ptr->marks); 
printf("\nStudent Details:\n"); 
printf("ID    : %d\n", ptr->id); 
printf("Name  : %s\n", ptr->name); 
printf("Marks : %.2f\n", ptr->marks);
return 0;
}
