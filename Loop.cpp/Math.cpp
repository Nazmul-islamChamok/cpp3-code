#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main()
{
    double x=3.99;
    double y=4;
    double z,m,n,p,q,r,t,s;
    z=max(x,y);
    m=min(x,y);
    n=pow(x,y);
    p=sqrt(9);
    q=abs(-3);
    r=round(x);
    t=ceil(x);
    s=floor(x);
    cout<<"Max is ="<<z<<endl;
    cout<<"Min is ="<<m<<endl;
    cout<<"Power is ="<<n<<endl;
    cout<<"Squrt is ="<<p<<endl;
    cout<<"ABS is ="<<q<<endl;
    cout<<"Round is ="<<r<<endl;
    cout<<"Ceil is ="<<t<<endl;
    cout<<"Floor is ="<<s<<endl;


    getch();
}

