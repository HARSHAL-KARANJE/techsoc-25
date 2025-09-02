#include<iostream>
using namespace std;

double myExp(double x) {
    double sum= 1.0;
    double term=1.0;
    for (int i= 1; i<=20; i++){
    term*=x/i;
    sum+=term;
}
return sum;
}
// natural logarithm using newtons methode
double myLn(double x){
    if (x<=0) return -1e9;
    double y=x-1;
    for (int i=0 ; i <20; i++) {
        y=y-(myExp(y)- x)/myExp(y);
    }
    return y;
}


double myLog10(double x ){
    return myLn(x)/myLn(10);
}
 double myPow(double a, double b){
    return myExp(b* myLn(a));
 }
int main (){
    double num;
    cout<<"enter the number "<<endl;
    cin>>num;

    cout<<"exp"<<myExp(num)<<endl;
    cout<<"ln"<<myLn(num)<<endl;
    cout<<"log10"<<myLog10(num)<<endl;

    double base ,expn;
    cout<<"enter the base and exponent "<<endl;
    cin>>base>>expn;
    cout<<base<<"^"<<expn<<"is ="<<myPow(base, expn)<<endl;
    return 0;
}