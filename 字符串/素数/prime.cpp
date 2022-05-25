#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
int n,sum=1,k=0;
int hash[100000000];
int ans[10000000];
int pan(int xt)
{
	int i,temp=xt,num=0,nu=1;
	int a[11]={0};
	for(i=1;i<=n;i++)
	{
		 a[i]=temp%10;
	  temp=temp/10;
	}
	for(i=0;i<n;i++)
	{
		num=num+a[n-i]*nu;
		nu=nu*10;
	}
	if(num==xt) return 1;
		else return 0;
}
void judge(int x)
{
	int i=1;
    if(x>=(sum+1)/10&&x<=sum&&pan(x))
	{
		k++; ans[k]=x;
	}
	while(i*x<=sum)
	{
	   hash[i*x]=1;
	    i++;
	}
}
int main()
{
	int i;
    freopen("prime.in","r",stdin);
    freopen("prime.out","w",stdout);
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
         sum=sum*10;
	}
     sum=sum-1;
     for(i=2;i<=sum;i++)
	 {
		 if(hash[i]==0) judge(i);
		}	 
      printf("%d\n",k);
		for(i=1;i<=k;i++)
			printf("%d ",ans[i]);
return 0; 
}
