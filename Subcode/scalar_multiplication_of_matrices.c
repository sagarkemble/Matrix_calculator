#include <stdio.h>
#include <stdlib.h>
void clear(){
    system("cls");
    return;
}
int main(){
    
    int nfr;//number of row
    int nfc;//number of coloum

    int scaler;

    printf("THIS CODE TAKES A MATRIX/ARRAY FROM INPUT AND MULTIPLYS THE MATRIX WITH A NUMBER PROVIDED BY USER\n");
    printf("PRESS ENTER TO CONTINUE\n");
    getchar();
    clear();
    printf("ENTER NUMBER OF ROW \n");
    scanf("%d",&nfr);
    clear();
    printf("ENTER NUMBER OF COLOUM\n");
    scanf("%d",&nfc);
    clear();   

    int result_arr[nfr][nfc];
    int arr[nfr][nfc];
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

    
    printf("ENTER THE SCALER OR NUMBER YOU WANT TO MULTIPLY THE MATRIX WITH\n");
    scanf("%d",&scaler);
    getchar();//clears the \n from bufffer

    clear();



//MULTIPLICATION

        for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc; j++)
        {
            result_arr[i][j]=arr[i][j]*scaler;
            
        }
        
    }






//out of both arr
    printf("INPUT ARRAY/MATRIX IS\n");
    for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc; j++)
        {
            
            printf("%d    ",arr[i][j]);
            
        }
        printf("\n");
    }
    printf("SCALER IS %d\n",scaler);
    
        printf("SCALER MULTIPLICATION OF MATRIX IS\n");
    for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc; j++)
        {
            
            printf("%d    ",result_arr[i][j]);
            
        }
        printf("\n");
    }


    return 0;
}