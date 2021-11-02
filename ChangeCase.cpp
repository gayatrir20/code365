#include<iostream>
using namespace std;
int main()
{
    char a[50];
    int i;
    cout<<"Enter a sentence: ";
    cin.get(a, 50);
    for(i=0;a[i]!='\0';i++)
    {
        if(islower(a[i]))
        {
            a[i]=char(toupper(a[i]));
        }
        else
        {
            a[i]=char(tolower(a[i]));
        }
    }
    cout<<"Changed case sentence: "<<a;
}
