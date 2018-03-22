/* 
* C program to show the solution of Tower of Hanoi problem using recursive method.
* Author : Raman Pandey
* Date : 07/15/2016
* Ref : Data Structure using c and c++, chapter3  , page 145
*/

#include<stdio.h>
#include<conio.h>
void towers(int, char, char, char);
int main()
{
    int n;
    printf("Enter number of disk:\n");
    scanf("%d",&n);
    towers(n,'A','C','B');
    getch();
    return 0;
}                           /*end of main function.*/

void towers(int n, char frompeg, char topeg, char auxpeg)

{
    if(n==1)
    {
        printf("\nmove disk 1 from peg %c to peg %c",frompeg,topeg);
        return;
    }
    towers(n-1,frompeg,auxpeg,topeg);
    printf("\nmove disk %d from peg %c to peg %c",n,frompeg,topeg);
    towers(n-1,auxpeg,topeg,frompeg);
}                                      /*end of towers function*/
