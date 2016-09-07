/* ******************************
this peice of code counts the no. of set bits in a number
*********************************/
#include <stdio.h>
int main ()
{
    printf ("enter the no. to check \n");
    int in;
    scanf ("%d",&in);
    int count = 0;
    // main part starts
    if (in >= 0 )
    {
        while(in > 0)
        {
            if(in&1 == 1)count++;
            in = in>>1;
        }
    }
    else
    {
        while(in < 0)
        {
            if(in&1 == 1)count++;
            in= in<<1;
        }
    }

    printf("%d",count);
}
