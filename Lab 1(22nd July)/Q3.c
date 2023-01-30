#include<stdio.h>
typedef struct{
    int id; 
    int age;
    char name[30]; 
    double basicsalary;
    double grosssalary;
} employee;

void display(employee *a){
    printf("Name: %s\n",(*a).name);
    printf("ID: %d\n",(*a).id); 
    printf("Age: %d\n",(*a).age);
    printf("Basic Salary: %lf\n",(*a).basicsalary);
    (a)->grosssalary= (*a).basicsalary+((0.8)*((a)->basicsalary))+((0.1)*((*a).basicsalary));
    printf("Gross Salary: %lf\n",(*a).grosssalary);
}

int main(){ 
    employee emp[5];
    for(int i=0;i<5;i++){
        printf("Enter name of employee-%d ",i+1); 
        scanf("%s",&emp[i].name); 
        printf("Enter ID of employee-%d: ",i+1);
        scanf("%d",&emp[i].id);
        printf("Enter basic salary of employee-%d: ",i+1);
        scanf("%lf",&emp[i].basicsalary);
    }
    for(int i=0;i<5;i++){
        printf("\nEmployee-%d info:\n",i+1); 
        display(&emp[i]);
    }
    return 0;  
}