#include <iostream>
using namespace std;

int main()
{
    int n,dem=0;
    cin >> n;
    if (n==0)
        cout << 0;
    while (n!=0)
    {   
        cout << n%10 ;
        n=n/10;
        if (n!=0) 
            cout << endl;
    }
    return 0; 
}