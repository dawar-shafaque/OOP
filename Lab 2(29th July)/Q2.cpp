//Wap  to perform addition,subs,multip of 2 int and  display the result
#include<iostream>
#include<conio.h> 
using namespace std; 

int main(){
    cout<<"enter two numebers: "<<endl; 
    int a,b,c;
    cin>>a>>b; 
    c=a+b; 
    cout<<"sum of two numbers is: "<<c<<endl; 
    c=a-b;
    cout<<"difference of two numbers is: "<<c<<endl; 
    c=a*b; 
    cout<<"product of two numbers is: "<<c<<endl;
    return 0;
}