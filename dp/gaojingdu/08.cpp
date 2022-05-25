#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
char aa[210],bb[210],answer[210];
int a[210],b[210],ans[210];
int m,n;
int max1(int x,int y)
{
	if(x>y) return x;
		else return y;
}
int main()
{
	int i,k;
 freopen("08.in","r",stdin);
    freopen("08.out","w",stdout);
      scanf("%s%s",&aa,&bb);
	  m=strlen(aa);n=strlen(bb);
for(i=m-1;i>=0;i--)
	a[m-i]=aa[i]-48;
for(i=n-1;i>=0;i--)
	b[n-i]=bb[i]-48;
    k=max1(m,n);
	 for(i=1;i<=k;i++)
     {
		 ans[i]=a[i]+b[i]+ans[i];
		 ans[i+1]=ans[i+1]+ans[i]/10;
		 ans[i]=ans[i]%10;
	 }
	    if(ans[k+1]!=0) k++;
		for(i=k;i>=1;i--)
		{
		 	answer[k-i]=ans[i]+48;
		}
		for(i=0;i<k;i++)
			printf("%c",answer[i]);
		return 0; 
}