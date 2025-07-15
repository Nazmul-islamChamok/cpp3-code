#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age ="<<endl;
    cin>>age;
    if(age>=100)
        cout<<"You are too old to enter this site!"<<endl;
    else if(age>=18)
    {
        cout<<"Welcome to the side!"<<endl;
    }
    else if(age<0)
    {
        cout<<"You haven't been born yet!"<<endl;
    }
    else{
        cout<<"You are not enough odd to enter!"<<endl;
    }

    getch();
}

