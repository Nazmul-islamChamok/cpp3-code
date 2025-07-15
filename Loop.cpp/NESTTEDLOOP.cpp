#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char symbol;
    int width;
    int height;
    cout<<"Enter the symbol to use: "<<endl;
    cin>>symbol;

    cout<<"Enter the width: "<<endl;
    cin>>width;

    cout<<"Enter the height: "<<endl;
    cin>>height;

    for(int i=0;i<height;i++)
    {
    for(int j=0;j<width;j++)
    {
        cout<<symbol;
    }
    cout<<endl;
    }



    return 0;
}
