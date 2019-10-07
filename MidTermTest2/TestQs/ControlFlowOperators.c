//
//  ControlFlowOperators.c
//  MidTermTest2
//
//  Created by Vestal, Gwendolyn on 10/4/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//

#include "testqs.h"
int control(int num) {
    for (int x = 0; x < 10; x++) {
        num +=x;
    }
    return num;
}
void controlflowoperators(){
    printf("int control(int num) {\n");
    printf ("   for (int x = 0; x < 10; x++) {\n");
    printf ("       num +=x;\n");
    printf ("   }\n");
    printf ("   return num;\n");
    printf ("}\n");
    char ans;
    printf("What would control(7) return?\n");
    printf("a:52\nb:54\nc:51\nd:53\n");
    while ((ans = getchar()) != '\n');
    ans = getchar();
    switch (ans) {
        case 'a':
        case 'A':
            printf("Correct!%d\n", control(7));
            break;
        case 'b':
        case 'B':
            printf("Incorrect %d\n", control(9));
            break;
        case 'c':
        case 'C':
            printf("Incorrect %d\n", control(6));
            break;
        case 'd':
        case 'D':
            printf("Incorrect %d\n", control(8));
            break;
    }
}
