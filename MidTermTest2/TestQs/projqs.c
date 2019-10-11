//
//  projqs.c
//  MidTermTest2
//
//  Created by Szeto, Colin on 10/3/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//  Coded by Do, Kevin.
//  Last Edited on 10/8/19 by Do, Kevin.

#include "testqs.h"

int projqs(char *message) {

    
    //make answer choices here
    //--------------------------------------------------------
    //answer choices
    /*[A]*/  char *answerA = "+  -  *";
    /*[B]*/  char *answerB = "%  +  *";
    /*[C]*/  char *answerC = "-  %  /";
    /*[D]*/  char *answerD = "/  -  +";
    //--------------------------------------------------------
    
char answer; //declare variable for user input
    
    printf("\nWhich option states the best operators that \ncould be used in the function below?"); //printing question
    printf("\n___________________________________________________________\n\n");
    printf("Function:\n\n");
    fputs (
           "The function is able to convert seconds to days, hours,\n"
           "minutes, and seconds.", //displays the type of function that goes with question
           stdout);
    printf("\n___________________________________________________________\n\n");
    printf("Answer with capital letter only.\n\n"); //print answer choices
    printf("[A]: %s\n", answerA);
    printf("[B]: %s\n", answerB);
    printf("[C]: %s\n", answerC);
    printf("[D]: %s\n", answerD);

    
    
    scanf("%s", &answer);
    printf("_______________________________________________\n\n");

    switch(answer) { //change which answer is correct/incorrect and edit scoring
        case 'A':
        case 'a':
            printf("Your answer is incorrect.");
            sprintf(message, "0/1");
            break;
        case 'B':
        case 'b':
            printf("Your answer is incorrect.");
            sprintf(message, "0/1");
            break;
        case 'C':
        case 'c':
            printf("Your answer is correct.");
            sprintf(message, "1/1");
            break;
        case 'D':
        case 'd':
            printf("Your answer is incorrect.");
            sprintf(message, "0/1");
            break;
    }

    
    return *message; //return message (0/1 or 1/1) to main.c
}
