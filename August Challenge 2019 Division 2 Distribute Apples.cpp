#include<bits/stdc++.h>

using namespace std;

bool fun(long long n,long long k)
{
	long long div = n/k;
	
	//long long re = (n/(k*k))*k;
	long long re;
	re = div/k;
	re*=k;	
	
	return re!=div;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		
		if(fun(n,k))
		cout<<"YES"<<endl;
		
		else
		cout<<"NO"<<endl;
		
	}
}
