//Write a function countEven(int*, int) which receives an integer array and its size, and returns the number of even numbers in the array.  
#include<iostream>
#include<string>
using namespace std;
int countEven(int *p,int b)//function to count even no.
{	int cnt=0;
	int i=0;
	
	while(i<b)
	{int a=*p;
	if((a%2)==0)
	{cnt++;}
	p++;
	i++;
}
	return cnt;
}
int main()
{ 	int a[5],n,cnt;
	
	cout<<"enter the size of the array"<<endl;
	
	cin>>n;
	cout<<"enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cnt=countEven(a,n);
	cout<<"the no. of even no. in the array is"<<cnt<<endl;
}
	
