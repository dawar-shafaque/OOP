#include<iostream>
#include<conio.h> 
using namespace std; 
    class student{
        private:
                string name;
                int roll; 
                int total; 

        public: 
                void display(){  
                cout<<"Details are:"<<endl;
                    cout<<"Enter the name:"<<endl; 
                    getline(cin,name); 
                    cout<<"Enter the roll no:"<<endl; 
                    cin>>roll; 
                    cout<<"Enter total marks:"<<endl; 
                    cin>>total;
                    cout<<"name:"<<name<<endl;
                    cout<<"roll:"<<roll<<endl;
                    cout<<"total"<<total<<endl;
                
                } 
    };
        int main()
        {
            student ob; 
            ob.display();
            return 0;
        }