//
//  projqs.c
//  MidTermTest2
//
//  Created by Szeto, Colin on 10/3/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//

#include "testqs.h"

int projqs(char *message) {

    
    //make question here
    int inputseconds = 531;  //question
    //--------------------------------------------------------
    //answer choices
    /*[A]*/  char *answerA = "5 minutes, 10 seconds";
    /*[B]*/  char *answerB = "6 minutes, 36 seconds";
    /*[C]*/  char *answerC = "8 minutes, 51 seconds";
    /*[D]*/  char *answerD = "8 minutes, 15 seconds";
    //--------------------------------------------------------
    //letter of correct answer choice (upper and lower cases)
    char corans_upcase = 'C';
    char corans_lowcase = 'c';

    
    
    
double minutes;
double seconds;
char answer;
    
    printf("\nIf %i is inputseconds, convert %i to minutes and seconds.\n", inputseconds, inputseconds);
    printf("___________________________________________________________\n\n");
    printf("Function:\n\n");
    fputs (
           "if((inputseconds/60)>=1) {\n"
               "\tminutes = (inputseconds/60 - (inputseconds%60)/60);\n"
           "} else {\n"
               "\tminutes = 0;\n"
           "}\n"
           "seconds = inputseconds-(minutes*60);\n",
           stdout);
    printf("___________________________________________________________\n\n");
    printf("[A]: %s\n", answerA);
    printf("[B]: %s\n", answerB);
    printf("[C]: %s\n", answerC);
    printf("[D]: %s\n", answerD);

    
    
    scanf("%s", &answer);
    printf("_______________________________________________\n\n");
    
    printf("In %d seconds, there are:\n", inputseconds);
    if((inputseconds/60)>=1) {
        minutes = (inputseconds/60 - (inputseconds%60)/60);
    } else {
        minutes = 0;
    }
    seconds = inputseconds-(minutes*60);
    
    
    printf("Minutes:    %lf \nSeconds:    %lf \n", minutes, seconds);

    if(answer == corans_lowcase || answer == corans_upcase) {
        printf("Good Job! Your answer was correct!");
        sprintf(message, "score: 100%%");
        } else {
            printf("Your answer was incorrect.");
            sprintf(message, "score: 0%%");
        }
    
    
    

    
    
    return *message;
}



    


/* int ifelseControl(int num1, int num2) // bellow is inting hte formatting that will allow for dynamic editng of the code rather that a laborus proccess of chainging output, and the question
{
    int result = 4;
    if ((num1 < 5) && (num2 < 5))
        result = num1 - num2;
    else if ((num1 == 2) && (num2 < 2))
        result = num2 - num1;
    else
        result = num1 + num2;
    return result;
}


int ifelseQ(char *message)
{
    char answer1;
    printf("----------------------------------------\n"); // this is the ui that the code will be using
    fputs (
           "int ifelseControl(int num1, int num2)\n"
           "{\n"
           "\tint result = 4;\n"
           "\tif ((num1 < 5) && (num2 < 5))\n"
           "\t\tresult = num1 - num2;\n"
           "\telse if ((num1 == 2) && (num2 < 2))\n"
           "\t\tresult = num2 - num1;\n"
           "\telse\n"
           "\t\tresult = num1 + num2;\n"
           "\treturn result;\n"
           "}\n",
           stdout);
    
    printf("What is returned by the call ifelseControl(2, 13)?\n");
    printf("----------------------------------------\n");
    printf("[A] %d\n[B] %d\n[C] %d\n[D] %d\n", ifelseControl(2, 13), ifelseControl(3, 13), ifelseControl(2,14), ifelseControl(3,14));
    while ((answer1 = getchar()) != '\n');
    answer1 = getchar();
    switch (answer1) {
        case 'a':
        case 'A':
            printf ("A: forloop(%d)=%d\n", 13, ifelseControl(2,13));
            break;
        case 'B':
        case 'b':
            printf ("B: forloop(%d)=%d\n", 14, ifelseControl(3,13));
            break;
        case 'c':
        case 'C':
            printf ("C: forloop(%d)=%d\n", 15, ifelseControl(2,14));
            break;
        case 'd':
        case 'D':
            printf ("D: forloop(%d)=%d\n", 19, ifelseControl(3,14));
            break;
    }
    sprintf(message, "Params %d, %d, Result %d", 2, 13, ifelseControl(2, 13));
    printf("%s", message); //assigns the string to the message array
                            // the message array number is assigned when the scanf function occurs
                            // this allows for the code to print out the result unique to each question
    return 1;
}

*/

