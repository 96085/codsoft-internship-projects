#include<iostream>
using namespace std;
int main(){

    char op;
    float num1, num2;

    cout<<"-----* SIMPLE_CALCULATOR *-----"<<endl;

    cout<<"Enter operator either + or - or * or / :"<<endl;

    cin>>op;

    cout<<"Enter two operands :"<<endl;

    cin>>num1>>num2;


    switch (op)
    {
    case '+': //Perform add operation if user enter + operator.
        cout<<num1+num2;
        break;

    case '-': //Perform substract opration if user enter - operator.
        cout<<num1-num2;
        break;

    case '*': //Perform multiply operation if user enter * operator.
        cout<<num1*num2;
        break;

    case '/': //Perform divide operation if user enter / operator.
        cout<<num1/num2;
        break;

    default:
    // if user enter operator other than +, -, *, /, then display the invalid massage.
        cout<<"Invalid_Case"<<endl;
        break;
    }


    return 0;
}