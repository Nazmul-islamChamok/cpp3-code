#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ int rows;
  int columns;
  char symbol;
  cout<<"How many rows? "<<endl;
  cin>>rows;
  cout<<"How many columns? "<<endl;
  cin>>columns;
  cout<<"Enter a sybol to use? "<<endl;
  cin>>symbol;
    for(int i=1;i<=rows;i++)
    {
       for(int j=1;j<=columns;j++)
    {
        cout<<symbol<<" ";
    }
    cout<<endl;
    }



    getch();
}

