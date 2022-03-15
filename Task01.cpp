#include <iostream>
using namespace std;
class Heater
{
private:
    int temp;

public:
    Heater() : temp(15) {}  //default constructor

    void cooler()
    {
        temp = temp + 5;
    }

    void warmer()
    {
        temp = temp - 5;
    }

    void print()
    {
        cout << "Temprature: " << temp << endl;
    }

    ~Heater()  //destructor
    {
        cout << "\nDestructor called!!!" << endl;
    }
};

int main()
{
    Heater h;
    bool found = false;
    int choice;
    do
    {
    cout << "Please enter a choice: ";
    cin >> choice;
    if(choice>0&&choice<=4)  //condition to check that the choices must be positive and valid
    {
        switch (choice)
        {
        case 1:
            h.print();
            break;

        case 2:
            h.cooler();  //call to the cooler function 
            h.print();
            break;

        case 3:
            h.warmer();  //call to the warmer function
            h.print();
            break;

        case 4:
            found = true;
            cout << "You have sucessfully exited the program " << endl;
        }
    }
    else 
    cout<<"Invalid choices are not allowed :("<<endl;
    } while (!found);  //to keep getting a choice from the user until case 4 is choosen
    return 0;
}