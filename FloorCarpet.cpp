#include <iostream>
using namespace std;
int main()
{
    int n,m,a,l,w;
    cout<<"Enter floor sides(nxm) and cloth side(a) respectively:\n";
    cin>>n>>m>>a;
    l=n/a;
    w=m/a;
    if(l%a!=0)
    {
        l++;
    }
    if(w%a!=0)
    {
        w++;
    }
    cout<<"Cloth required: "<<l*w<<" pieces";
}
