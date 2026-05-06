#include <iostream>
#include <cmath>

using namespace std; 



int main() {

    int num1, num2;
    char op;
    int result;

    cout << "Enter first number: ";
    cin >> num1; 

    cout << "Enter operator: ";
    cin >> op; 

    cout << "Enter second number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    
    case '-':
        result =  num1 - num2;
        break;
    
    case '*':
        result =  num1 * num2;
        break;
    
    case '/':
        result =  num1 / num2;
        break;

    default: 
        cout << "Please exit program and enter a valid operator!" << endl;
    }
    

    cout << result << endl;

    return 0;
}

