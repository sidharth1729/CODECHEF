#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			a[i]*=20;
		}
		
		int b[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			b[i]*=10;
		}
		
		int maxi =0;
		
		for(int i=0;i<n;i++)
		{
			maxi = max(maxi,a[i]-b[i]);
		}
		
		cout<<maxi<<endl;
	}
}
