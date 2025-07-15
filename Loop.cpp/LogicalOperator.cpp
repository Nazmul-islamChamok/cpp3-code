#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int temp;
    bool suny=false;
    cout<<"Enter the temperature ="<<endl;
    cin>>temp;
    if(temp<=0 || temp>=30)
    {
       cout<<"The temperature is bad!";
    }
    else{
        cout<<"The temperature is good";
    }
    cout<<endl;
    if(!suny)
    {
        cout<<"It is cloudy outside!";
    }
    else{
        cout<<"It is suny outside!";
    }


    getch();
}

