//Wap to find the average marks of 5 subject of a student and find the percentage, assume full marks is 100 
#include<iostream>
#include<conio.h> 
using namespace std; 

int main(){
    cout<<"Enter marks of 5 subjects: "<<endl; 
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e; 
    int total=a+b+c+d+e;
    int avg=total/5;
    int percent=(total*100)/500; 
    cout<<"average marks of student is: "<<avg<<endl;
    cout<<"percentage of student is: "<<percent<<endl; 
    return 0;
}