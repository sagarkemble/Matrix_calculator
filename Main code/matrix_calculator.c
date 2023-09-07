#include<stdio.h>
#include<stdlib.h>
//decleration of function
void clear(){
    system("cls");
    return;
}
void addition_of_matrix();
void subtraction_of_matrix();
void scalar_multiplication_of_matrix();
void multiplication_of_matrix();
void determinant_of_matrix();
void adjoint_of_matrix();
void inverse_of_matrix();
void traspose_of_matrix();
void cofactor_of_matrix();
void name(){
    printf("-----------A CODE BY SAGAR KEMBLE-----------");
    return;
}
int main(){
    int input;
    printf("------------------MATRIX CALCULATOR------------------\n");
    printf("PRESS FOLLOWING BUTTONS TO FIND\n");
    printf("1 FOR ADDITION OF MATRIX\n");
    printf("2 FOR SUBTRACTION OF MATRIX\n");
    printf("3 FOR SCALAR MULTIPLICATION OF MATRIX\n");
    printf("4 FOR MULTIPLICATION OF MATRIX\n");
    printf("5 FOR DETERMINANT OF MATRIX\n");
    printf("6 FOR CO FACTOR OF MATRIX\n");
    printf("7 FOR ADJOINT OF MATRIX\n");
    printf("8 FOR INVERSE OF MATRIX\n");
    printf("9 FOR TRANSPOSE OF MATRIX\n");
    scanf("%d",&input);
    getchar();
    if (input>9)
    {
        clear();
        printf("WRONG DATA ENTERED\n");
        name();
        return 0;
    }
    
    switch (input)
    {
    case 1 :
        addition_of_matrix();
        break;
    case 2 :
        subtraction_of_matrix();
        break;
    case 3:
        scalar_multiplication_of_matrix();
        break;
    case 4:
        multiplication_of_matrix();
        break;
    case 5:
        determinant_of_matrix();
        break;
    case 6:
        cofactor_of_matrix();
        break;
    case 7:
        adjoint_of_matrix();
        break;
    case 8:
        inverse_of_matrix();
        break;
    case 9:
        traspose_of_matrix();
        break;
    }



    return 0;
}
void addition_of_matrix(){
    clear();
    int nfr;//number of row
    int nfc;//number of coloum


    printf("THIS CODE TAKES 2 MATRICES/ARRAY FROM USER AND ADDS THE MATRICES\n");
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
    int add_arr[nfr][nfc];

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


    printf("PRESS ENTER TO ENTER 2nd MATRIX/ARRAY\n");
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


//addition

        for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc; j++)
        {
            add_arr[i][j]=arr[i][j]+arr2[i][j];
            
        }
        
    }






//out of both arr
    printf("INPUT ARRAY/MATRIX 1ST IS\n");
    for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc; j++)
        {
            
            printf("%d    ",arr[i][j]);
            
        }
        printf("\n");
    }
    printf("INPUT ARRAY/MATRIX  2nd IS\n");
    for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc; j++)
        {
            
            printf("%d    ",arr2[i][j]);
            
        }
        printf("\n");
    }
        printf("ADDTION OF 2 MATRIX/ARRAY IS\n");
    for (int  i = 0; i < nfr; i++)
    {
        for (int  j = 0; j < nfc; j++)
        {
            
            printf("%d    ",add_arr[i][j]);
            
        }
        printf("\n");
    }
    name();

    return;


}
void subtraction_of_matrix(){
    clear();
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
    name();

    return;

}
void scalar_multiplication_of_matrix(){
    clear();
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

    name();
    return ;


}
void multiplication_of_matrix(){
    clear();
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
        return ;
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






    name();
    return ;   
}
void determinant_of_matrix(){
    clear();
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
        return ;
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

    printf("DETERMINANT OF ENTERED MATRIX IS %d\n",determinant);
    name();
    return ;


}
void adjoint_of_matrix(){
    clear();
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
    name();
    return;
}
void inverse_of_matrix(){
    clear();
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
    name();
    return ;
}
void traspose_of_matrix(){
    clear();
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
    name();
    return ;


}
void cofactor_of_matrix(){
    clear();
    int matrix;
    printf("THIS CODE TAKES VALUES IN 3X3 MATRIX AS INPUT AND THEN FINDS THE CO FACTOR \n"); 
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
    printf("CO FACTOR MATRIX IS \n");
        for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            printf("%d  ",cofactor[i][j]);
        }
        printf("\n");
    }
    name();
    return;


}
