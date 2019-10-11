//
//  ControlFlowOperators.c
//  MidTermTest2
//
//  Created by Vestal, Gwendolyn on 10/4/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.


#include "testqs.h"
int control(int num) {
    for (int x = 0; x < 10; x++) {
        num +=x;

    }
    return num;
}
//  our intial fuction will, for an initial input of 'x' add 0, then add 1, then add 2 ect... then add 9. It will then return an output of 'num'. (Gwen Vestal)
// Our second fuction is the mulitple choice question where we print the code for our first function for the reader to see, then call on the first function's code for the answers. (Joseph L)
void controlflowoperators(){
    printf("int control(int num) {\n");
    printf ("   for (int x = 0; x < 10; x++) {\n");
    printf ("       num +=x;\n");
    printf ("   }\n");
    printf ("   return num;\n");
    printf ("}\n");
    char ans;
    printf("What would control(7) return?\n");
    printf("a:%d\nb:%d\nc:%d\nd:%d\n", control(7), control(5), control(10), control(8));
    while ((ans = getchar()) != '\n');
    ans = getchar();
    switch (ans) { //this checks if the answer is correct, and if it is wrong it outputs why that answer is wrong (Alex T)
        case 'a':
        case 'A':
            printf("Correct!\n");
            break;
        case 'b':
        case 'B':
            printf("Incorrect, this is the answer to control(5)\n");
            break;
        case 'c':
        case 'C':
            printf("Incorrect, this is the answer to control(10)\n");
            break;
        case 'd':
        case 'D':
            printf("Incorrect, this is the answer to control(8)\n");
            break;
    }
}
