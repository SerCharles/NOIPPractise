#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
char a[110];
int map[110][110];
int m,n;
int main()
{
	int i,j,t=1,wxt=0;
freopen("6262.in","r",stdin);
freopen("6262.out","w",stdout);
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			scanf("%s",&a);
		for(j=0;j<n;j++)
		{
			if(a[j]=='#') map[i][j+1]=0;
			if(a[j]=='.') map[i][j+1]=1;
			if(a[j]=='@') map[i][j+1]=2;
		 }
			}
			scanf("%d",&m);
while(t<m)
{
	t++;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			if(map[i][j]<=t&&map[i][j]>1)
			{
				if(map[i][j+1]==1) map[i][j+1]=t+1;
				if(map[i][j-1]==1) map[i][j-1]=t+1;	
                if(map[i+1][j]==1) map[i+1][j]=t+1;
				if(map[i-1][j]==1) map[i-1][j]=t+1;
			 }
		 }
	 }
		 for(i=1;i<=n;i++)
			 for(j=1;j<=n;j++)
			 {
				 if(map[i][j]>1) wxt++;
				 }
				 printf("%d",wxt);
	return 0;
}