//
//  Binary_Team_Question_8.c
//  MidTermTest2
//
//  Created by Vestal, Dane on 10/3/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//

#include "testqs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// converter
long long convertDecimalToBinary(int n) {
    long long binaryNumber = 0;    int remainder, i = 1;
    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
//option2
long long option2(){
    int b = rand() % 10;
    long long ansrb = convertDecimalToBinary(b);
    printf("\n%lld\n",ansrb);
    return ansrb;
}
//option3
long long option3(){
    int c = rand() % 10;
    long long ansrc = convertDecimalToBinary(c);
    printf("\n%lld\n",ansrc);
    return ansrc;
}
//option4
long long option4(){
    int d = rand() % 10;
    long long ansrd = convertDecimalToBinary(d);
    printf("\n%lld\n",ansrd);
    return ansrd;
}
// question
int BinaryQ(char *message){
    
    //ansr
    int n = rand() % 10;
    long long ansr1 = convertDecimalToBinary(n);
    int ansr=0, input;
    printf("\nwhat is %i in binary?\n",n);
    
    int cas = rand() % 3;
    
    switch (cas){
        case 0:
            printf("\n a.\n");
            printf("\n%lld\n",ansr1);
            printf("\n b. \n");
            option3();
            printf("\n c. \n");
            option4();
            printf("\n d. \n");
            option2();
            ansr = 'a';
            break;
        case 1:
            printf("\n a. \n");
            option3();
            printf("\n b. \n");
            printf("\n %lld \n",ansr1);
            printf("\n c. \n");
            option2();
            printf("\n d. \n");
            option4();
            ansr = 'b';
            break;
        case 2:
            printf("\n a. \n");
            option4();
            printf("\n b. \n");
            option2();
            printf("\n c. \n");
            option3();
            printf("\n d. \n");
            printf("\n%lld \n",ansr1);
            ansr = 'd';
            break;
        case 3:
            printf("\n a. \n");
            option2();
            printf("\n b. \n");
            option4();
            printf("\n c.");
            printf("\n%lld \n",ansr1);
            printf("\n d. \n");
            option3();
            printf("\n");
            ansr = 'c';
            break;
        }
    
        printf("\nwhat is the answer?\n");
        scanf("%i",&input);

        if (ansr == input){
            printf("\ncorrect\n");
        }
        else {
            printf("\nincorrect\n");
        }
    
    
return 0;
}

