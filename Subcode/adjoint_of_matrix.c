#include <stdio.h>
#include <stdlib.h>
void clear(){
    system("cls");
}
int main(){
    int matrix;
    printf("THIS CODE TAKES VALUES IN 3X3 MATRIX AS INPUT AND THEN FINDS THE ADJOINT \n"); 
    printf("PRESS ENTER TO CONTINUE\n");
    getchar();
    clear();
    int arr[3][3];
    
    int cofactor[3][3];

    for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            printf("ENTER THE ELEMENT IN %d ROW %d COLOUM\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
            clear();
        }
        
    }
    clear();
    //1st row
    cofactor[0][0]=   1 * ((arr[1][1]*arr[2][2])-(arr[1][2]*arr[2][1]));
    cofactor[0][1]=  -1* ((arr[1][0]*arr[2][2])-(arr[1][2]*arr[2][0]));
    cofactor[0][2]=   1* ((arr[1][0]*arr[2][1])-(arr[1][1]*arr[2][0]));

    //2ND ROW
    cofactor[1][0]=  -1 * ((arr[0][1]*arr[2][2])-(arr[0][2]*arr[2][1]));
    cofactor[1][1]=  1* ((arr[0][0]*arr[2][2])-(arr[0][2]*arr[2][0]));
    cofactor[1][2]=  -1* ((arr[0][0]*arr[2][1])-(arr[0][1]*arr[2][0]));

    //3ROW
    cofactor[2][0]=  1 * ((arr[0][1]*arr[1][2])-(arr[0][2]*arr[1][1]));
    cofactor[2][1]=  -1* ((arr[0][0]*arr[1][2])-(arr[0][2]*arr[1][0]));
    cofactor[2][2]=  1* ((arr[0][0]*arr[1][1])-(arr[0][1]*arr[1][0]));




printf("INPUT MATRIX IS \n");
        for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            printf("%d    ",arr[i][j]);
            
        }
        printf("\n");
    }
    printf("ADJOINT MATRIX IS \n");
        for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            printf("%d  ",cofactor[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}