#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
FILE *fin,*fout;
int a[10000];
int main()
{
	freopen("AB.in","r",stdin);
    freopen("AB.out","w",stdout);
    int l,j,k=0,n,m,i,one=0,zero=0,A=0,B=0;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
	    l=j;k=0;
	    while(l>0)
	    {	
		    m=l%2;
		    k++;
		    a[k]=m;
			l=l/2;
	    }
	    for(i=1;i<=k;i++)
	    {
		    if(a[i]==1)
		    {
			    one++;
		    }
		    else
		    {
			    zero++;
		    }
		}	
		    if(one>zero)
		    {
			    A++;
		    }
		    else
		    {
			    B++;
		    }
	    
	    one=0;
	    zero=0;
	}
	printf("%d %d",A,B);
	return 0;
	//system("pause");
} 