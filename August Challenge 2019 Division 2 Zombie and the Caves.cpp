#include<bits/stdc++.h>

using namespace std;

bool fun(int result[],int h[],int n)
{
	sort(result,result+n);
	sort(h,h+n);
	
	for(int i=0;i<n;i++)
	{
		if(result[i]!=h[i])
		return false;
	}
	
	return true;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int a[n],h[n];
		
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		for(int i=0;i<n;i++)
		cin>>h[i];
		
		//int result[n];
		
		pair<int,int>dp[n];
		
		for(int i=0;i<n;i++)
		dp[i]={0,0};
		
		for(int i=0;i<n;i++)
		{
			if(i-a[i]<0)
			{
				dp[0].first+=1;
			}
			
			else
			{
				dp[i-a[i]].first+=1; 
			}
			
			if(i+a[i]>=n)
			{
				dp[n-1].second+=1;
			}
			
			else
			{
				dp[i+a[i]].second +=1;
			}
		}
		
		int result[n];
		
		memset(result,0,sizeof(result));
		
		int re=0;
		
		for(int i=0;i<n;i++)
		{
			re += dp[i].first;
			result[i]=re;
			
			re-=dp[i].second;
		}		
		
		if(fun(result,h,n))
		{
			cout<<"YES"<<endl;
		}
		
		else
		cout<<"NO"<<endl;
	}
}
