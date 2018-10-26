//Write a function contains(char*, char) which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise.
#include<iostream>
#include<string>
using namespace std;
int compare(char*string, char c)
{	int i=0;
	char *pt;
	pt=string;
	while(*pt!='\0')
	{	if(*pt==c)//comparing the character in string 
		i++;
		if(i>0)
		return 1;//if true return 1
		else
		return 0;//if false return 0
		pt++;
	}
}


int main()
{
	char cstring[20],c;
	int result;
	cout<<"enter the string"<<endl;
	cin>>cstring;
	cout<<"enter the character to be searched"<<endl;
	cin>>c;
	result=compare(cstring,c);
	if (result==1)
	cout<<"result is true"<<endl;
	else
	cout<<"result is false"<<endl; 


}

		
	

