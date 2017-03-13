#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"input n : ";
	cin>>n;
	cout<<n;
	while(n!=1)
	{
		if(n%2==1) //n odd
			n = 3*n+1;
		else //n even
			n = n/2;
	cout<<" "<<n;
	}
	return 0;
}
