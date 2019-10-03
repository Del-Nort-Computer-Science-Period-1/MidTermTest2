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
long long convertDecimalToBinary(int n);
int BinaryQ(char *message){
        int n;
        printf("Enter a decimal number: ");
        scanf("%d", &n);
        printf("%d in decimal = %lld in binary", n, convertDecimalToBinary(n));
        return 0;
    }
    long long convertDecimalToBinary(int n)
    {
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
