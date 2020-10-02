#include <iostream>
using namespace std;

int main() {
	int a,b,res=0;
	cin>>a;
	int cmp=a;
	while(a!=0)
	{
	    b=a%10;
	 res=res*10+b;
	    a=a/10;
	    
	}
	if(cmp==res)
	{
	        cout<<cmp <<" is palindrome number";
	    }
	    else{
	        cout<<cmp <<" is not palindrome number ";
	    }
	
	return 0;
}
