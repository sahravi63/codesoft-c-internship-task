//simple calculator
#include<iostream>
using namespace std;
int main (){
    int a;
    cout<<"Enter the first number :";
    cin>>a;
    char op;
    cout<<"Enter the operator ('+' , '-' , '*' , '/') :";
    cin>>op;
    int b;
    cout<<"Enter the second number :";
    cin>>b;
    switch(op){
        case '+':
            cout<<"The sum is :"<< a+b <<endl;
            break;
        case '-':
            cout<<"The sub is :"<< a-b <<endl;
            break;
        case '*':
            cout<<"The multiple is :"<< a*b <<endl;
            break;
        case '/':
            if(a!=0 && b!=0){
                cout<<"The division is :"<< a/b <<endl;

            }  
            break;
        default:
            cout<<"Invalid input :";  
            
        
    }

}