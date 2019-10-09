//
//  ideqs.c
//  MidTermTest2
//
//  Created by Taha, Nick on 10/8/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//

#include "testqs.h"
int idefun(int num1, int num2)
{
    int ans = 5;
    //sub1
    if ((num1 < 10) && (num2 < 5))
        ans = num1 - num2;
    //sub 2
    else if ((num1 == 5) && (num2 < 10))
        ans = num2 - num1;
    //general
    else
        ans = num1 + num2;
    return ans;
}


int ideqs(char *message)
{
    char answer1;
    printf("----------------------------------------\n");
    fputs (
           "int ifelseControl(int num1, int num2)\n"
           "{\n"
           "\tint result = 5;\n"
           "\tif ((num1 < 10) && (num2 < 5))\n"
           "\t\tresult = num1 - num2;\n"
           "\telse if ((num1 == 5) && (num2 < 10))\n"
           "\t\tresult = num2 - num1;\n"
           "\telse\n"
           "\t\tresult = num1 + num2;\n"
           "\treturn result;\n"
           "}\n",
           stdout);
    
    printf("What is returned by the call idefun(8, 10)?\n");
    printf("----------------------------------------\n");
    printf("[A] %d\n[B] %d\n[C] %d\n[D] %d\n", idefun(2, 13), idefun(8, 10), idefun(1,25), idefun(4,1));


    

return 0;
}
