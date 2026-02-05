EXPERIMENT NO :1  
PROGRAM: 1a-PROGRAM TO DEFINE A STRUCTURE AND ACCESS ITS MEMBERS 
#include <stdio.h> 
struct student 
{ 
}; 
int id; 
char name [20]; 
f
loat marks; 
int main() 
{ 
} 
struct student s;    
printf("Enter student ID: "); 
scanf("%d", &s.id); 
printf("Enter student name: "); 
scanf("%s", s.name); 
printf("Enter student marks: "); 
scanf("%f", &s.marks); 
printf("\nStudent Details\n"); 
printf("ID    : %d\n", s.id); 
printf("Name  : %s\n", s.name); 
printf("Marks : %.2f\n", s.marks);
return 0;
}
