//
//  projqs.c
//  MidTermTest2
//
//  Created by Szeto, Colin on 10/3/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//

#include "testqs.h"

/* int ifelseControl(int num1, int num2) // bellow is inting hte formatting that will allow for dynamic editng of the code rather that a laborus proccess of chainging output, and the question
{
    int result = 4;
    if ((num1 < 5) && (num2 < 5))
        result = num1 - num2;
    else if ((num1 == 2) && (num2 < 2))
        result = num2 - num1;
    else
        result = num1 + num2;
    return result;
}


int ifelseQ(char *message)
{
    char answer1;
    printf("----------------------------------------\n"); // this is the ui that the code will be using
    fputs (
           "int ifelseControl(int num1, int num2)\n"
           "{\n"
           "\tint result = 4;\n"
           "\tif ((num1 < 5) && (num2 < 5))\n"
           "\t\tresult = num1 - num2;\n"
           "\telse if ((num1 == 2) && (num2 < 2))\n"
           "\t\tresult = num2 - num1;\n"
           "\telse\n"
           "\t\tresult = num1 + num2;\n"
           "\treturn result;\n"
           "}\n",
           stdout);
    
    printf("What is returned by the call ifelseControl(2, 13)?\n");
    printf("----------------------------------------\n");
    printf("[A] %d\n[B] %d\n[C] %d\n[D] %d\n", ifelseControl(2, 13), ifelseControl(3, 13), ifelseControl(2,14), ifelseControl(3,14));
    while ((answer1 = getchar()) != '\n');
    answer1 = getchar();
    switch (answer1) {
        case 'a':
        case 'A':
            printf ("A: forloop(%d)=%d\n", 13, ifelseControl(2,13));
            break;
        case 'B':
        case 'b':
            printf ("B: forloop(%d)=%d\n", 14, ifelseControl(3,13));
            break;
        case 'c':
        case 'C':
            printf ("C: forloop(%d)=%d\n", 15, ifelseControl(2,14));
            break;
        case 'd':
        case 'D':
            printf ("D: forloop(%d)=%d\n", 19, ifelseControl(3,14));
            break;
    }
    sprintf(message, "Params %d, %d, Result %d", 2, 13, ifelseControl(2, 13));
    printf("%s", message); //assigns the string to the message array
                            // the message array number is assigned when the scanf function occurs
                            // this allows for the code to print out the result unique to each question
    return 1;
}

*/

