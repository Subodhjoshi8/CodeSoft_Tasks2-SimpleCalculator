#include <iostream>
using namespace std;

int main(){
    
    double num1, num2;
    char operation;
    double result;

    cout<<"Enter first Number: "<<endl;
    cin>>num1;
    cout<<"Enter second Number: "<<endl;
    cin>>num2;

    cout<<"Enter Operator (+,-,*,/): "<<endl;
    cin>>operation;

    switch (operation)
    {
    case '+':
        result=num1+num2;
        break;
    
    case '-':
        result=num1-num2;
        break;
    
    case '*':
        result=num1*num2;
        break;

    case '/':
        if (num2!=0)
        {
            result=num1/num2;
        }
        else{
            cout<<"Error!! Division by zero is not possible"<<endl;
            return 1;
        }
        break;
    
    default:
        cout<<"Invalid Operation."<<endl;
        return 1;
    }

    cout<<"Result: "<<result<<endl;

    return 0;
}