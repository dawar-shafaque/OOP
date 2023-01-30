#include<iostream>
#include<conio.h> 
using namespace std; 
    class employee{
        private:
                int id; 
                string name; 
                int age,basic, hra,da,gross;
        public: 
                void input(){ 
                    cout<<"Enter the id:"<<endl;
                    cin>>id; 
                    cin.ignore();
                    cout<<"Enter the name"<<endl;
                    getline(cin,name);
                    cout<<"Enter the age"<<endl; 
                    cin>>age;
                    cout<<"Enter the basic salary"<<endl;
                    cin>>basic; 
                    da=0.8*basic;
                    hra=0.1*basic; 
                    gross=basic + hra + da;
                
                } 
                void display()
                {
                    cout<<"id:\t"<<id<<endl;
                    cout<<"name:\t"<<name<<endl;
                    cout<<"age:\t"<<age<<endl;
                    cout<<"gross salary:\t"<<gross<<endl;
                }
    };
        int main()
        {   
            int n; 
            cout<<"Enter the number of employee"<<endl; 
            cin>>n;
            employee ob[n]; 
            for(int i=0;i<n;i++)
            {
                cout<<"Enter the employee"<<i+1<<"details"<<endl; 
                ob[i].input();
            } 
            for(int i=0;i<n;i++)
            {
                cout<<"Employee"<<i+1<<endl; 
                ob[i].display();
            } 

            return 0;
        }