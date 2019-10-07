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
    int ansr, input;
    printf("what is %i in binary",n);
    
int cas = rand() % 4;
    switch (cas){
case 1:
    printf("\n1\n%lld\n",ansr1);
    printf("\n2\n");
    option3();
    printf("\n3\n");
    option4();
    printf("\n4\n");
    option2();
    ansr = 1;
            break;
case 2:
    printf("\n1\n");
    option3();
    printf("\n2\n%lld/n",ansr1);
    printf("\n3\n");
    option2();
    printf("\n4\n");
    option4();
    ansr = 2;
            break;
case 3:
    printf("\n1\n");
    option4();
    printf("\n2\n");
    option2();
    printf("\n3\n");
    option3();
    printf("\n4\n%lld\n",ansr1);
    ansr = 4;
            break;
case 4:
    printf("\n1\n");
    option2();
    printf("\n2\n");
    option4();
    printf("\n3\n%lld\n",ansr1);
    printf("\n4\n");
    option3();
    printf("\n");
    ansr = 3;
            break;
    }
    printf("\nwhat is the answer");
    scanf("%i",&input);
    if (ansr == input){
        printf("correct");
    }
    else {
        printf("incorrrect");
    }
            
    
return 0;
}

