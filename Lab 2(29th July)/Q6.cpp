// WAP to convert given paisa into its equivalent rupees and paisa and display the result 
#include<iostream>
#include<conio.h> 
using namespace std; 
 int main()
 {
        int paisa,rupees,paisa1;
        cout<<"enter the amount in paisa: ";
        cin>>paisa;
        rupees=paisa/100;
        paisa1=paisa%100;
        cout<<"the amount is: "<<rupees<<"rs "<<paisa1<<"paisa"<<endl;
        return 0;
 }