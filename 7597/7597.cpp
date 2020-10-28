
#include<iostream>
using namespace std;

int main()
{
	bool light[5001]={false};
	int n=0,m=0;
	scanf("%d%d", &n,&m);
	for(int i=1;i<=n;i++)//第二个人 
	{
		if(i%2==0) light[i]=true;
	}
	for(int i=3;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j%i==0)
			{
				if(light[j])
					light[j]=false;
				else light[j]=true;
			}
		}
	}
	int js=0;
	int res[5000]={0};
	for(int i=1;i<=n;i++)
	{
		if(!light[i])
			{
				res[js]=i;
				js++;
			}
	}
	int len=0;
	for(int i=0;i<n;i++)
	{
		if(res[i]==0)
		{
			len=i;
			break;
		}
	}
	for(int i=0;i<len;i++)
	{
		if((i+1)!=len)
		{
			cout<<res[i]<<",";
		}
		else 
		{
			cout<<res[i];
		}
	}
	cout<<endl;
	
}
