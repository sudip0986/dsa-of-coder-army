#include <stdio.h>
int main()
{
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};        // create  2d array by c

     arr[0][0]=50;             // updation 


    for(int i=0;i<4;i++)
    {
        for(int j=0; j<3; j++)
        {
            int x= arr[i][j];
            printf(" %d",x);
        }
        printf("\n");
    }
}