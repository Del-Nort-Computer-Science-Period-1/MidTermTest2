//
//  Project Managers.c
//  MidTermTest2
//
//  Created by Maheshwari, Navodit on 10/4/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
static char option1[50];
static char option2[50];
static char option3[50];
static char option4[50];
int loop = 0;
int check = 1;

int forkexample()
{ if (check>0)
{
    printf("What is printed on the third line of this code?\n Note printfs are going to be in psuedo code otherwise the printf breaks, d is percent d.\n");
    printf("#include <stdio.h>\n");
    printf("#include <sys/types.h>\n");
    printf("#include <unistd.h>\n");
    printf("int question()\n");
    printf("{ \n");
    printf("    int x=0;\n");
    printf("    int a=fork();\n");
    printf("    x++;\n");
    printf("    if (a>0)\n");
    printf("  { \n");
    printf("    printf('Parent d', a);\n ");
    printf("  }\n");
    printf("    else");
    printf("  {\n");
    printf("    printf('Child d', a);\n");
    printf("  }\n");
    printf("    return a;\n");
    printf("}\n\n");
    printf("int main()\n");
    printf("{\n");
    printf("    printf('d interest', question());\n");
    printf("    return 0;\n");
    printf("}\n ");
    printf("A. 0 interest \nB. Child 0\nC. (number) interest \nD. Parent (number)\nE. 0\n");
}
    check--;
    int x=0;
    int a=fork();
    
    x++;
    if (a>0)
    {
        sprintf(option1, "Parent %d\n", a);
    }
    else
    {
        sprintf(option2, "Child %d\n", a);
    }
    return a;
}
int main()
{
    
    if (forkexample()>0)
    {
        sprintf(option3, "%d interest\n", forkexample());
    }
    else
    {
        sprintf(option4, "%d interest\n", forkexample());
    }
    
    int count=0;
    for(int loop=0;loop<1;){
        
        char ans;
        scanf("%c", &ans);
        
        
        switch (ans) {
            case 'a':
            case 'A':
                printf("%s\n", option4);
                printf("Incorrect: \n");
                loop++;
                break;
                
            case 'b':
            case 'B':
                printf("%s\n", option2);
                printf("Correct! \n");
                loop++;
                break;
                
            case 'c':
            case 'C':;
                printf("%s\n", option4);
                printf("Incorrect: \n");
                loop++;
                break;
                
            case 'd':
            case 'D':
                printf("%s\n", option3);
                printf("Incorrect: \n");
                loop++;
                break;
            case 'e':
            case 'E':
                printf("0");
                printf("Incorrect: \n");
                loop++;
                break;
                
            default:
                puts("This answer is invalid. Try Again.\n");
                count++;
                printf("You have put something random %d times\n", count);
                if (count>49)
                {
                    printf("You are a special little one aren't you? \n  ___  ___\n  |_|  |_|\n     > \n  |___|\n\n");
                }
                
                
                break;
        }
    }
    return 0;
    
    return 0;
}







/*  #include <stdio.h>
 #include <sys/types.h>
 #include <unistd.h>
 
 void forkexample()
 {
 int x=0;
 int temp=0;
 int a=fork();
 x++;
 if (a>0)
 {
 temp = x;
 x = a;
 a = temp;
 printf("Parent %d\n", a);
 }
 else
 {
 printf("Child %d\n", a);
 }
 
 }
 int main()
 {
 forkexample();
 return 0;
 }
 */

