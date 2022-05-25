#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
int n,m;
int max1[100100][50],min1[100100][50];





int main()
{
 freopen("fruit.in","r",stdin);
    freopen("fruit.out","w",stdout);
	scanf("%d",&n);
	int i,j,a1,a2,k,t;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&max1[i][0]);
		min1[i][0]=max1[i][0];
	}
	k=log(n)/log(2);
	for(i=1;i<=n;i++)
		for(j=1;j<=k;j++)
		{
			min1[i][j]=183656;
		}
	for(j=1;j<=k;j++)
		for(i=1;i<=n-(1<<j)+1;i++)
		{
		max1[i][j]=max(max1[i][j-1],max1[i+(1<<(j-1))][j-1]);	
	    min1[i][j]=min(min1[i][j-1],min1[i+(1<<(j-1))][j-1]);
		}
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		scanf("%d%d",&a1,&a2);
		t=log(a2-a1+1)/log(2);
		printf("%d\n",max(max1[a1][t],max1[a2-(1<<k)+1][k])-min(min1[a1][t],min1[a2-(1<<k)+1][k]));
	}
		return 0;
}