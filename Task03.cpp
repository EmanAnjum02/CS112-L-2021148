#include <iostream>
using namespace std;

class stringType
{
private:
    string first;
    string second;

public:
    stringType() : first(""), second("") {} 

    void setValues(string str1, string str2)
    {
        first = str1;
        second = str2;
    }

    void printValues()
    {
        cout << "The first string is: " << first << endl;
        cout << "The second string is: " << second << endl;
    }

    int maxLength(string str)
    {
        int count = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            count++;
        }
        cout << "The size of the string is: " << count << endl;
    }

    int compare(string s1, string s2)
    {
        int flag = 0;
        {
            if (s1 != s2)
            {
                if (s1 > s2)
                {
                    return 1;
                }
                else if (s1 < s2)
                {
                    return -1;
                }
            }
        }
        return flag;
    }

    void copy(string str1, string str2)
    {
        for (int i = 0; str2[i] != '\0'; i++)
        {
            str1[i] = str2[i];
        }
        cout << "The copied string is: " << str1 << endl;
    }

    string concatenate(string str1, string str2)
    {
        int count = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        count++;
    }
    int i = 0;
    for (int j = count; str2[i] != '\0'; j++)
    {
        str1[j] = str2[i];
        i++;
    }
        cout << "The concatenated string is: " << str1 << endl;
    }

    int searchWord(string str1, string str2)
    {
        int i = 0, j = 0;
        while ((str1[j] != '\0') || (str2[i] != '\0'))
        {
            if (str2[i] != str1[j])
            {
                j++;
                i = 0;
            }
            else
            {
                i++;
                j++;
            }
        }
        if (str2[i] == '\0')
        {
            cout << "Yes, the word is present in string" << endl;
        }
        else
            cout << "No, the word is not present in string" << endl;
    }

    int searchChar(string str1, char ch)
    {
        bool found = false;
        int i = 0;
        while ((str1[i] != '\0') || ch == str1[i])
            i++;
            if(!found)
            cout << "Yes, the character is present in string" << endl;
            else
            cout << "No, the character is not present in string" << endl;
    }

    ~stringType()
    {
        cout<<"\nDestructor called!!"<<endl;
    }
};
int main()
{
    stringType s;
    s.setValues("Eman", "Anjum");
    s.printValues();
    s.maxLength("Eman");
    cout << s.compare("Eman", "Anjum");
    cout << endl;
    s.copy("Eman ", "Anjum");
    s.concatenate("Eman", "Anjum");
    s.searchWord("Task 03 of Lab", "Lab");
    s.searchChar("Eman", 'm');
    return 0;
}