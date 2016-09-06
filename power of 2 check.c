/* ***********************
this peice of code tests if a no.
is power of 2 or not
**************************
example :-
input = 8 in binary 1000
input-1   in binary 0111
input anded with one number less than input
will always evaluate to 0 */

#include<stdio.h>
int main ()
{
    printf ("enter the no. to check \n");
    int in;
    scanf ("%d",&in);

    // main part starts
    //if the number is negative taking 2's complimentof the no.
    /*because negative no. are stored as 2's of pesitive no.
    taking 2'complement of a negative number converts it to its
    equivalent +ve number */
    if (in<0) in = ~in+1;
    if ((in & (in-1)) == 0 )
        printf ("yes");

    else
        printf ("no");
return 0;

}
