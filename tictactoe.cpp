#include<stdio.h>
#include<conio.h>
char a[]={'0','1','2','3','4','5','6','7','8','9'};
int main(void)
{
    int i,j,k,n,win=0;
    for(i=0;i<=8,win==0;i++)
    {
     if(i>8)
            break;
     printf(" %c | %c | %c\n",a[1],a[2],a[3]);
     printf("---|---|---\n");
     printf(" %c | %c | %c\n",a[4],a[5],a[6]);
     printf("---|---|---\n");
     printf(" %c | %c | %c\n\n",a[7],a[8],a[9]);
     printf("Enter the postion Player %d: ",i%2+1);
     scanf("%d",&n);
     if(a[n]=='X'||a[n]=='O')
                          i--;
     else
         a[n]=88-9*(i%2);
     for(j=1,k=1;j<=7;j=j+3,k++)
     {
                        if((a[j]==a[j+1]&&a[j]==a[j+2])||(a[k]==a[k+3]&&a[k]==a[k+6]))
                              {win=i%2+1;
                              break;}
     }
     if((a[1]==a[5]&&a[1]==a[9])||(a[5]==a[3]&&a[5]==a[7]))
          win=i%2+1;
     }
     printf(" %c | %c | %c\n",a[1],a[2],a[3]);
     printf("---|---|---\n");
     printf(" %c | %c | %c\n",a[4],a[5],a[6]);
     printf("---|---|---\n");
     printf(" %c | %c | %c\n\n",a[7],a[8],a[9]);
     if(win!=0)
               printf("The Winner is Player %d :)",win);
     else
         printf("Match Draw!!:|");    
     getch();
     return 0;
}
