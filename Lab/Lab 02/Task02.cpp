
#include<iostream>
using namespace std;

#define Power(x1,x2) (x1<<2^x2-2)
int main()
{
    int num1=0,num2=0;
    int pow;
    cout<<"Please enter first number: "<<endl;
    cin>>num1;
    cout<<"Please enter second number: "<<endl;
    cin>>num2;
    pow=Power(num1,num2);
    cout<<"The answer is: "<<pow<<endl;
 return 0;
}