#include<stdio.h>
#include <stdlib.h>


int main(){
    int i,j,k,a[3][3];
    char temp;
    int magic_squares[8][3][3] = {
        {
            {8, 1, 6},
            {3, 5, 7},
            {4, 9, 2}
        },
        {
            {6, 1, 8},
            {7, 5, 3},
            {2, 9, 4}
        },
        {
            {4, 9, 2},
            {3, 5, 7},
            {8, 1, 6}
        },
        {
            {2, 9, 4},
            {7, 5, 3},
            {6, 1, 8}
        },
        {
            {8, 3, 4},
            {1, 5, 9},
            {6, 7, 2}
        },
        {
            {4, 3, 8},
            {9, 5, 1},
            {2, 7, 6}
        },
        {
            {6, 7, 2},
            {1, 5, 9},
            {8, 3, 4}
        },
        {
            {2, 7, 6},
            {9, 5, 1},
            {4, 3, 8}
        }
    };


    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d%c",&a[i][j],&temp);
        }
    }
    
    int dist = 0;
    int minDist = 0;
    for(i=0;i<8;i++){
        dist = 0;
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                dist+=abs(magic_squares[i][j][k] - a[j][k]);
            }

        }
        if(minDist == 0 || dist < minDist){
            minDist = dist;
        }

    }
    printf("%d",minDist);
    
}