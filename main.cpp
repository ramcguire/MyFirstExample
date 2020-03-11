#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num1, num2;
    cout<<"Hi, please enter two numbers: ";
    cin >> num1 >> num2; 
    cout <<num1 + num2<< endl;
    num2 = 0;
    int x = num1/0;

    return 0;
}
