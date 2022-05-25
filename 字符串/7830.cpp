#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
int m,n,k,t,wxt;
int main()
{
 freopen("7830.in","r",stdin);
    freopen("7830.out","w",stdout);
  scanf("%d%d%d",&m,&n,&k);
	int i;
	for(i=1;i<=k;i++)
	{
		m=m*10;
	}
	t=((m*10)/n)%10;
	wxt=(m/n)%10;
	if(t>=5) wxt++;
		printf("%d",wxt);
	return 0; 
}