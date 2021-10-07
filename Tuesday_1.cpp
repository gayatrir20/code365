#include <iostream>
using namespace std;
void rectangle(int a,int b,int c,int d)
{
    if(a==b==c==d)
    {
        cout<<"The given sides "<<a<<", "<<b<<", "<<c<<", "<<d<<" can make a rectangle";
    }
    else if(a==b && c==d)
    {
        cout<<"The given sides "<<a<<", "<<b<<", "<<c<<", "<<d<<" can make a rectangle";
    }
    else if(a==c && b==d)
    {
        cout<<"The given sides "<<a<<", "<<b<<", "<<c<<", "<<d<<" can make a rectangle";
    }
    else if(a==d && c==b)
    {
        cout<<"The given sides "<<a<<", "<<b<<", "<<c<<", "<<d<<" can make a rectangle";
    }
    else
    {
        cout<<"The given sides "<<a<<", "<<b<<", "<<c<<", "<<d<<" cannot make a rectangle";
    }
}
int main()
{
    int x,y,z,w;
    cout<<"Enter four sides:\n";
    cin>>x>>y>>z>>w;
    rectangle(x,y,z,w);
}
