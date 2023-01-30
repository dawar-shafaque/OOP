#include<iostream>
#include<conio.h> 
using namespace std; 
    class student{
        private:
                int sub[5]; 
                int total; 
                float percent;
                string name;
                int roll; 

        public: 
                void display();
    };
    void student::display()
    {   
        cout<<"Enter the name:"<<endl; 
        getline(cin,name); 
        cout<<"Enter the roll no:"<<endl; 
        cin>>roll; 
        cout<<"Enter the marks of 5 subjects:"<<endl; 
        total=0;
        for(int i =0; i<5; i++)
        {
            cin>>sub[i]; 
            total=total+sub[i];
        } 
         cout<<"name:"<<name<<endl;
         cout<<"roll:"<<roll<<endl;
         cout<<"Total marks"<<total<<endl; 
        percent=total*0.2; 
        cout<<"Percentage"<<percent;
    }
        int main()
        {
            student ob; 
            ob.display();
            return 0;
        }