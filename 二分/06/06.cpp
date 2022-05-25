#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
int n,m,wxt;
int money[100100];
int judge(int x)
{
int flag=0,num=0,i,mini=0;
	for(i=1;i<=n;i++)
	{
		if(money[i]-money[flag]>x) 
		{
			mini=max(money[i-1]-money[flag],mini);
			flag=i-1;
			num++;
		}
	}
	if(num<=m)
	{
		   wxt=mini;
			return 1;
	}
	return 0;
}
int main()
{

	freopen("06.in","r",stdin);
freopen("06.out","w",stdout);
	scanf("%d%d",&n,&m);
	int i,a1,l,r,mid;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a1);
		money[i]=money[i-1]+a1;
	}
	l=1;r=money[n];
	while(l<=r)
	{
		mid=(l+r)/2;
		if(judge(mid)) r=mid-1;
		else l=mid+1;
	}
	printf("%d", wxt);
		return 0;
}