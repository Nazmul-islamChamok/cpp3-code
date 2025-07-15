#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    /*string s;
    cin>>s;
    cout<<(int)s[s.size()-1];//keno number dile string hisabe thakbe & last er number er asci value print korbe
    */
    string s;
    cin>>s;
    int last_digit=s[s.size()-1]-'0';
    cout<<last_digit;


}
