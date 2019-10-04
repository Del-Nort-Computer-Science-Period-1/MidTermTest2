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
    printf("What is the != operator?\n A: Not Equal\n B: Equal To\n C: Less Than or Equal To\n D: Greater Than or Equal To\n");
    scanf("%c", &answerOne);
    scanf("%c", &answerOne);
    if (answerOne == 'a' || answerOne == 'A') {
        printf("Correct!\n");
    } else if (answerOne == 'b' || answerOne == 'B'){
        printf("Incorrect: The exclamation point makes it not equal.\n");
    } else if (answerOne == 'c' || answerOne == 'C') {
        printf("Incorrect: The less than or equal to looks like <=.\n");
    } else if (answerOne == 'd' || answerOne == 'D') {
        printf("Incorrect: The greater than or equal to looks like >=.\n");
    }
    
    return 1;
}

