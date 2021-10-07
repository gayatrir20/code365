#include <iostream>
using namespace std;
int main()
{
    int m,x,y,z;
    cout<<"Enter number of people in the line: ";
    cin>>m;
    cout<<"Enter approximate people in front of you: ";
    cin>>x;
    cout<<"Enter approximate people behind you: ";
    cin>>y;
    z=max(x+1,m-y);
    cout<<"Number of positions: "<<m-z+1;
}
