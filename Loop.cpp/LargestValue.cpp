#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,num3;
    int largest;
    cout<<"Enter three integers: "<<endl;
    cin>>num1>>num2>>num3;
    //Determine the largest number
    if(num1>=num2 && num1>=num3)
    {
        largest=num1;
    }
    else if(num2>=num1 && num2>=num3)
    {
        largest=num2;
    }
    else
    {
        largest=num3;
    }
    cout<<"The largest number is: "<<largest;
    return 0;
}
