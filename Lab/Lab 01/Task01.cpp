#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Student
{
    string name, dep;
    int regNo;
    float SGPA;
};

int main()
{
    int courses, marks = 0;
    float gpa, sum = 0;
    int t_chrs;
    Student S[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the record of " << i+1 << " student" << endl;
        cin.ignore();
        cout << "Enter the name: ";
        getline(cin, S[i].name);
        cout << "Enter the reg.No: ";
        cin >> S[i].regNo;
        cin.ignore();
        cout << "Enter the degree programme: ";
        getline(cin, S[i].dep);
        cout << "Enter the number of courses: " << endl;
        cin >> courses;
        for (int j = 0; j < courses; j++)
        {
            cout << "Enter the marks of " << j + 1 << " course" << endl;
            cin >> marks;

            if (marks > 86 && marks < 90)
                gpa = 4 * 3;
            else if (marks > 82 && marks < 86)
                gpa = 3.67 * 3;
            else if (marks > 78 && marks < 82)
                gpa = 3.33 * 3;
            else if (marks > 74 && marks < 78)
                gpa = 3 * 3;
            else if (marks > 70 && marks < 74)
                gpa = 2.67 * 3;
            else if (marks > 66 && marks < 70)
                gpa = 2.33 * 3;
            else if (marks > 62 && marks < 66)
                gpa = 2 * 3;
            else if (marks > 58 && marks < 62)
                gpa = 1.67 * 3;
            else if (marks > 54 && marks < 58)
                gpa = 1.33 * 3;
            else if (marks > 50 && marks < 54)
                gpa = 1 * 3;
            else if (marks > 46 && marks < 50)
                gpa = 0 * 3;
        }
        t_chrs=courses*3;
        sum=sum+gpa*3;
        S[j].SGPA=sum/t_chrs;
        
        cout<<"S.No"<<setw(10)<<"Name"<<setw(10)<<"Reg No"<<setw(10)<<"Dergree Program"<<setw(10)<<"SGPA"<<endl;

        for(int k=0;k<3;k++)
        {
            cout<<k+1<<setw(10)<<S[i].name<<setw(10)<<S[i].regNo<<setw(10)<<S[i].dep<<setw(10)<<S[i].SGPA<<endl;
        }
    }
    return 0;
}