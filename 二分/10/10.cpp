#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
int l,n,m,wxt;
int map[50100];
int judge(int x)
{
int i,num=0,flag=0,mini=191028;
for(i=1;i<=n+1;i++)
 {
  if(map[i]-map[flag]>=x)
   {
	 mini=min(mini,map[i]-map[flag]);
	  flag=i; 
   }
   else  num++;
 }
 if(num>m) return 0;
	 else{
		 wxt=mini;
		 return 1;
	 }
}
int main()
{
 freopen("10.in","r",stdin);
    freopen("10.out","w",stdout);
	scanf("%d%d%d",&l,&n,&m);
	int i,left=1,right=l,mid;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&map[i]);
	}
	map[n+1]=l;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(judge(mid)) left=mid+1;
		else right=mid-1;
	}
   printf("%d",right);
		return 0;
}