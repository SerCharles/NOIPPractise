#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
int n,k;
double aa[10100];
	int judge(double x)
	{
      int i,sum=0;
		for(i=1;i<=n;i++)
		{
			sum=sum+aa[i]/x;
		}
		if(sum>=k) return 1;
			else return 0;
	}
double divide()
{
 double l=0.01,r=100000.00,mid;
while(l<=r)
{
	mid=(l+r)/2;
	if(judge(mid)) l=mid+0.01;
		else r=mid-0.01;
}
return r;
}
int main()
{
freopen("04.in","r",stdin);
freopen("04.out","w",stdout);
  	int i;
	double ans;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%lf",&aa[i]);
	}
	ans=divide();
	if(ans>=1.00)
	{
printf("%.2f",ans);
	}
	else printf("0.00");
	return 0;
}