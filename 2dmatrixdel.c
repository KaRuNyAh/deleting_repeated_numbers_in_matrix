#include <stdio.h>
int main()
{
int i,j,r,c,k;
int b[r*r];
scanf("%d %d",&r,&c);
int a[r][c];
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
k=0;
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
       b[k]=a[i][j] ;
       k++;
    }
}
c=0;
for(i=0;i<r*r;i++)
{
    for(j=i+1;j<r*r+1;j++)
    {
        if(b[i]==b[j])
        {
           c=b[i]; 
        }
        
    }
    if(c==0)
        {
          printf("%d",b[i]);
          
        }
    else {
        c=0;
    }
   
}
return 0;
}