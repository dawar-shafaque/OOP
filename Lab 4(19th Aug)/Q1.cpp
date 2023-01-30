//wap to swap two members of a class using call by value
#include<iostream>
using namespace std; 
class swapping
{
    public: 
    int a,b,c;
        void swap(int,int); 
};
void swapping::swap(int a, int b)
{
     c = a;
     a = b;
     b = c; 
    cout<<"a = "<<a<<" b = "<<b<<endl;

}
int main()
{
    swapping ob; 
    cout<<"Enter two numbers"<<endl;
    cin>>ob.a>>ob.b;
    ob.swap(ob.a,ob.b);
}
