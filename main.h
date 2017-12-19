#include<stdio.h>

void load_data()
{
    FILE *fp;
    int ch;

    fp=fopen("b.txt","r");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        putchar(ch);
    }
}

#include<stdio.h>

extern int sam[7][8];

int main_func(int player,int number)
{
    static int a=6;
    static int b=6;
    static int c=6;
    static int d=6;
    static int e=6;
    static int f=6;
    static int g=6;
    int i,j;
    int end;
    if(number==0)
    {
        for(i=0;i<7;i++)
        {
            for(j=0;j<7;j++)
            {
                printf("%3d",sam[i][j]);
            }
            printf("\n");
        }
        return(10);
    }
    if(number==1)
    {
        if(a<=-1)
        {
            printf("mistake. your turn is gone");
            return(10);
        }
        sam[a][number-1]=player;
        a--;
        return(a+1);
    }
    if(number==2)
    {
        if(b<=-1)
        {
            printf("mistake. your turn is gone");
            return(10);
        }
        sam[b][number-1]=player;
        b--;
        return(b+1);
    }
    if(number==3)
    {
        if(c<=-1)
        {
            printf("mistake. your turn is gone");
            return(10);
        }
        sam[c][number-1]=player;
        c--;
        return(c+1);
    }
    if(number==4)
    {
        if(d<=-1)
        {
            printf("mistake. your turn is gone");
            return(10);
        }
        sam[d][number-1]=player;
        d--;
        return(d+1);
    }
    if(number==5)
    {
        if(e<=-1)
        {
            printf("mistak. your turn is gone");
            return(10);
        }
        sam[e][number-1]=player;
        e--;
        return(e+1);
    }
    if(number==6)
    {
        if(f<=-1)
        {
            printf("mistake. your turn is gone");
            return(10);
        }
        sam[f][number-1]=player;
        f--;
        return(f+1);
    }
    if(number==7)
    {
        if(g<=-1)
        {
            printf("mistake. your turn is gone");
            return(10);
        }
        sam[g][number-1]=player;
        g--;
        return(g+1);
    }
    if((number!=1)&&(number!=2)&&(number!=3)&&(number!=4)&&(number!=5)&&(number!=6)&&(number!=7))
    {
        printf("it's mistake. again.");
        printf("enter number(0,1,2,3,4,5,6,7)");
        scanf("%d",&number);
        end=main_func(player,number);
        return(end);
    }
}

#include<stdio.h>

extern int sam[7][8];

int find_win(int row,int col,int player)
{
    int a=0;
    if((sam[row][col]==player)&&(sam[row][col+1]==player)&&(sam[row][col+2]==player)&&(sam[row][col+3]==player))
    {
        a=1;
    }
    if((sam[row][col-1]==player)&&(sam[row][col]==player)&&(sam[row][col+1]==player)&&(sam[row][col+2]==player))
    {
        a=1;
    }
    if((sam[row][col-2]==player)&&(sam[row][col-1]==player)&&(sam[row][col]==player)&&(sam[row][col+1]==player))
    {
        a=1;
    }
    if((sam[row][col-3]==player)&&(sam[row][col-2]==player)&&(sam[row][col-1]==player)&&(sam[row][col]==player))
    {
        a=1;
    }
    if((sam[row][col]==player)&&(sam[row+1][col]==player)&&(sam[row+2][col]==player)&&(sam[row+3][col]==player))
    {
        a=1;
    }
    if((sam[row][col]==player)&&(sam[row-1][col+1]==player)&&(sam[row-2][col+2]==player)&&(sam[row-3][col+3]==player))
    {
        a=1;
    }
    if((sam[row+1][col-1]==player)&&(sam[row][col]==player)&&(sam[row-1][col+1]==player)&&(sam[row-2][col+2]==player))
    {
        a=1;
    }
    if((sam[row+2][col-2]==player)&&(sam[row+1][col-1]==player)&&(sam[row][col]==player)&&(sam[row-1][col+1]==player))
    {
        a=1;
    }
    if((sam[row+3][col-3]==player)&&(sam[row+2][col-2]==player)&&(sam[row+1][col-1]==player)&&(sam[row][col]==player))
    {
        a=1;
    }
    if((sam[row][col]==player)&&(sam[row+1][col+1]==player)&&(sam[row+2][col+2]==player)&&(sam[row+3][col+3]==player))
    {
        a=1;
    }
    if((sam[row-1][col-1]==player)&&(sam[row][col]==player)&&(sam[row+1][col+1]==player)&&(sam[row+2][col+2]==player))
    {
        a=1;
    }
    if((sam[row-2][col-2]==player)&&(sam[row-1][col-1]==player)&&(sam[row][col]==player)&&(sam[row+1][col+1]==player))
    {
        a=1;
    }
    if((sam[row-3][col-3]==player)&&(sam[row-2][col-2]==player)&&(sam[row-1][col-1]==player)&&(sam[row][col]==player))
    {
        a=1;
    }
    return(a);
}

#include<stdio.h>

extern int sam[7][8];

int draw_game()
{
    int a=0;
    if((sam[0][0]==1)&&(sam[0][0]==2)&&(sam[0][1]==1)&&(sam[0][1]==2)&&(sam[0][2]==1)&&(sam[0][2]==2)&&(sam[0][3]==1)&&(sam[0][3]==2)&&(sam[0][4]==1)&&(sam[0][4]==2)&&(sam[0][5]==1)&&(sam[0][5]==2)&&(sam[0][6]==1)&&(sam[0][6]==2))
    {
        a=2;
    }
    return(a);
}

