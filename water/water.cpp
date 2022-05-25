#include<iostream>
#include<cstdio>
#include<cstdlib>
int hash[10001],a[10001],num=0,t=0; 
int main()
{
	freopen("water.in","r",stdin);
	freopen("water.out","w",stdout);
	int x,m,n,i;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(num<n)
	{
		i=1;
		x=1;
	    while(i<=m)
	    {
		    if(hash[x]==0)
		    {
			    i++;
			    a[x]--;
			    if(a[x]==0)
			    {
				    hash[x]=1;
				    num++;
		        }
		    }
		    x++;
	    }
	    t++;
	}
	printf("%d",t);
	return 0;
}