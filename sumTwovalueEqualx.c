#include <stdio.h>
int main ()
{
int n;
scanf("%d",&n);
int a[n];
for (int i = 0; i < n; i++)
{
   scanf("%d",&a[i]);
}

int x;
int flags=0;
scanf("%d",&x);


for (int i = 0; i <n-1; i++)
{
   for (int j = i+1; j <n ; j++)
   {
   
   if (a[i]+a[j]==x)
   {
    flags=1;
   }
   
   }
   
}
if (flags==1)
{
   printf("yes\n");
}
else
{
     printf("no\n");
}


    return 0;
}