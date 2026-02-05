EXPERIMENT NO :2 
Program-2 Program to Demonstrate Nested Structures 
#include <stdio.h> 
struct Marks 
{ 
int maths; 
int physics; 
int chemistry; 
}; 
struct Student 
{ 
int id; 
char name[20]; 
struct Marks m;   
}; 
int main() 
{ 
struct Student s; 
printf("Enter Student ID: "); 
scanf("%d", &s.id); 
printf("Enter Student Name: "); 
scanf("%s", s.name); 
printf("Enter Maths Marks: "); 
scanf("%d", &s.m.maths); 
printf("Enter Physics Marks: "); 
scanf("%d", &s.m.physics); 
printf("Enter Chemistry Marks: "); 
scanf("%d", &s.m.chemistry); 
printf("\nStudent Details:\n"); 
printf("ID
       :
 %d\n", s.id); 
printf("Name     : %s\n", s.name); 
printf("Maths    : %d\n", s.m.maths); 
printf("Physics  : %d\n", s.m.physics); 
printf("Chemistry: %d\n", s.m.chemistry);
return 0;
}
