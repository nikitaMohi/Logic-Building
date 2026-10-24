/*
    step 1:  understand the problem statement
    step 2:  write the algoritm
    step 3:  Decide the programming language
    step 4:  write the program
    step 5:  Test the program
    
*/

////////////////////////////////////////////////////
//
// step 1 : understand the problem statemen 
//          user is going to enter any 2 integers
//          And we have to perform Addiotion
///////////////////////////////////////////////////

////////////////////////////////////////////////////
//  Step 2 :   Write the program
/*  
    Sart  
        Accept first number as No1
        Accept sccond  number as no2
        Create the variable as And to stroe the result
        perform the addition and store into the Ans
        Display the result from Ans
    stop    

*/

///////////////////////////////////////////////////////
//
//  Step 3 : Decide the programming language 
//            We select the C programming
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Step 4 :  Write the program 
//         
///////////////////////////////////////////////////////

#include<stdio.h>

int main()
{  
    int iValue1 = 0 , iValue2 = 0 , iResult  = 0;

    printf("Enter the first Number :\n");
    scanf("%d",&iValue1);

    printf("Enter the second Number :\n");
    scanf("%d",&iValue2);

    iResult = iValue1+iValue2;              // Business Logic
    
    printf(" Additon is : %d\n",iResult);


    return 0;
}