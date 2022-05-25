#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
int n,ans;
double t;
double a[110],b[110],c[110];
int main()
{
	int i;
	double t1=0,t2=0,tt=0;
    freopen("16.in","r",stdin);
    freopen("16.out","w",stdout);
       scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
         tt=a[i]*a[i]+b[i]*b[i];
		t1=(sqrt(tt)/50)*2;
		t2=c[i]*1.5;
		t=t+t1+t2;
	}
	ans=int(t)+1;
	printf("%d",ans);
return 0; 
}