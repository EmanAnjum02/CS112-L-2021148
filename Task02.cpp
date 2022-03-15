#include <iostream>
using namespace std;

class Parity
{
private:
    int *arr;
    int size;

public:
    Parity() // constructor
    {
        size = 0;
        arr = new int[size];
    }
    void put(int num)
    {
        size++;
        int *temp = new int[size]; // dynamic array for storing array elements
        for (int i = 0; i < size - 1; i++)
        {
            temp[i] = arr[i];
        }
        temp[size - 1] = num;
        delete[] arr;
        arr = temp;
    }

    void erase(int num)
    {
        size--;
        int *temp = new int[size + 1];
        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
    }

    void print()
    {
        cout << "The array elements are: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    int test()
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 == 0)
                cout << "True"
                     << " "; // if the entered number in an array is even
            else
                cout << "False"
                     << " "; // if the entered number in an array is odd
        }
    }

    ~Parity() // destructor
    {
        cout << "\nDestructor called!!!" << endl;
    }
};
int main()
{

    Parity P1;
    int num, choice;
    bool found = false;
    do
    {
        cout << endl;
        cout << "---Parity Class---" << endl;
        cout << "1. "
             << "Put an element" << endl;
        cout << "2. "
             << "Print all elements" << endl;
        cout << "3. "
             << "Delete the last element" << endl;
        cout << "4. "
             << "Test an element" << endl;

        cout << "Please enter a valid option from 1-4:" << endl;
        cin >> choice;
        if (choice > 0 && choice <= 5)
        {
            switch (choice)
            {
            case 1:
            {
                cout << "Enter a number to put in an array: ";
                cin >> num;
                P1.put(num);
            }
            break;
            case 2:
                P1.print();
                break;
            case 3:
                cout << "Enter a number that you want to delete: "; // only deletes the last element of array
                cin >> num;
                P1.erase(num);
                break;
            case 4:
                P1.test(); // check if the element in an array is even or odd
                break;
            case 5:
                found = true;
                cout << "You have sucessfully exited the program" << endl;
            }
        }
        else
            cout << "Invalid option!!" << endl;
    } while (!found);
    return 0;
}
