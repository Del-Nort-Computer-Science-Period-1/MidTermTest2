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
int powerrangers(int i)
{
    int powerrangers[SIZE];
    int list[6] = {2,8,11,13,18,10099354};
    
    return list[i];
    
}

int structuresmc(char *message) {
    char answer1;
    printf("----------------------------------------\n");
    fputs (
           "{\n"
           "int powerrangers[SIZE] = {2,8,11,13,18,10099354};\n"
           "return list[i];\n"
           "}\n",
           stdout);
    
    printf("What is returned when i=3 in this code?\n");
    printf("----------------------------------------\n");
    printf("Enter A, B, C, or D");
    printf("                                                                            \n");
    printf("[A] %d\n[B] %d\n[C] %d\n[D] %d\n", powerrangers(1), powerrangers(2), powerrangers(3), powerrangers(4));
    printf("-----------------------------------------\n");
    
  
    while ((answer1 = getchar()) == '\n');
    //answer1 = getchar();
    switch (answer1) {
        case 'a':
        case 'A':
            //printf ("A: struc(%d)=%d\n", powerrangers(1));
            printf("Sorry, that is incorrect.\n");
            break;
        case 'b':
        case 'B':
            //printf ("B: struc(%d)=%d\n", powerrangers(2));
            printf("Sorry, that is incorrect.\n");
            break;
        case 'c':
        case 'C':
           // printf ("C: struc(%d)=%d\n", powerrangers(3));
            printf("Yes, that is correct!\n");
            break;
        case 'd':
        case 'D':
            //printf ("D: struc(%d)=%d\n", powerrangers(4));
            printf("Sorry, that is incorrect.\n");
    }
    return 0;
}

