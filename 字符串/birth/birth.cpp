#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
int n;
int leng[200],hash[50][50],num[200],answer1[200],answer2[200];
int  ans[200][200];
struct swadia
{
int a,b;
char name[30];
}m[200];
int judge(int x,int y)
{
	int i,p=leng[x];
	if(leng[x]>leng[y]) return 1;
	if(leng[x]==leng[y])
	{
		for(i=0;i<p;i++)
		{
          if(m[x].name>m[y].name) return 1;
		  }
		  return 0;
}
}
int main()
{
 freopen("birth.in","r",stdin);
    freopen("birth.out","w",stdout);
	scanf("%d",&n);
	int i,j,k,sum=0,temp;
	for(i=1;i<=n;i++)
	{
		scanf("%s%d%d",&m[i].name,&m[i].a,&m[i].b);
	 leng[i]=strlen(m[i].name);
		hash[m[i].a][m[i].b]++;
	}
	  for(i=1;i<=12;i++)
		  for(j=1;j<=31;j++)
		  {
			  if(hash[i][j]>=2)
			  {
				  sum++;
				  answer1[sum]=i;answer2[sum]=j;
				  for(k=1;k<=n;k++)
				  {
					  if(m[k].a==i&&m[k].b==j)
					   k=ans[sum][++num[sum]];
				  }
			  }
		  }
		  for(i=1;i<=sum;i++)
		  {
			  for(j=1;j<num[sum];j++)
					for(k=j;k<=num[sum];k++)
					{
				  if(judge(ans[i][j],ans[i][k]))
				  {
					temp=ans[i][j];ans[i][j]=ans[i][k];ans[i][k]=temp;
				  }
			  }
		  }  
	     for(i=1;i<=sum;i++)
		 {
				 printf("%d %d ",answer1[i],answer2[i]);
			    for(j=1;j<=num[sum];j++)
				{
					printf("%s ",m[ans[i][j]].name);
				}
				printf("\n");
	        }
	return 0; 
}