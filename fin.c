#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"main.h"

int sam[7][8]={{0}};

int main(void)
{
    int num,row,end;
    int i,j,k=1;
    int pl;
    char pic;
    srand((unsigned int)time(NULL));

    system("clear");
    printf("you can enter h or p(h:see how to play, p:play game)");
    scanf("%c",&pic);
    if(pic=='h')
    {
        load_data();
    }
    if(pic=='p')
    {
        printf("let's play game!");
    }
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            sam[i][j]=0;
        }
    }
    while(1)
    {
        pl=1;
        printf("it's your turn");
        printf("## %d turn ##",k);
        k++;
        printf("enter numbe(-1,0,1,2,3,4,5,6,7)");
        printf("if you want see map, enter 0");
        printf("if you want quit game, enter -1");
        scanf("%d",&num);
        if(num==-1)
        {
            printf("good bye");
            break;
        }
        row=main_func(pl,num);
        end=find_win(row,num-1,pl);
        if(end==1)
        {
            printf("it's your victory");
            for(i=0;i<7;i++)
            {
                for(j=0;j<7;j++)
                {
                    printf("%3d",sam[i][j]);
                }
                printf("\n");
            }
            break;
        }
        end=draw_game();
        if(end==2)
        {
            printf("it's draw");
            for(i=0;i<7;i++)
            {
                for(j=0;j<7;j++)
                {
                    printf("%3d",sam[i][j]);
                }
                printf("\n");
            }
            break;
        }
        pl=2;
        printf("it's computer turn");
        printf("## %d turn ##",k);
        k++;
        num=(rand()%7)+1;
        printf("computer enter %d",num);
        row=main_func(pl,num);
        end=find_win(row,num-1,pl);
        if(end==1)
        {
            printf("it's computer victory");
            for(i=0;i<7;i++)
            {
                for(j=0;j<7;j++)
                {
                    printf("%3d",sam[i][j]);
                }
                printf("\n");
            }
            break;
        }
        end=draw_game();
        if(end==2)
        {
            printf("it's draw");
            for(i=0;i<7;i++)
            {
                for(j=0;j<7;j++)
                {
                    printf("%3d",sam[i][j]);
                }
                printf("\n");
            }
            break;
        }
    }
}
