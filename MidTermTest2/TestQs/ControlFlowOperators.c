//
//  ControlFlowOperators.c
//  MidTermTest2
//
//  Created by Vestal, Gwendolyn on 10/4/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//

#include "testqs.h"

void controlflowoperators(){
    printf("int control(int num)\n");
    printf ("for (int x = 0; x < 10; x++\n) {");
    printf (")    num +=x;\n");
    printf ("}\n");
    printf ("return num;\n");
    char ans;
    printf("What would control(7) return?\n");
    printf("a:52\nb:33\nc:51\nd:53\n");
    while ((ans = getchar()) != '\n');
    ans = getchar();
    switch (ans) {
        case 'a':
        case 'A':
            printf("Correct!\n");
            break;
        case 'b':
        case 'B':
            printf("Incorrect: The loop will increment the value of num by 1, then 2, then 3, and so on...\n");
            break;
        case 'c':
        case 'C':
            printf("Incorrect: The loop will increment the value of num by 1, then 2, then 3, and so on...\n");
            break;
        case 'd':
        case 'D':
            printf("Incorrect: The loop will increment the value of num by 1, then 2, then 3, and so on...\n");
            break;
    }
}
