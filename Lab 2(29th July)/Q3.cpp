//Wap to convert temperature from celcius to fahrenheit scale and display the result 
#include<iostream>
#include<conio.h> 
using namespace std; 

int main(){
    cout<<"enter temperature in celcius: "<<endl; 
    int c;
    cin>>c;
    int f=(c*9/5)+32;
    cout<<"temperature in fahrenheit is: "<<f<<endl;
    return 0;
} 
