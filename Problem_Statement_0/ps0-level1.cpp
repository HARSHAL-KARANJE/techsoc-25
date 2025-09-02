#include<iostream>
using namespace std;

double power(double base , int exp){
    double result= 1;
    for (int i=0 ; i<exp; i++){
        result *= base;
    }
    return result;
};
 

int main(){
    double a; 
    int b;
    char op;
    cout<<"enter the expression"<<""<<endl;
    cin>>a>>op>>b;
   
        switch (op){
            case '+':
            cout<< " answer is "<<a+b<<endl;
            break;
            case '-':
            cout<<"answer is "<<a-b<<endl;
            break;
            case '*':
            cout<<"answer is "<<a*b<<endl;
            break;
            case '/':
            cout<<"answer is "<<a/b<<endl;
            break ;
            default :
            cout<<"invalid operator"<<endl;
        
    }

        return 0;
}