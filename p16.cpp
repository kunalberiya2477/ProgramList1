#include<iostream>
using namespace std;
void cp(int num);
int main()
{
	int num;
	
	cout<<"enter a number::";
	cin>>num;
	cp(num);
	return 0;
	
}
 void cp(int num)
  {
  	int rev=0,temp,n;
  	num=num;
  	while(n>0)
  	{
  		temp=num%10;
  		rev=(rev*10)+temp;
  		num=num/10;
	  };
	  cout<<"the reverse of this no. is:"<<rev<<endl;
	  if(num==rev)
  	 {
  	  cout<<"this no. is Palindrome:";
  	 }
  	else
  	 {
  	  cout<<"this no. is not Plaindrome:";
	 }
   }