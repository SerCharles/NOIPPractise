#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
int m,n;
int c[100010];
int judge(int x)
{
int i=1,flag=0,j;
	while(i<n)
	{
		i++;
        for(j=flag;j<=m;j++)
		{
		  if(c[j]-c[flag]>=x) break; 
		}	
		  flag=j;
	}
	if(c[m]-c[flag]>=x) return 1;
		else return 0;
}
int main()
{
freopen("explore.in","r",stdin);
freopen("explore.out","w",stdout);
	int i,a1,R,L=1,mid;
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++)
	{
		scanf("%d",&a1);
		c[i]=c[i-1]+a1;
	}
	R=(c[m]/n)+1;
	while(L<=R)
	{
		mid=(L+R)/2;
	if(judge(mid)) L=mid+1; 
	else R=mid-1;
	}
	printf("%d",R);
		return 0;
}