#include<conio.h>
#include<stdio.h>
void main()
{
 int n;    //n number of process
 int r;      // number of resources
 int i,j,k,cnt,cntt;
 int avail[10],p[10];
 int need[10][10],alloc[10][10],max[10][10];
 printf("\nEnter number of process :");
 scanf("%d",&n);
 printf("\n Enter  resources available : ");
 scanf("%d",&r);
 printf("\nEnter insatnces for resources :\n");
 for(i=0;i<r;i++)
 {  printf("R%d ",i+1);
  scanf("%d",&avail[i]);
  }
 printf("\n Enter allocation matrix  \n");
 printf("\n a b c d");