//Create a class which stores name,author and price of a book. Store information for n number of books.Display information of all the books in a given price range using function 
#include<iostream>
using namespace std;
class book
{
    public:
        float price;
        string name,author; 
        int m,p;
            
        void input()
        {   
            cout<<"Enter the price of the book"<<endl;
            cin>>price;
            cout<<"Enter the name of the book"<<endl;  
            cin>>name;
            cout<<"Enter the author of the book"<<endl;
            cin>>author; 
            
            
        } 
        void display()
        {   
            cout<<"Enter the range"<<endl;
            cin>>m>>p;
            if(price>=m&&price<=p)
            {

            cout<<"Name of the book:\t"<<name<<endl;
            cout<<"Author of the book:\t"<<author<<endl;
            cout<<"Price of the book:\t"<<price<<endl;
            }
        }
};
int main()
{  
    int n;
    cout<<"Enter the number of books"<<endl;
    cin>>n;
    book ob[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the details of the book "<<i+1<<endl;
        ob[i].input(); 
    } 
   
    cout<<"Book details"<<endl;
    for(int i=0;i<n;i++)
    {
        ob[i].display();
    }
    
}