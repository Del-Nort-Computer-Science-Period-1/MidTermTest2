//
//  operatorsrl.c
//  MidTermTest2
//
//  Created by Bulkin, Lola on 10/4/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//

#include "testqs.h"
#include <stdio.h>
int sumOfAll(int numTimesRun) {
    int sum = 0;
    for (int i = 1; i <= numTimesRun; i++) {
        sum += i;
    }
    return sum;
}

void operatorsrl ()
{
    char answerOne;
    printf("What is the output of this code if the input is 5:\n");
    printf("int sumOfAll(int numTimesRun) {\nint sum = 0;\nfor (i = 1; i <= numTimesRun; i++) {sum += i;\n}\nreturn sum;\n}\n\n");
    printf("A: %d\nB: %d\nC: %d\nD: %d\n", sumOfAll(4), sumOfAll(5), sumOfAll(6), sumOfAll(7));
    scanf("%c", &answerOne);
    scanf("%c", &answerOne);
    if (answerOne == 'a' || answerOne == 'A') {
        printf("Incorrect: The loop will add 1 and then 2 and so on up to the number of time the user inputs. The total will be 15 in this case.\n");
    } else if (answerOne == 'b' || answerOne == 'B'){
        printf("Correct!\n");
    } else if (answerOne == 'c' || answerOne == 'C') {
        printf("Incorrect: The loop will add 1 and then 2 and so on up to the number of time the user inputs. The total will be 15 in this case.\n");
    } else if (answerOne == 'd' || answerOne == 'D') {
        printf("Incorrect: The loop will add 1 and then 2 and so on up to the number of time the user inputs. The total will be 15 in this case.\n");
    }
    
}

