#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
int n,m,k,x,result=1,wxt;
int rwq(int p)
{
	int a=10;
 if(p==0) return 1;
  while(p)
  { 
    if(p & 1) result=(result*a)%n; 
	 a=(a*a)%n;
   p=p >> 1;	
  }
}
int main()
{
 freopen("circle.in","r",stdin);
    freopen("circle.out","w",stdout);
scanf("%d%d%d%d",&n,&m,&k,&x);
	rwq(k);
 wxt=(result*m+x)%n;
if(wxt!=0) printf("%d",wxt);
else printf("%d",n);
	return 0;
}