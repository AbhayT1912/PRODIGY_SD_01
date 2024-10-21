#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        cout << "======= Welcome To Temperature Conversion Program =======" << endl;
        cout << "Choice 1 -> Celsius" << endl
             << "Choice 2 -> Fahrenheit" << endl
             << "Choice 3 -> Kelvin" << endl
             << "Choice 4 -> Exit" << endl;
        int choice;
        cout << "Please select the Temperature unit in which you want to enter your Reading -> ";
        cin >> choice;
        if (choice == 1)
        {
            double temp;
            cout << "You have selected the unit degree Celsius" << endl
                 << "Enter the temperature Reading -> ";
            cin >> temp;
            double result1, result2;
            result1 = (temp * 1.8) + 32;
            result2 = temp + 273.15;
            cout << "Temperature in Fahrenheit -> " << result1 << " F" << endl;
            cout << "Temperature in Kelvin -> " << result2 << " K" << endl;
            cout << "Thankyou for Using Temperature Conversion" << endl;
        }
        else if (choice == 2)
        {
            double temp;
            cout << "You have selected the unit degree Fahrenheit" << endl
                 << "Enter the temperature Reading -> ";
            cin >> temp;
            double result1, result2;
            result1 = (temp - 32) / 1.8;
            result2 = (temp + 459.67) * (0.556);
            cout << "Temperature in Celsius -> " << result1 << " C" << endl;
            cout << "Temperature in Kelvin -> " << result2 << " K" << endl;
            cout << "Thankyou for Using Temperature Conversion" << endl;
        }
        else if (choice == 3)
        {
            double temp;
            cout << "You have selected the unit Kelvin" << endl
                 << "Enter the temperature Reading -> ";
            cin >> temp;
            double result1, result2;
            result1 = temp - 273.15;
            result2 = (temp * 1.8) - 459.67;
            cout << "Temperature in Celsius -> " << result1 << " C" << endl;
            cout << "Temperature in Fahrenheit -> " << result2 << " F" << endl;
            cout << "Thankyou for Using Temperature Conversion" << endl;
        }
        else if (choice == 4)
        {
            cout << "Thankyou for Using Temperature Conversion" << endl;
            break;
        }

        else
        {
            cout << "Invalid Input" << endl;
        }
    }
    return 0;
}