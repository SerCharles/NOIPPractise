#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
int r,c;
int f[10010],map[110][110],source[10010];
int maximum(int a,int b)
{
if(a>b) return a;
	else return b;
}
void set()
{
	int i,j;
for(i=0;i<=110;i++)
		for(j=0;j<=110;j++)
			map[i][j]=103784;
}
int main()
{
	int i,j,k1,max1=0,k2,ans=0;
	set();
 freopen("snow.in","r",stdin);
    freopen("snow.out","w",stdout);
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++)
		for(j=1;j<=c;j++)
		{
			scanf("%d",&map[i][j]);
		    f[map[i][j]]=1;
			source[map[i][j]]=i*100+j;
			if(map[i][j]>max1) max1=map[i][j];
		}
	  for(i=1;i<=max1;i++)
	  {
		  if(f[i]!=0)
		  {
			  k1=source[i]/100;k2=source[i]%100;
			  if(map[k1][k2]>map[k1+1][k2]) f[i]=maximum(f[map[k1+1][k2]]+1,f[i]);
			  if(map[k1][k2]>map[k1-1][k2]) f[i]=maximum(f[map[k1-1][k2]]+1,f[i]);
			  if(map[k1][k2]>map[k1][k2+1]) f[i]=maximum(f[map[k1][k2+1]]+1,f[i]);
	          if(map[k1][k2]>map[k1][k2-1]) f[i]=maximum(f[map[k1][k2-1]]+1,f[i]);
			}
			if(f[i]>ans) ans=f[i];
		}
	 printf("%d",ans);
		return 0; 
}