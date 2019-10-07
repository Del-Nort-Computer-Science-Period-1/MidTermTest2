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
    char ans;
    printf("Which number would call the first character in a array\n");
    printf("A. 0\nB. 1\nC. 2\nD. Array1\n");
    
    scanf("%c", &ans);
    switch (ans) {
        case 'a':
        case 'A':
            printf("Correct!\n");
        case 'b':
        case 'B':
            printf("Incorrect: \n");
        case 'c':
        case 'C':
            printf("Incorrect: \n");
        case 'd':
        case 'D':
            printf("Incorrect: \n");
    }
    return 0;
}
