#include <stdio.h>
#include <stdlib.h>
void clear(){
    system("cls");
}
int main(){
    int determinant;
    printf("THIS CODE TAKES VALUES IN 3X3 MATRIX AS INPUT AND THEN FINDS THE INVERSE MATRIX \n"); 
    printf("PRESS ENTER TO CONTINUE\n");
    getchar();
    clear();
    int arr[3][3];
    
    int cofactor[3][3];
    int adjoint[3][3];
    float inversed_matrix[3][3];

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
    //ADJOINT 



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


    for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            adjoint[j][i]=cofactor[i][j];
            
        }
        
    }


//DETERMINANT

 determinant=   arr[0][0] * ((arr[1][1]*arr[2][2])-(arr[1][2]*arr[2][1]))-
                arr[0][1] * ((arr[1][0]*arr[2][2])-(arr[1][2]*arr[2][0]))+
                arr[0][2] * ((arr[1][0]*arr[2][1])-(arr[1][1]*arr[2][0]));



//
for (int  i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        inversed_matrix[i][j]=(1.0/determinant)*adjoint[i][j];
    }
    
}





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
            printf("%d  ",adjoint[i][j]);
        }
        printf("\n");
    }
    printf("DETERMINANT IS %d\n",determinant);
    if (determinant==0)
    {
        printf("ANSWER IS UNDEFINED CAUSE AFTER DIVING 0 WITH MATRIX ELEMENT ANSWER WILL BE UNDEFINED\n");
    }
    else if (determinant!=0)
    {

    
    printf("INVERSED MATRIX IS \n");
        for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            printf("%.2f  ",inversed_matrix[i][j]);
        }
        printf("\n");
    }
    }   
    return 0;
}
