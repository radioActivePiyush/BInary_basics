/* ****************
this peice of code calculates the no. of bit required to
be set to store a number in memory */

#include <stdio.h>
int main(){
    printf ("enter any number\n");
    int input ;
    scanf("%d",&input);
    int count =0 ;

  //********** main part starts here

    while (input != 0){
       count ++;
       input = input>>1;
    }
    //main part ends
    printf ("%d",count);


}
