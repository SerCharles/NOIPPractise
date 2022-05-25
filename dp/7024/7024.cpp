#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
int n,m;
int v[110],c[110],x[1100];
int max(int a,int b)
{
if(a>b) return a;
	else return b;
}
int main()
{
 freopen("7024.in","r",stdin);
    freopen("7024.out","w",stdout);
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=1;i<=m;i++)
	{
		scanf("%d%d",&v[i],&c[i]);
	}
	for(i=1;i<=m;i++)
	{
	for(j=n;j>=v[i];j--)
	  {
		  x[j]=max(x[j],x[j-v[i]]+c[i]);
	  }
  }
	printf("%d\n",x[n]);
	return 0; 
}