#include <stdio.h>
int main()
{
    char c;
    int i,j,k,a,b,s[8][8],o=1,m[8],k1[9],k2[9],p[28],sum=0;
	jump:
	printf("\tCHESS BOARD POSITION\n\n");
    printf("\nEnter positions like this chess board at 1st in x axis direction then y axis \n");
    printf("  1  2  3  4  5  7  8\n");
    for(i=1;i<8;i++)
    {
    	printf("%d __|__|__|__|__|__|__\n",i);
	}
	printf("8   |  |  |  |  |  |  \n");

    printf("Opponent knight Posintion ");
    scanf("%d %d",&a,&b);

    a=a-1;
    b=b-1;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            s[i][j]=o;
            o++;
        }
    }

    if((a-2)>=0 && (a-2)<8)
    {
        if((b-1)>=0 && (b-1)<8)
        {
            m[0]=s[a-2][b-1];
        }
        else
        {
            m[0]=0;
        }
    }
    else
    {
        m[0]=0;
    }
    if((a-2)>=0 && (a-2)<8)
    {
        if((b+1)>=0 && (b+1)<8)
        {
            m[1]=s[a-2][b+1];
        }
        else
        {
            m[1]=0;
        }
    }
    else
    {
        m[1]=0;
    }
    if((a-1)>=0 && (a-1)<8)
    {
        if((b-2)>=0 && (b-2)<8)
        {
            m[2]=s[a-1][b-2];
        }
        else
        {
            m[2]=0;
        }
    }
    else
    {
        m[2]=0;
    }
    if((a-1)>=0 && (a-1)<8)
    {
        if((b+2)>=0 && (b+2)<8)
        {
            m[3]=s[a-1][b+2];
        }
        else
        {
            m[3]=0;
        }
    }
    else
    {
        m[3]=0;
    }
    if((a+1)>=0 && (a+1)<8)
    {
        if((b-2)>=0 && (b-2)<8)
        {
            m[4]=s[a+1][b-2];
        }
        else
        {
            m[4]=0;
        }
    }
    else
    {
        m[4]=0;
    }
    if((a+1)>=0 && (a+1)<8)
    {
        if((b+2)>=0 && (b+2)<8)
        {
            m[5]=s[a+1][b+2];
        }
        else
        {
            m[5]=0;
        }
    }
    else
    {
        m[5]=0;
    }
    if((a+2)>=0 && (a+2)<8)
    {
        if((b-1)>=0 && (b-1)<8)
        {
            m[6]=s[a+2][b-1];
        }
        else
        {
            m[6]=0;
        }
    }
    else
    {
        m[6]=0;
    }
    if((a+2)>=0 && (a+2)<8)
    {
        if((b+1)>=0 && (b+1)<8)
        {
            m[7]=s[a+2][b+1];
        }
        else
        {
            m[7]=0;
        }
    }
    else
    {
        m[7]=0;
    }
    printf("Opponent king Posintion ");
    scanf("%d %d",&a,&b);

    a=a-1;
    b=b-1;

    for(i=-1;i<=1;i++)
    {
        if((a-1)>=0 && (a-1)<8 && (b+i)>=0 && (b+i)<8)
        {
            k1[i+1]=s[a-1][b+i];
        }
        else
        {
            k1[i+1]=0;
        }
    }
    for(i=-1;i<=1;i++)
    {
        if((a)>=0 && (a)<8 && (b+i)>=0 && (b+i)<8)
        {
            k1[i+4]=s[a][b+i];
        }
        else
        {
            k1[i+4]=0;
        }
    }
    for(i=-1;i<=1;i++)
    {
        if((a+1)>=0 && (a+1)<8 && (b+i)>=0 && (b+i)<8)
        {
            k1[i+7]=s[a+1][b+i];
        }
        else
        {
            k1[i+7]=0;
        }
    }
    printf("Opponent bishop position ");
    scanf("%d %d",&a,&b);

    a=a-1;
    b=b-1;

    for(i=0;i<=7;i++)
    {
        if((a+i)>=0 && (a+i)<8 && (b+i)>=0 && (b+i)<8)
        {
            p[i]=s[a+i][b+i];
        }
        else
        {
            p[i]=0;
        }
        if((a-i)>=0 && (a-i)<8 && (b-i)>=0 && (b-i)<8)
        {
            p[i+7]=s[a-i][b-i];
        }
        else
        {
            p[i+7]=0;
        }
        if((a+i)>=0 && (a+i)<8 && (b-i)>=0 && (b-i)<8)
        {
            p[i+14]=s[a+i][b-i];
        }
        else
        {
            p[i+14]=0;
        }
        if((a-i)>=0 && (a-i)<8 && (b+i)>=0 && (b+i)<8)
        {
            p[i+21]=s[a-i][b+i];
        }
        else
        {
            p[i+21]=0;
        }
    }
    printf("Your king position ");
    scanf("%d %d",&a,&b);
    a=a-1;
    b=b-1;

    for(i=-1;i<=1;i++)
    {
        if((a-1)>=0 && (a-1)<8 && (b+i)>=0 && (b+i)<8)
        {
            k2[i+1]=s[a-1][b+i];
        }
        else
        {
            k2[i+1]=0;
        }
    }
    for(i=-1;i<=1;i++)
    {
        if((a)>=0 && (a)<8 && (b+i)>=0 && (b+i)<8)
        {
            k2[i+4]=s[a][b+i];
        }
        else
        {
            k2[i+4]=0;
        }
    }
    for(i=-1;i<=1;i++)
    {
        if((a+1)>=0 && (a+1)<8 && (b+i)>=0 && (b+i)<8)
        {
            k2[i+7]=s[a+1][b+i];
        }
        else
        {
            k2[i+7]=0;
        }
    }

    for(i=0;i<9;i++)
    {
        for(j=0;j<8;j++)
        {
            if(k2[i]==m[j])
            {
                k2[i]=0;
            }
        }
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<28;j++)
        {
            if(k2[i]==p[j])
            {
                k2[i]=0;
            }
        }
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(k2[i]==k1[j])
            {
                k2[i]=0;
            }
        }
    }
    for(i=0;i<9;i++)
    {
        sum=sum+k2[i];
    }
    if(sum==0)
    {
        printf("\n\n\tCHECKMATE !!!\n\n");
    }
    else
    {
        printf("\n\n\tNOT CHECKMATE !!!\n\n");
    }
    printf("\nenter 1 to check again\n");
    int check;
	scanf("%d",&check);
    if(check==1)
    {
    	goto jump;
	}
    return 0;
}
