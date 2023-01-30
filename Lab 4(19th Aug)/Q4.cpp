//Create a class which stores name, author and price of a book. 
//store info for n no. of books. display info all books in a given price range using a function.
#include <iostream>
using namespace std;
class info
{
    private:
    char name[100];
    char author[100];
    float price;
    int r1,r2;
    public:
    void in();
    void out();
    void all();
    void see();
};
int main()
{
    info f;
    int i,n;
    cout<<"Enter the number of books: ";cin>>n;
    for(i=0;i<n;i++)
    {
        f.in();
    }
    for(i=0;i<n;i++)
    {
        f.out();
    }
f.all();
    for(i=0;i<n;i++)
    {
        f.see();
    }
}
void info::in()
{
    cout<<"Enter the name of the book: ";
    cin>>name;
    cout<<"Enter the author: ";cin>>author;
    cout<<"Enter the price of the book: ";cin>>price;
}
void info::out()
{
    cout<<"Name of the book: "<<name;
    cout<<"Author: "<<author;
    cout<<"Price of the book: "<<price;
}
void info::all()
{
    cout<<"Enter the range: ";cin>>r1>>r2;
}
void info::see()
{
    if(price>=r1&&price<=r2)
    cout<<"Name of the book: "<<name;
    cout<<"Author: "<<author;
    cout<<"Price of the book: "<<price;
}