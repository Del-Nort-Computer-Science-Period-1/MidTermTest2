//
//  conversion.c
//  MidTermTest2
//
//  Created by Ravula, Neeharika on 10/7/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//

#include "testqs.h"

int conversion(float val1, float val2)
{
    int result = (int) val1 / (int) val2;
    return result;
}

int conversionQ(char *message)
{
    char answer1;
    printf("----------------------------------------\n");
    
    fputs (
           "int conversion(float val1, float val2)\n"
           "{\n"
           "\tint result = (int) val1 / (int) val2;\n"
           "\treturn result;\n"
           "}\n",
           stdout);
    
    printf("What is the integer output of 24.5/7.2?\n");
    printf("----------------------------------------\n");
    printf("[A] %d\n[B] %d\n[C] %d\n[D] %d\n", conversion(24.5, 7.2), conversion(25.9, 5.1), conversion(27.9, 6.3), conversion(40.3, 5.3));
    while ((answer1 = getchar()) != '\n');
    answer1 = getchar();
    switch (answer1) {
        case 'a':
        case 'A':
            printf ("A: conversion(%f, %f)=%d\n", 24.5, 7.2, conversion(24.5, 7.2));
            break;
        case 'B':
        case 'b':
            printf ("B: conversion(%f, %f)=%d\n", 25.9, 5.1, conversion(25.9, 5.1));
            break;
        case 'c':
        case 'C':
            printf ("C: conversion(%f, %f)=%d\n", 27.9, 6.3, conversion(27.9, 6.3));
            break;
        case 'd':
        case 'D':
            printf ("D: conversion(%f, %f)=%d\n", 40.3, 5.3, conversion(40.3, 5.3));
            break;
            
    }
    sprintf(message, "Params %f, %f, Result: %d", 24.5, 7.2, conversion(24.5, 7.2));
    printf("%s", message);
    
    return 1;
}


