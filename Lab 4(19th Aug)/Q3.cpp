//wap to find the area of a circle,rectangle and triangle using function overloading 
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
 int value(int r)
 {
     int ar=3.14*r*r;
     return ar;
 }
 int value(int l,int b)
 {
     int ar=l*b;
     return ar;
 }
 int value(int a,int b,int c)
 {
     int s=(a+b+c)/2;
    int ar=sqrt(s*(s-a)*(s-b)*(s-c)); 
        return ar;
 }
    int main()
    {
        int r,l,b,a,c,ar;
        cout<<"enter radius of circle: "<<endl;
        cin>>r;
        ar=value(r);
        cout<<"area of circle is: "<<ar<<endl;
        cout<<"enter length and breadth of rectangle: "<<endl;
        cin>>l>>b;
        ar=value(l,b);
        cout<<"area of rectangle is: "<<ar<<endl;
        cout<<"enter three sides of triangle: "<<endl;
        cin>>a>>b>>c;
        ar=value(a,b,c);
        cout<<"area of triangle is: "<<ar<<endl;
        return 0;
    }