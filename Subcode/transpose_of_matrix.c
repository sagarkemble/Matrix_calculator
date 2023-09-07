#include <stdio.h>
#include <stdlib.h>
void clear(){
    system("cls");
    return;
}
int main(){
    int nfr;//number of row
    int nfc;//number of coloum
    printf("THIS CODE TAKES A MATRIX AND TRANSPOSES IT\n");
    printf("PRESS ENTER TO CONTINUE\n");
    getchar();
    clear();
    printf("ENTER NUMBER OF ROW \n");
    scanf("%d",&nfr);
    clear();    
    printf("ENTER NUMBER OF COLOUM\n");
    scanf("%d",&nfc);   
    clear();    
    int arr1[nfr][nfc];
    int transposed_arr[nfc][nfr];
    for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc; j++)
        {
            printf("ENTER THE ELEMENT IN %d ROW %d COLOUM\n",i+1,j+1);
            scanf("%d",&arr1[i][j]);
            clear();
        }
        
    }
clear();    
    

    printf("INPUT ARRAY/MATRIX IS\n");
    for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc; j++)
        {
            
            printf("%d    ",arr1[i][j]);
            
        }
        printf("\n");
    }

    printf("TRANSPOSED ARRAY/MATRIX IS\n");
    for (int  i = 0; i < nfc; i++)
    {
        for (int  j = 0; j < nfr; j++)
        {
            
            printf("%d    ",arr1[j][i]);
            
        }
        printf("\n");
    }
    return 0;
}
