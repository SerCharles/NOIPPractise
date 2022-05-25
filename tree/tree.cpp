#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
int n;
long long wxt;
int map[100][100],visit[110];
struct swadia
{
	int length,x,y;
}road[6000];
struct cmp
{
	bool operator() (const swadia a,const swadia b)
	{
	return a.length<b.length;
	}
};
int main()
{
 freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
	scanf("%d",&n);
	int i,j,num=0;
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		 scanf("%d",&map[i][j]);
		if(map[i][j]!=0)
		{
			road[++num].length=map[i][j];
			road[num].x=i;road[num].y=j;
		}
	}
	sort (road+1,road+num+1,cmp());
	for(i=1;i<=num;i++)
	{
	 if(visit[road[i].x]==0||visit[road[i].y]==0)
	 {
		visit[road[i].x]=1;visit[road[i].y]=1;
		 wxt=wxt+road[i].length;
	 }
	}
	printf("%lld",wxt);
		return 0;
}