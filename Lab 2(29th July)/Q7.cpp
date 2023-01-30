//Wap to convert given seconds into its equivalent hours,min and sec. and display the result 
#include<iostream>
#include<conio.h> 
using namespace std; 
int main()
{
    int sec,hr,min,sec1;
    cout<<"enter the time in seconds: ";
    cin>>sec;
    hr=sec/3600;
    min=sec%3600/60;
    sec1=sec%3600%60;
    cout<<"the time is: "<<hr<<"hr "<<min<<"min "<<sec1<<"sec"<<endl;
    return 0;
}   
