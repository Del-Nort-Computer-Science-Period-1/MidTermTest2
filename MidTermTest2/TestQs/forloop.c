//
//  loop.c
//  CMidTest
//
//  Created by John Mortensen on 10/2/19.
//  Copyright © 2019 T. All rights reserved.
//

#include "testqs.h"

int forloop(int val)
{
    for (int i = 2; i < 7; i++)
        if (( val + i) % 2 == 0)
            val += 3;
    return val;
}


int forloopQ(char *message) {
    int score = 0; //Defines score as a variable. The initial score is 0.
    char answer1;
    printf("----------------------------------------\n");
    fputs (
    "int forloop(int val)\n"
    "{\n"
    "\tfor (int i = 2; i < 7; i++)\n"
    "\t\tif (( val + i) % 2 == 0)\n"
    "\t\t\tval += 3;\n"
    "\treturn val;\n"
    "}\n",
           stdout);
    
    printf("What is returned by the call forloop(13)?\n");
    printf("----------------------------------------\n");
    printf("[A] %d\n[B] %d\n[C] %d\n[D] %d\n", forloop(13), forloop(14), forloop(15), forloop(19));
    while ((answer1 = getchar()) != '\n');
    answer1 = getchar();
    switch (answer1) {
        case 'a':
        case 'A':
            printf ("A: forloop(%d)=%d\n", 13, forloop(13));
            printf("Correct Answer\n") ;
            score += 1 ;
            // Score adds 1 if A is answered
            break;
        case 'B':
        case 'b':
            printf ("B: forloop(%d)=%d\n", 14, forloop(14));
            printf("Incorrect Answer\n") ;
            score += 0 ;
            // Score adds 0 if B is answered
            break;
        case 'c':
        case 'C':
            printf ("C: forloop(%d)=%d\n", 15, forloop(15));
            printf("Incorrect Answer\n") ;
            score += 0 ;
            // Score adds 0 if C is answered
            break;
        case 'd':
        case 'D':
            printf ("D: forloop(%d)=%d\n", 19, forloop(19));
            printf("Incorrect Answer\n") ;
            score += 0 ;
            // Score adds 0 if D is answered
            break;
            
    }
    if (score == 1) {
        sprintf(message, "1/1");
        // If score = 1 message 1/1 is print back
    }
    else {
        sprintf(message, "0/1");
        // If score = 0 message 0/1 is print back
    }
   
    return *message ;
}

