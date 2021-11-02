#include<iostream>
using namespace std;
int main()
{
    int r,s;
    cout<<"Enter Rank: ";
    cin>>r;
    if(r>0 && r<51)
    {
        cout<<"100% Scholarship";
    }
    else if(r>50 && r<101)
    {
        cout<<"50% Scholarship";
    }
    else
    {
        cout<<"No Scholarship";
    }
}
