/Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.
 
#include <iostream>
using namespace std;

 double *maximum(double* a, int n)
 {  double max=a[0];
    
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
        
    }
    return max;
 }

int main()
{
    double a[5],n,max;
	
	cout<<"enter the size of the array"<<endl;
	
	cin>>n;
	cout<<"enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
	max=maximum(a,n);
}
