#include<iostream>
#include<math.h>
using namespace std;
class Point
{
    int x;
    int y;
    int x1;
    int y1;
    public:
        void input(void);
        void dist(void);
};

void Point::input(void)
{
    cout << "Enter value of x and y : ";
    cin>>x>>y;
    cout<<"enter value of x2 and y2 :";
    cin>>x1>>y1;
}

void Point::dist(void)
{
    cout << "Distance between " << "(" << x << "," << y << ") and " << "(" << x1 << "," << y1 << ")" <<endl;
    cout << sqrt(((x-x1)*(x-x1) + (y-y1)*(y-y1))) <<endl;
}

int main()
{
    Point a;
    a.input();
    a.dist();
    return 0;
}