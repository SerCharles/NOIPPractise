#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
int m,n,num;
int judge(int x,int y,int flag)
{
   int temp;
		if(x<y)
		{
			temp=x;x=y;y=temp;
		}
    if(x>=2*y) return flag;
		if(flag==1) judge(x-y,y,0);
		else judge(x-y,y,1);
}
int main()
{
 freopen("stone.in","r",stdin);
    freopen("stone.out","w",stdout);
	while(scanf("%d%d\n",&m,&n)>0)
	{
	 int temp;
		if(m<n)
		{
			temp=m;m=n;n=temp;
		}
		if(judge(m,n,1)&&m!=0) 
		{
			num++;
			printf("win\n");
		}
			else if(m!=0)
			{	num++;
				printf("lose\n");
	    }	
   }
		return 0;
}