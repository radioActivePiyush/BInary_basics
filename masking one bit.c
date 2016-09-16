/*******************************
this piece of code can extract any bit from the
input binary at nth position
******************************** */
#include <stdio.h>
int main ()
{
    printf ("enter a no. \n");
    int in;
    scanf ("%d",&in);
    printf ("enter the bit position required \n");
    printf ("the position strats form 0\n");
    int pos;
    scanf ("%d",&pos);
    // main part starts
    int mask = 1<< pos ; //setting the mask to required position
    int res = mask & in; //applying the mask
    int result = res >> pos; // setting the result of applied mask back to units place units
    printf ("%d",result);

    /**********************************
    input = 3 (binary = 0011)      => int in = 3
    required binary position = 1   => int pos = 1
    setting the mask 0001 to 0010  => int mask = 2
    appling the mask 0010 & 0011   => int res = 2

    setting the result to units
    place => from 0010 to 0001     =>int result = 1
    ***************************************************/
    return 0;

}

