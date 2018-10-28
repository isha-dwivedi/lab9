* We want to show string repeatedly by shifting top character of string to right.
\Refer to a below execution example. Write a below source code, complement the expression
hidden by "******" to meet this requirement. */
#include<iostream>
using namespace std;
int main()
{
    char a[20];
    cout << "Input about 10 characters of string\n";
    cin >> a;
    char *p=a;
    while(*p!='\0')//condition that loop should continue until space comes
    {cout<<p<<endl;
    p++;}
    
}
