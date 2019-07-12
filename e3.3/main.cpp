/*
 •• E3.3
 Write a program that reads an integer and prints how many digits the number has, by checking whether the number is ≥ 10, ≥ 100, and so on. (Assume that all integers are less than ten billion.) If the number is negative, first multiply it with –1.
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter integer: ";
    int integer;
    cin >> integer;
    
    if (integer < 0)
    {
        integer = integer * -1;
    }
    
    if (integer > 0)
    {
     if (integer < 10)
     {
         cout << "1 digit";
     }
        else if (integer < 100)
        {
            cout << "2 digits";
        }
        else if (integer < 1000)
        {
            cout << "3 digits";
        }
        else if (integer < 10000)
        {
            cout << "4 digits";
        }
        else if (integer < 100000)
        {
            cout << "5 digits";
        }
        else if (integer < 1000000)
        {
            cout << "6 digits";
        }
        else if (integer < 10000000)
        {
            cout << "7 digits";
        }
        else if (integer < 100000000)
        {
            cout << "8 digits";
        }
        else if (integer < 1000000000)
        {
            cout << "9 digits";
        }
        else
        {
            cout << "10 digits";
        }

    }
    cout << endl;
}
