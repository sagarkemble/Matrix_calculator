#include<stdio.h>
#include <stdlib.h>
void clear(){
    system("cls");
    return;
}
int main(){
    int nfr;//number of row  in 1st matrix
    int nfc;//number of coloum in 1st matrix
    int nfr2;//number of row in 2nd matrix
    int nfc2;//number of coloum in 2nd matrix







    ///input of matrices
    printf("THIS CODE TAKES 2 MATRICES AND MULTIPLY THEM\n");
    printf("PRESS ENTER TO CONTINUE\n");
    getchar();
    clear();
    printf("ENTER NUMBER OF ROW IN 1st MATRIX\n");
    scanf("%d",&nfr);
    clear();
    printf("ENTER NUMBER OF COLOUM IN 1st MATRIX\n");
    scanf("%d",&nfc);
    clear();
    printf("ENTER NUMBER OF ROW IN 2nd MATRIX\n");
    scanf("%d",&nfr2);
    clear();
    printf("ENTER NUMBER OF COLOUM IN 2nd MATRIX\n");
    scanf("%d",&nfc2);
    clear();
    


    //check of cloum is equal to row of 2nd matrix
    if (nfc!=nfr2)
    {
        printf("THE MULTIPLICAION IS NOT POSSIBLE \nCAUSE NUMBER OF ROW IS NOT EQUAL TO COLOUM \n");
        printf("PRESS ENTER TO EXIT\n");
        printf("A COSE BY SAGAR KEMBLE :)\n");
        getchar();
        getchar();
        return 0;
    }
    




    //decleration of array after inputng the nfr and nfc
    int arr1[nfr][nfc];
    int arr2[nfr2][nfc2];
    int multiplied_arr[nfr][nfc2];





    //input of matrix 1st
    for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc; j++)
        {
            printf("ENTER THE ELEMENT IN %d ROW %d COLOUM\n",i+1,j+1);
            scanf("%d",&arr1[i][j]);
            clear();
        }
        
    }




//input of 2nd matrixx
    printf("PRESS ENTER TO ENTER VALUE IN SECOND MATRIX\n");
    getchar();
    getchar();
    clear();

        for (int  i = 0; i < nfr2; i++)
    {
        for (int  j = 0; j < nfc2; j++)
        {
            printf("ENTER THE ELEMENT IN %d ROW %d COLOUM\n",i+1,j+1);
            scanf("%d",&arr2[i][j]);
            clear();
        }
        
    }




//MULTIPLICATION
for (int  i = 0; i < nfc; i++)
{
    for (size_t j = 0; j < nfc2; j++)
    {
        int add=0;//stores added data after multiplying the matrix
        for (int  k = 0; k   < nfr2; k++)
        {
            add=add+arr1[i][k]*arr2[k][j];
        }
        multiplied_arr[i][j]=add;
    }
    
}



//output 
printf("INPUT ARRAY/MATRIX 1ST IS\n");
    for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc; j++)
        {
            
            printf("%d    ",arr1[i][j]);
            
        }
        printf("\n");
    }
    printf("INPUT ARRAY/MATRIX  2nd IS\n");
    for (int  i = 0; i < nfr2; i++)
    {
        for (int  j = 0; j < nfc2; j++)
        {
            
            printf("%d    ",arr2[i][j]);
            
        }
        printf("\n");
    }
        printf("MULTIPLICATION OF 2 MATRIX/ARRAY IS\n");
    for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc2; j++)
        {
            
            printf("%d    ",multiplied_arr[i][j]);
            
        }
        printf("\n");
    }







 return 0;   
}

