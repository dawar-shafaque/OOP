#include<stdio.h>
typedef struct{
    int roll;
    int sem; 
    char name[30];
    float sub[5];
} student;

int main(){
    student s;
    int i;
    printf("Enter roll number of the student:\n");
    scanf("%d",&s.roll);
    printf("Enter name of the student:\n"); 
    scanf("%s",s.name);
    printf("Enter the marks in five subjects:\n");
    for(i=0;i<5;i++){
        scanf("%f",&s.sub[i]);
    }
    printf("\nStudent information:\n");
    printf("Roll Number:\t%d\n",s.roll); 
    printf("Name is %s\n", s.name); 
    printf("Marks in 5 subjects:\n"); 
    for(i=0;i<5;i++){
        printf("%f\n",s.sub[i]);
    }
    return 0;
}