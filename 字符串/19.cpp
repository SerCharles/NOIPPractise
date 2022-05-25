#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
char a[510];
int judge(int k1,int k2)
{
int i;
	for(i=0;i<(k1+1)/2;i++)
	{
		if(a[k2+i]!=a[k2+k1-i]) return 0;
	}
	return 1;
}
int main()
{
 freopen("19.in","r",stdin);
    freopen("19.out","w",stdout);
int m,i,j,k;
	scanf("%s",&a);
	m=strlen(a);
	for(i=1;i<m;i++)
	{
		for(j=0;j<m-i+1;j++)
	{
       if(judge(i,j))  
	   {
		   for(k=j;k<=j+i;k++)
		   {
			   printf("%c",a[k]);
		   }
		   printf("\n");
	}
}
}
return 0; 
}