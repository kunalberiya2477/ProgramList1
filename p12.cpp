#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"enter number a";
	cin>>a;
	
	cout<<"enter number b";
	cin>>b;
	
	cout<<"enter number c";
	cin>>c;
	
	if(a>b && a>c)
	{
		cout<<"number A is big";
	}
	else if(b>a && b>c)
	{
		cout<<"number B is big";
	}
	else if(c>a && c>b)
    {
        cout<<"number c is big";	
    }
	return 0;
}