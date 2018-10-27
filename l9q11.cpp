/* Write a program to declare variables of all predefined sizes and declare corresponding 
pointers (of all predefined types).
Print out the sizes of each of variables and pointer variables. (Hint: use sizeof )*/
#include<iostream>
#include<string>
using namespace std;
int main()
{   int x =123;
    int *ptr = &x;

    cout << ptr << endl;
    cout << &x << endl;
    cout<<x<<endl;
    cout << *ptr << endl;
    cout << ptr++ << endl;
    cout << ++ptr << endl;
    cout<<"size of x:"<<sizeof(x)<<endl;
    cout<<"size of *ptr:"<<sizeof(*ptr)<<endl;
    
    char a[10]="qwerty";
    char *pt=a;
    cout<<pt<<endl;
    cout<<*pt<<endl;
    cout<<a<<endl;
    cout<<"size of x:"<<sizeof(a)<<endl;
     return 0;
}
