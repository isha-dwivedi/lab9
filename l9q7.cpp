//Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.
  
#include<iostream>
#include<string>
using namespace std;
double* maximum(double* p, int n)//function to count even no.
{	double max=*p;
	int i=0;
	
	while(i<n)
	{int a=*p;//copying the value of array p in a
	if(max<*(p+1)) //comparing value of p and p+1
	{   int temp=max;
	        max=*(p+1);
	        *(p+1)=temp;
	    
	} //exchanging values
	p++; //proceeding in array
	i++; //continuing loop
}
	cout<<"max"<<max;
}
int main()
{ 	double a[5],n,max;
	
	cout<<"enter the size of the array"<<endl;
	
	cin>>n;
	cout<<"enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
	//max=maximum( a, n);
	//cout<<"max"<<max<<endl;
}
