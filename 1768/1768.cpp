#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
int n,wxt;
int map[110][110];
int c0[110][110],c[110][110],f[110][110];
int maximum(int x,int y,int z,int w)
{
	int mq=-384663;
	if(x>mq) mq=x;
	if(y>mq) mq=y;
	if(z>mq) mq=z;
	if(w>mq) mq=w;
		return mq;
}
int main()
{
 freopen("1768.in","r",stdin);
    freopen("1768.out","w",stdout);
  scanf("%d",&n);
  int i=0,k,j,k1,k2,ans=0,max1;
	while(i<n*n)
	{
		scanf("%d",&k);
		if(k!=' ')
		{
			i++;
		if(i%n!=0)
		map[i/n+1][i%n]=k;
		else map[i/n][n]=k;
		}
	}
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
c0[i][j]=c0[i][j-1]+map[i][j];
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
	c[i][j]=c[i-1][j]+c0[i][j];
  for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		max1=0;
        for(k1=0;k1<i;k1++)
			for(k2=0;k2<j;k2++)
			{
				max1=maximum(max1,c[i][j]+c[k1][k2]-c[k1][j]-c[i][k2],-100,-100);
			}
			f[i][j]=maximum(f[i][j],f[i-1][j],f[i][j-1],max1);
	}
	printf("%d",f[n][n]);
	return 0;
}