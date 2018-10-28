* Create an array of size 10. Use a loop to print array using the normal 
 index method as well as the pointer method. */
 #include<iostream>
 using namespace std;
 int main()
 {
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *p; //a pointer
    for(int i=0;i<10;i++)
    {
      cout<<a[i]<<endl; //output the values of array using for loop
    }
    p=a; //p now points to an array a
    for(int i=0;i<10;i++)
    
        cout<<*(p+i)<<endl;//output the values of array using pointer
        
}
 
