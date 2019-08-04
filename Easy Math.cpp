#include<bits/stdc++.h>

using namespace std;

int fun(int n)
{
	int sum=0;
	
	while(n)
	{
		sum+=n%10;
		n/=10;
	}	
	
	return sum;
}

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
		}
		/*
		int b[n];
		
		for(int i=0;i<n;i++)
		{
			b[i]=fun(a[i]);
		}
		
		int maxi=0;
		int index;
		
		for(int i=0;i<n;i++)
		{
			if(b[i]>maxi)
			{
				maxi = b[i];
				index = i;
			}
		}
		
		int result = a[index];
		//int sum = 
		b[index]=0;
		maxi=0;
		for(int i=0;i<n;i++)
		{
			if(b[i]>maxi )
			{
				maxi = b[i];
				index = i;
			}
		}
		
		result*=a[index];
		*/
		
		int maxi =0;
		
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			maxi = max(maxi,fun(a[i]*a[j]));
		}
		
		cout<<maxi<<endl;
	//	cout<<fun(result)<<endl;
	}
}
