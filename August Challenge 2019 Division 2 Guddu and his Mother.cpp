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
		cin>>a[i];
		
		int count=0;
		
		int result=0;
		
		for(int i=0;i<n-1;i++)
		{
			result = a[i];
			for(int j=i+1;j<n;j++)
			{
				result^=a[j];
				
				if(result==0)
				{
					count+=(j-i);
				}
				
			}
		}
		
		
		cout<<(count)<<endl;
	}
}
