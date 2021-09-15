#include <iostream>
#include <string>
using namespace std;

class Long {
public:
    unsigned int first_number;
    unsigned int second_number;
};





int main()
{
    Long Chislo;

    cout << "Enter two numbers:\n";
    cin >> Chislo.first_number >> Chislo.second_number;

    string operation;
    cout << "Choose operation:\n+\n-\n*\n/\n%\n>\n";
    cin >> operation;

    cout << "Answer is: ";
    if (operation == "+")
        cout << Chislo.first_number + Chislo.second_number;
    if (operation == "-")
        cout << Chislo.first_number - Chislo.second_number;
    if (operation == "*")
        cout << Chislo.first_number * Chislo.second_number;
    if (operation == "/")
        cout << Chislo.first_number / Chislo.second_number;
    if (operation == "%")
        cout << Chislo.first_number % Chislo.second_number;
    if (operation == ">") 
        if (Chislo.first_number == Chislo.second_number)
            cout << Chislo.first_number << " = " << Chislo.second_number;
        if (Chislo.first_number > Chislo.second_number)
            cout << Chislo.first_number << " > " << Chislo.second_number;
        if (Chislo.first_number < Chislo.second_number)
            cout << Chislo.first_number << " < " << Chislo.second_number;   
}