#include <iostream>
using namespace std;

#define powerOfTwo(n) ((n & (n - 1)) == 0 ? cout<<"YES "<<n<<" is in power of two" : cout<<"NO "<<n<<" is not in power of two")
int main()
{
    int num;
    cout << "Please enter a number to check if it is in the power of two:" << endl;
    cin >> num;
   powerOfTwo(num);
}