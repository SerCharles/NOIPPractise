#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
int hash[1010],a[110],ans[110];
int n;
int main()
{
	int i,xt=0;
freopen("09.in","r",stdin);
freopen("09.out","w",stdout);
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(hash[a[i]]!=1)  
		 {
			 hash[a[i]]=1;
			 ans[++xt]=a[i];
		 }
	 }
		 sort(ans+1,ans+xt+1);
		 printf("%d\n",xt);
		 for(i=1;i<=xt;i++)
			 printf("%d ",ans[i]);
	return 0;
}