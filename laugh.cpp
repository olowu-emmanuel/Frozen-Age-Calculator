#include <iostream>
using namespace std;

int main()
{
   cout << " FROZEN SIMPLE AGE CALCULATOR " << endl;
   cout << "Enter your name: ";
   string name;
   cin>> name;
   cout << "Enter your age: ";
    int age;
    cin >> age;
    if ( age < 18)
    {
        cout << "You are not allowed to use this calculator." << endl;
        return 0;
    }
    else
    {
        cout << "Welcome to Frozen Budget Calculator, " << name << "!" << endl;



        while (true)
        {
          cout << " \n MENU " << endl;
            cout << "1. Age" << endl;
            cout << "2. Age difference" << endl; 
            cout << "3. Exit" << endl;

            int choice;
            cin >> choice;

            switch (choice)
            {
                case 1:
                {
                    // Calculating Age
                    cout <<" Enter your year of birth: ";
                    int yearOfBirth;
                    cin >> yearOfBirth;
                    yearOfBirth = 2026 - yearOfBirth;
                    cout << "Your age is: " << yearOfBirth << endl;
                    break;
                }
                case 2:
                {
                    // Calculating Age Difference
                    cout << "Enter the year of birth of the first person: ";
                    int year1;
                    cin >> year1;
                    cout << "Enter the year of birth of the second person: ";
                    int year2;
                    cin >> year2;
                    int age1 = 2026 - year1;
                    int age2 = 2026 - year2;
                    int ageDifference = age1 - age2;
                    cout << "The age difference is: " << ageDifference << endl;
                    break;
                }
                case 3:
                    // Exit the program
                    cout << "Thank you for using Frozen Age Calculator. Goodbye!" << endl;
                    return 0;

                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        }
    }
}
