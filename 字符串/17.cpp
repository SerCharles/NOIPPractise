#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
FILE *fin,*fout;
char a[210],b[210];
int main()
{
    freopen("17.in","r",stdin);
    freopen("17.out","w",stdout);
    scanf("%s",&a);
    scanf("%s",&b);
    int i,j,ans=0,k=0,m=strlen(a),n=strlen(b);
    if(m>n)
    { 
    for(i=0;i<m-n+1;i++)
    {
                     k=0;   
       for(j=0;j<n;j++)
       {
         if(a[i+j]==b[j]) k++;
       }
       if(k==n) ans=1;
       else k=0;
    }            
     if(ans==1) printf("%s is substring of %s",b,a);
     else printf("No substring");
     }
     else
     { 
    for(i=0;i<n-m+1;i++)
    {
                       k=0; 
       for(j=0;j<m;j++)
       {
         if(b[i+j]==a[j]) k++;
       }
       if(k==m) ans=1;
       else k=0;
    }            
     if(ans==1) printf("%s is substring of %s",a,b);
     else printf("No substring");
}      
return 0; 
}
