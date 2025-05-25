#include <iostream>

using namespace std;

int main() {
    float num1, num2;
    char op;
    cin>>num1>>num2>>op;
    switch(op) {
        case '+': cout<<num1+num2; break;
        case '-': cout<<num1-num2; break;
        case '*': cout<<num1*num2; break;
        case '/': cout<<num1/num2; break;
        default: cout<<"Invalid operator"; break;
    }
}