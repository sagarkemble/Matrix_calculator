#include <stdio.h>
#include <stdlib.h>
void clear(){
    system("cls");
    return;
}
int main(){
    int matrix;
    printf("THIS CODE TAKES 2X2/3X3 MATRIX AS INPUT AND FINDS THE DETERMINANT\n");
    printf("PRESS ENTER TO CONTINUE\n");
    getchar();
    clear();
    printf("PRESS 1 TO FIND DETERMINANT OF 3X3 MATRIX \n");
    printf("PRESS 2 TO FIND DETERMINANT OF 2X2 MATRIX\n");
    scanf("%d",&matrix);   
    clear();    
    int arr[3][3];
    int arr2[2][2];
    int nfcr;
    if (matrix==1)
    {
        nfcr=3;
    }
    else if (matrix==2)
    {
        nfcr=2;
    }
    else{
        printf("WRONG DATA ENTERED\n");
        printf("A CODE BY SAGAR :)\n");
        return 0;
    }
    
    
    int determinant;

    for (int  i = 0; i < nfcr; i++)
    {
        for (int  j = 0; j < nfcr; j++)
        {
            printf("ENTER THE ELEMENT IN %d ROW %d COLOUM\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
            clear(); 
        }
        
    }
    if (matrix==1)
    {
    
    determinant=arr[0][0] * ((arr[1][1]*arr[2][2])-(arr[1][2]*arr[2][1]))-
                arr[0][1] * ((arr[1][0]*arr[2][2])-(arr[1][2]*arr[2][0]))+
                arr[0][2] * ((arr[1][0]*arr[2][1])-(arr[1][1]*arr[2][0]));
    }
    else if (matrix==2)
    {
        determinant=(arr[0][0]*arr[1][1])-(arr[0][1]*arr[1][0]);
    }
    
printf("INPUT MATRIX IS \n");
        for (int  i = 0; i < nfcr; i++)
    {
        for (int  j = 0; j < nfcr; j++)
        {
            printf("%d    ",arr[i][j]);
            
        }
        printf("\n");
    }

    printf("DETERMINANT OF ENTERED MATRIX IS %d",determinant);
    
    return 0;
}