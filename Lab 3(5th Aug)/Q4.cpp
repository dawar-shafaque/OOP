#include<iostream>
#include<conio.h> 
using namespace std; 
    class student{
        private:
                int real[10]; 
                int imag[10];

        public: 
                void display(){ 
                    for(int i=0; i<10;i++)
                    {
                    cout<<"Enter the real part of complex number:"<<endl; 
                    cin>>real[i]; 
                    cout<<"Enter the imaginary part of the complex number"<<endl;
                    cin>>imag[i];
                    } 
                    for(int i=0; i<10;i++)
                    {
                        cout<<"complex number\t"<<i+1<<":"<<real[i]<<"+"<<imag[i]<<"i"<<endl;
                    }
                
                } 
    };
        int main()
        {
            student ob; 
            ob.display();
            return 0;
        }