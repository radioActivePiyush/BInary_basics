/* ***********************
this peice of code tests if a no.
is power of 2 or not
**************************
example :-
input = 8 in binary 1000
input-1   in binary 0111
input anded with one number less than input
will always evaluate to 0 */

/*effeciency of this logic is very high
because binary calculations are very fast */

#include<stdio.h>
int main (){
printf ("enter the no. to check \n");
int in;
scanf ("%d",&in);

if ((in & (in-1)) == 0 ) // this is main condition
    printf ("yes");

else
    printf ("no");

 }
