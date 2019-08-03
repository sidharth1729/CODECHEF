#include<bits/stdc++.h>

using namespace std;

bool fun(string s,int len)
{
	int count=0;
	for(int i=0;i<len;i++)
	{
		if(s[i]=='1')
		count++;
	}
	
	return count%2;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string s;
		cin>>s;
		
		if(fun(s,s.length()))
		cout<<"WIN"<<endl;
		
		else
		cout<<"LOSE"<<endl;
	}
}
