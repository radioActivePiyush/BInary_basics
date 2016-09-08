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
    // for positive numbers
    if (in >= 0 )
    {
        while(in > 0)
        {
            if(in&1 == 1)count++;
            in = in>>1;
        }
    }
    //for negative numbers
    else
    {
        int mask = 1;
        int res,ans,i;
        for (i =0; mask !=0; i++ )
        {

            res = in&mask;
            ans = res >>i;
            if (ans== 1)count++;
            mask = mask<<1;
        }
        count++;//increament for signed bit
    }
// main part ends
    printf("%d",count);
}
