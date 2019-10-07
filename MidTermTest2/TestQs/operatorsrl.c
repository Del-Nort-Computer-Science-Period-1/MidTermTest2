//
//  operatorsrl.c
//  MidTermTest2
//
//  Created by Bulkin, Lola on 10/4/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//

#include "testqs.h"
#include <stdio.h>
char answerOne;
int operatorsrl ()
{
    printf("What is the output of this code:");
    printf("int i;\nfor (i = 1; i <= 10; i++) {\n}\nprintf(\"%%d\", i);\n\n");
    printf("A: 11\nB: 1\nC: 10\nD: 9\n");
    scanf("%c", &answerOne);
    scanf("%c", &answerOne);
    if (answerOne == 'a' || answerOne == 'A') {
        printf("Correct!\n");
    } else if (answerOne == 'b' || answerOne == 'B'){
        printf("Incorrect: The loop will add one each time it goes through, and the loop will run until \"i\" is greater than 10.\n");
    } else if (answerOne == 'c' || answerOne == 'C') {
        printf("Incorrect: The loop will break only if \"i\" is greater that 10 which will be 11.\n");
    } else if (answerOne == 'd' || answerOne == 'D') {
        printf("Incorrect: The loop has <= which means that the loop will break if \"i\" is greater than 10 not less than.\n");
    }
    
    return 1;
}

