#include <iostream>
#include <string>
using namespace std;

struct DOB
{
    int day;
    string month;
    int year;
};

typedef struct record
{
    string name;
    int age;
    string city;
    DOB date_of_birth;
} R;
int main()
{
    R s1, s2, s3;
    R c;
    cout << "Enter the record of the 1st user" << endl;
    cout<<endl;
    cout << "Enter the age of the user: ";
    cin >> s1.age;
    cin.ignore();
    cout << "Enter the name of the user: ";
    getline(cin, s1.name);
    cout << "Enter the city of residence of the user: ";
    getline(cin, s1.city);

    cout << "Enter D.O.B of 1st user" << endl;
    cout<<endl;
    cout << "Enter day: ";
    cin >> s1.date_of_birth.day;
    cin.ignore();
    cout << "Enter month: ";
    getline(cin, s1.date_of_birth.month);
    cout << "Enter year: ";
    cin >> s1.date_of_birth.year;

    cout << "Enter the record of the 2nd user" << endl;
    cout<<endl;
    cout << "Enter the age of the user: ";
    cin >> s2.age;
    cin.ignore();
    cout << "Enter the name of the user: ";
    getline(cin, s2.name);
    cout << "Enter the city of residence of the user: ";
    getline(cin, s2.city);

    cout << "Enter D.O.B of 2nd user" << endl;
    cout<<endl;
    cout << "Enter day: ";
    cin >> s2.date_of_birth.day;
    cin.ignore();
    cout << "Enter month: ";
    getline(cin, s2.date_of_birth.month);
    cout << "Enter year: ";
    cin >> s2.date_of_birth.year;

    cout << "Enter the record of the 3rd user" << endl;
    cout<<endl;
    cout << "Enter the age of the user: ";
    cin >> s3.age;
    cin.ignore();
    cout << "Enter the name of the user: ";
    getline(cin, s3.name);
    cout << "Enter the city of residence of the user: ";
    getline(cin, s3.city);

    cout << "Enter D.O.B of 3rd user" << endl;
    cout<<endl;
    cout << "Enter day: ";
    cin >> s3.date_of_birth.day;
    cin.ignore();
    cout << "Enter month: ";
    getline(cin, s3.date_of_birth.month);
    cout << "Enter year: ";
    cin >> s3.date_of_birth.year;

    cout << "Enter the D.O.B to CHECK:" << endl;
    cout<<endl;
    cout << "Enter day: ";
    cin >> c.date_of_birth.day;
    cin.ignore();
    cout << "Enter month: ";
    getline(cin, c.date_of_birth.month);
    cout << "Enter year: ";
    cin >> c.date_of_birth.year;

    if (c.date_of_birth.day == s1.date_of_birth.day&&c.date_of_birth.month==s1.date_of_birth.month&&c.date_of_birth.year==s1.date_of_birth.year)
    {
        cout << "It's " << s1.name << " Birthday" << endl;
        cout<<endl;
        cout << "HAPPY BIRTHDAY:)" << endl;
    }
    else if(c.date_of_birth.day == s2.date_of_birth.day && c.date_of_birth.month==s2.date_of_birth.month&&c.date_of_birth.year==s2.date_of_birth.year)
    {
        {
            cout << "It's " << s2.name << " Birthday" << endl;
            cout<<endl;
            cout << "HAPPY BIRTHDAY:)" << endl;
        }
    }

    else if(c.date_of_birth.day == s3.date_of_birth.day&& c.date_of_birth.month==s3.date_of_birth.month&&c.date_of_birth.year==s3.date_of_birth.year)
    {
        {
            cout << "It's " << s3.name << " Birthday" << endl;
            cout<<endl;
            cout << "HAPPY BIRTHDAY:)" << endl;
        }
    }
    else
    cout<<"Sorry!! no such user is found in the list:("<<endl;
    return 0;
}