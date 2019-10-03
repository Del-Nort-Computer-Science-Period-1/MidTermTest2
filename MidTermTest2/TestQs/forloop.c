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


int forloopQ(char *message)
{
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
            break;
        case 'B':
        case 'b':
            printf ("B: forloop(%d)=%d\n", 14, forloop(14));
            printf("Incorrect Answer\n") ;
            break;
        case 'c':
        case 'C':
            printf ("C: forloop(%d)=%d\n", 15, forloop(15));
            printf("Incorrect Answer\n") ;
            break;
        case 'd':
        case 'D':
            printf ("D: forloop(%d)=%d\n", 19, forloop(19));
            printf("Incorrect Answer\n") ;
            break;
            
    }
    sprintf(message, "Param %d, Result %d", 13, forloop(13));
    printf("%s", message);
    
    return 1;
}

