#include <stdio.h>
#include <stdlib.h>
void clear(){
    system("cls");
    return;
}
int main(){
    
    int nfr;//number of row
    int nfc;//number of coloum

    printf("THIS CODE TAKES 2 MATRICES/ARRAY FROM USER AND SUBTRACTS THE MATRICES\n");
    printf("PRESS ENTER TO CONTINUE\n");
    getchar();
    clear();
    printf("ENTER NUMBER OF ROW \n");
    scanf("%d",&nfr);
    clear();
    printf("ENTER NUMBER OF COLOUM\n");
    scanf("%d",&nfc);
    clear();   

    int arr[nfr][nfc];
    int arr2[nfr][nfc];
    int sub_arr[nfr][nfc];

    //input of first matrix
    for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc; j++)
        {
            printf("ENTER THE ELEMENT IN %d ROW %d COLOUM\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
            clear();
        }
        
    }

    
    printf("PRESS ENTER TO ENTER 2nd MATRIX\n");
    getchar();//clears the \n from bufffer
    getchar();//for enter key
    clear();



//input of second matrix
        for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc; j++)
        {
            printf("ENTER THE ELEMENT IN %d ROW %d COLOUM\n",i+1,j+1);
            scanf("%d",&arr2[i][j]);
            clear();
        }
        
    }


//subtraction

        for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc; j++)
        {
            sub_arr[i][j]=arr[i][j]-arr2[i][j];
            
        }
        
    }






//outPUT of matries
    printf("INPUT ARRAY/MATRIX 1ST IS\n");
    for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc; j++)
        {
            
            printf("%d    ",arr[i][j]);
            
        }
        printf("\n");
    }
    printf("INPUT ARRAY/MATRIX 2nd IS\n");
    for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc; j++)
        {
            
            printf("%d    ",arr2[i][j]);
            
        }
        printf("\n");
    }
        printf("SUBTRACTION IF 2 MATRIX/ARRAY IS\n");
    for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc; j++)
        {
            
            printf("%d    ",sub_arr[i][j]);
            
        }
        printf("\n");
    }


    return 0;
}