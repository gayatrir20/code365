#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int i,n,b;
    cout<<"Enter layers: ";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        b=pow(11,i);
        cout<<b<<endl;
    }
}
