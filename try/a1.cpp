#include<iostream>
using namespace std;

int main() {
    // 变量声明部分
    float num1, num2;  // 存储两个操作数
    char op;           // 存储运算符
    
    cin >> num1 >> num2 >> op;  // 连续输入两个数字和一个运算符

    // 运算符判断结构
    switch(op) {
        case '+': 
            cout << num1 + num2;  // 加法
            break;
        case '-': 
            cout << num1 - num2;  // 减法
            break;
        case '*': 
            cout << num1 * num2;  // 乘法
            break;
        case '/': 
            cout << num1 / num2;  // 除法（注意未处理除零错误）
            break;
        default:  // 无效运算符处理
            cout << "Invalid operator";
            break;
    }
}