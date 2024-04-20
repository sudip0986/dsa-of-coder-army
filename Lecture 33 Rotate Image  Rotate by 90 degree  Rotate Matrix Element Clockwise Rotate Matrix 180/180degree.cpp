#include <iostream>
using namespace std;
int main()
{
    int matrix[3][3]
    =
    {
        1,2,3,
        4,5,6,
        7,8,9
    };
   // reverse coloum wise
    for(int i=0; i<3; i++)
    {
        int start=0 , end=2;
        while(start<end)
        {
            swap(matrix[start][i],matrix[end][i]);
            start++,end--;
        }
    }

   // row wise reverse
   for(int i=0; i<3; i++)
    {
        int start=0 , end=2;
        while(start<end)
        {
            swap(matrix[i][start],matrix[i][end]);
            start++,end--;
        }
    }

         // display 
     for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
    }
   
}