#include <iostream>
using namespace std;
int main()
{
    int x=0;
    int *apuntador = &x;
    cout << "Inserte su edad: " << '\n';
    cin >> x;
    if (*apuntador<18)
    {
        cout << "Es menor de edad" << '\n';
    }
    else if (*apuntador>=18)
    {
        cout << "Es mayor de edad " << x << " " << &apuntador << '\n';
    }
    return 0;
}