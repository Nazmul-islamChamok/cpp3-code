#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a,b,c: "<<endl;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"The largest value is a"<<endl;
        }
        else
        {
            cout<<"The largest value is c"<<endl;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"The largest value is b"<<endl;
        }
        else
        {
            cout<<"The largest value is c"<<endl;
        }

    }
    return 0;
}
