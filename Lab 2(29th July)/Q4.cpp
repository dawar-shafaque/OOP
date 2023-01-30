//Wap  to calculate area  of traingle whose 3 sides are given by user and display the result 
#include<iostream>
#include<conio.h> 
#include<math.h>
using namespace std; 

int main(){
    cout<<"enter three sides of triangle: "<<endl;
    int a,b,c;
    cin>>a>>b>>c;     
    int s=(a+b+c)/2;
    int area=sqrt(s*(s-a)*(s-b)*(s-c)); 
    cout<<"area of triangle is: "<<area<<endl;
    return 0;
}   
