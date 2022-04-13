include<stdio.h>
void main()
{
int grade[20],credits[20],i,j,sum=0,total=0,n;
printf("enter no of subjects+labs");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter grade");
scanf("%d",&grade[i]);
printf("enter credits");
scanf("%d",&credits[i]);
}
for(j=1;j<=n;j++)
{
sum=sum+grade[j]*credits[j];
total=total+credits[j];
}
float sgpa=(float)sum/total;
printf("sgpa:%f",sgpa);
}