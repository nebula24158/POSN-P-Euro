#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter first number \n";
    cin >> a;
    cout << "Enter the second number \n";
    cin >> b;
    cout << "Choose the operation \n1 = +\n2 = -\n3 = *\n4 = /\n";
    cin >> c;
    cout << "The answer is : ";
    switch (c)
    {
    case 1: 
        cout << a+b;
        break;
     case 2: 
        cout << a-b;
        break;
     case 3: 
        cout << a*b;
        break;
     case 4: 
        cout << a/b;
        break;
    
    default:
        break;
    }
    return 0;

}