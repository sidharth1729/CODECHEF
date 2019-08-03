#include<bits/stdc++.h>

using namespace std;

#define M 1000000007

string to_string(long long n)
{
	string s="";
	
	while(n)
	{
		s = char(48 + n%10)  + s;
		n/=10; 
	}
	
	return s;
}

long long power10(long long n)
{
	long long result =1;
	
	for(int i=1;i<=n;i++)
	{
		result*=10;
		
		result%=M;
	}
	
	return result%M;
}

long long fun(long long n)
{
	string s1 = to_string(n);
	
	//cout<<s1<<endl;
	
	//string s[100000];
	
	//int j=0;
	
	//bool flag=false;
	
	//string s2="";
	
	//int count=1;
	
	long long answer=0;
	
	//int m[100000];
	
	for(int i=s1.length()-1;i>0;i--)
	{
		if(s1[i]!=s1[i-1])
		{	
			answer += ((s1[i]-48)*power10(s1.length()-1-i));
			answer%=M;
			
			//cout<<(s1[i]-48)<<" "<< power10(s1.length()-1-i)%M<<endl;
			//count=1;
		}
	}
	
	answer += ((s1[0]-48)*power10(s1.length()-1))%M; 
	
	//cout<<answer<<endl;
	
	return answer;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long b,l,h;
		cin>>b>>l;
		cin>>b>>h;
		
		long long result=0;
		
		for(long long i=l;i<=h;i++)
		{
			result+=fun(i);
			result%=M;
		}
		
		cout<<result<<endl;
		
	}
}

/*
1
1 388822442  
1 388822442  
*/
