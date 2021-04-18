#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,n,i,l,s,l1,s1,l2,s2;
    printf("Enter board size:");
    scanf("%d",&N);
    printf("Enter no of players:");
    scanf("%d",&n);
    printf("Enter no of ladders:");
    scanf("%d",&l);
    printf("Enter no of snakes:");
    scanf("%d",&s);
    int arr[N];
    for(i=0;i<N;i++)
    {
        arr[i]=-1;
    }
    printf("Enter ladder source and destination:");
    for(i=0;i<l;i++)
    {
        scanf("%d",&l1);
        scanf("%d",&l2);
        arr[l1]=l2;
    }
    printf("Enter snake source and destination:");
    for(i=0;i<s;i++)
    {
        scanf("%d",&s1);
        scanf("%d",&s2);
        arr[s1]=s2;
    }
    int t1,sel;
    int min=10000000;
    for(i=0;i<n;i++)
    {
        int c=0,r,x=0;
        int start=0;
        while(start<(N))
        {
           printf("Select any number to continue rolling dice:");
           scanf("%d",&sel);
           r=rand()%6+1;
           printf("roll of dice is %d",r);
           printf("\n");
           x=x+r;
           if(x>N)
           {
               x=x-r;
           }
           if(arr[x]!=-1)
           start=arr[x];
           else
           start=x;
           printf("Player is now on %d",start);
           printf("\n");
           x=start;
           c++;
        }
        printf("No of roll of dice required to reach destination:%d",c);
        printf("\n");
        if(c<min)
        {
            min=c;
            t1=i;
        }
    }
    printf("Player %d is the winner",t1+1);
    return 0;
}
