#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
int n;
int a,b;

int main()
{
	int i,xt=0;
freopen("6175.in","r",stdin);
freopen("6175.out","w",stdout);
  scanf("%d",&n);
  	for(i=1;i<=n;i++)
	{
		xt=0;
		scanf("%d%d",&a,&b);
		while(a>0)
		{
			xt++;
			a=a-b;
			a=a*2;
			if(a>1000000) a=1000000;
				b=b*1.05;
		}
		printf("%d\n",xt);
	}
		return 0;
}