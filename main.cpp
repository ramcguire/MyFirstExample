#include <iostream>
#include <vector>

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

int pointless() {
    // this does nothing, never gets called
    cout << "I'm pointless!" << endl;
}
