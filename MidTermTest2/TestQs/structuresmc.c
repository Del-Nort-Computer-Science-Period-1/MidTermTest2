//
//  TrueFalseQ.c
//
//
//  Created by Sutherland, Zachary on 10/3/19.
//


/* int powerrangers[7]= {2,8,11,13,18,10099354};
 const int SIZE = 7;
 int powerrangers[SIZE];
 int i;
 for (i = 0; i < SIZE; i++)
 {
 powerrangers[i] = i;
 printf("powerrangers[%d] = %d\n",i,powerrangers[i]);
 */
#include "testqs.h"
#define SIZE 6
int structuresmc()
{
    int i;
    int powerrangers[SIZE] = {2,8,11,13,18,10099354};
    
    int* pa = powerrangers;
    
    for(i = 0; i < SIZE; i++)
        
        printf("a[%d] = %d\n",i,*pa);
    pa++;
    return 0;
    
}
int truefalseQ(char *message) {
    char answer1;
    printf("----------------------------------------\n");
    fputs (
           "int powerrangers[SIZE] = {2,8,11,13,18,10099354};\n"
           "int i;"
           
           "int* pa = powerrangers;\n"
           
           "for(i = 0; i < SIZE; i++)\n"
           "{\n"
           "printf(\"a[\%d] = \%d\n\",i,*pa);\n"
           "pa++;\n"
           "}\n",
           stdout);
    
    printf("What is the fourth element in this array?");
    printf("----------------------------------------\n");
    printf("Enter A, B, C, or D");
  
    while ((answer1 = getchar()) == '\n');
    switch (answer1) {
        case 'a':
        case 'A':
            printf("Sorry, that is incorrect.");
            break;
        case 'b':
        case 'B':
            printf("Sorry, that is incorrect.");
            break;
        case 'c':
        case 'C':
            printf("Sorry, that is incorrect.");
        case 'd':
        case 'D':
            printf("Yes, that is correct!");
    }
    return 0;
}

