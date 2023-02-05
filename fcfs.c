#include<stdio.h>
 
 int main()
 
{
    int n,bt[30],waitt[30],turnart[30],i,j,avwtt=0,avturnart=0;
    printf("Please enter the total number of processes(maximum 30):");  
    scanf("%d",&n);
 
    printf("\nEnter The Process Burst Timen");
    for(i=0;i<n;i++)  
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
    }
 
    waitt[0]=0;   
 
    for(i=1;i<n;i++)
    {
        waitt[i]=0;
        for(j=0;j<i;j++)
            waitt[i]+=bt[j];
    }
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
 
    for(i=0;i<n;i++)
    {
        turnart[i]=bt[i]+waitt[i];
        avwtt+=waitt[i];
        avturnart+=turnart[i];
        printf("\nP[%d]\t\t%d\t\t\t%d\t\t\t\t%d",i+1,bt[i],waitt[i],turnart[i]);
    }
 
    avwtt/=i;
    avturnart/=i;  
    printf("\nAverage Waiting Time:%d",avwtt);
    printf("\nAverage Turnaround Time:%d",avturnart);
 
    return 0;
}
