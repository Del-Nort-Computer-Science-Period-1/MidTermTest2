//
//  Project Managers.c
//  MidTermTest2
//
//  Created by Maheshwari, Navodit on 10/4/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//

#include <stdio.h>
int projMgrs(void)
{
    
    int count=0;
    for(int loop=0;loop<1;){
        printf("Which number would call the first character in a array\n");
        printf("A. 0\nB. 1\nC. 2\nD. Array1\n");
        char ans;
    scanf("%c", &ans);
    scanf("%c", &ans);
    switch (ans) {
        case 'a':
        case 'A':
            printf("Correct!\n");
            loop++;
            break;
       
        case 'b':
        case 'B':
            printf("Incorrect: \n");
            loop++;
             break;
       
        case 'c':
        case 'C':;
            printf("Incorrect: \n");
             loop++;
            break;
        
        case 'd':
        case 'D':
            printf("Incorrect: \n");
             loop++;
            break;
           
        default:
            puts("This answer is invalid. Try Again.\n");
            count++;
            printf("You have put something random %d times\n", count);
            break;
    }
    }
    return 0;
}