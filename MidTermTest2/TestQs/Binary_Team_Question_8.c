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
    long long binaryNumber = 0;
    int remainder, i = 1;
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
    printf("\n%lld",ansrb);
    return ansrb;
}
//option3
long long option3(){
    int c = rand() % 10;
    long long ansrc = convertDecimalToBinary(c);
    printf("\n%lld",ansrc);
    return ansrc;
}
//option4
long long option4(){
    int d = rand() % 10;
    long long ansrd = convertDecimalToBinary(d);
    printf("\n%lld",ansrd);
    return ansrd;
}
// question
int BinaryQ(char *message){
    
    //ansr
    int n = rand() % 10;
    long long ansr1 = convertDecimalToBinary(n);
    int ansr=0, input;
    printf("what is %i in binary",n);
    
    int cas = rand() % 3;
    
    switch (cas){
        case 0:
            printf("\n 1: %lld\n",ansr1);
            printf("\n 2: \n");
            option3();
            printf("\n 3: \n");
            option4();
            printf("\n 4: \n");
            option2();
            ansr = 1;
            break;
        case 1:
            printf("\n 1: \n");
            option3();
            printf("\n 2:  \n %lld \n",ansr1);
            printf("\n 3: \n");
            option2();
            printf("\n 4: \n");
            option4();
            ansr = 2;
            break;
        case 2:
            printf("\n 1: \n");
            option4();
            printf("\n 2: \n");
            option2();
            printf("\n 3: \n");
            option3();
            printf("\n 4: \n%lld",ansr1);
            ansr = 4;
            break;
        case 3:
            printf("\n 1: \n");
            option2();
            printf("\n 2: \n");
            option4();
            printf("\n 3: %lld \n",ansr1);
            printf("\n 4: \n");
            option3();
            printf("\n");
            ansr = 3;
            break;
        }
    
        printf("\nwhat is the answer?\n");
        scanf("%i",&input);

        if (ansr == input){
            printf("correct\n");
        }
        else {
            printf("incorrect\n");
        }
    
    
return 0;
}

