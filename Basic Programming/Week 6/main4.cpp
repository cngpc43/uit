#include <iostream>
using namespace std;

int main()
{
    int n,a,b,sum=0;
    cin >> n >>a >> b;
    for (int i=1; i<=n;i++)
        if ((i%a==0) && (i%b!=0))
            sum+=i;
            
    cout << sum;
    return 0; 
}