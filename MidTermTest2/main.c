//  main.c
//  Menu control
//
//  Created by John Mortensen on 9/21/19.
//  Copyright © 2019 Mortensen, John. All rights reserved.
//

//C libraries
#include <stdio.h>
#include <string.h>

//function protypes
#include "testqs.h"
extern int score;
#define MENUITEMS 20
#define MAXMSGLENGTH 80

int main(int argc, const char * argv[]) {
    int score = 0;
    int menuRun[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};  // 20 array positions initialized
    char runMsg2D[MENUITEMS][MAXMSGLENGTH];         // 2D array ie 20x80
    char *notRun = "Not Run";
    
    for (int exitflag = 0; !exitflag; ) {
        printf("\n"); // provide space after previous lab
        printf("----------------------------------------\n");
        printf("||      MENU SELECTION PORTFOLIO      ||\n");
        printf("|--------------------------------------|\n");
        printf("|Options:                   Run Status:| %d of %d\n", menuRun[0], 10);  // Beware of 10
        printf("|  0 . Exit                      Score:| %d\n", score);
        printf("|  1. for loop calc                    | %s\n", (menuRun[1] ? runMsg2D[1] : notRun) );
        printf("|  2. if loop calc                     | %s\n", (menuRun[2] ? runMsg2D[2] : notRun) );
        printf("|  3. operators question               | %s\n", (menuRun[3] ? runMsg2D[3] : notRun) );
        printf("|  4. for loop question                | %s\n", (menuRun[4] ? runMsg2D[4] : notRun) );
        printf("|  5. data type conversion             | %s\n", (menuRun[5] ? runMsg2D[5] : notRun) );
        printf("|  6. seconds calc                     | %s\n", (menuRun[6] ? runMsg2D[6] : notRun) );
        printf("|  7. Structures Q                     | %s\n", (menuRun[7] ? runMsg2D[7] : notRun) );
        printf("|  8. Binary Q                         | %s\n", (menuRun[8] ? runMsg2D[8] : notRun) );
        printf("|  9. array Q                          | %s\n", (menuRun[9] ? runMsg2D[9] : notRun) );
        printf("| 10.                                  | %s\n", (menuRun[10] ? runMsg2D[10] : notRun) );
        printf("| Select number you would like to run: |\n");
        int totalscore = menuRun[1]/49 + menuRun[2]/49 ;
        
        printf("Your total score is %d out of %d\n", totalscore, menuRun[0]) ;
        printf("----------------------------------------\n");
        
        
        for ( int input = 0; !input; ) { //switch control loop
            
            //user input
            scanf("%d", &input);
            
            //menu action
            switch(input) { // switch verifies input and calls function for selected Menu Item
                case 1:
                    menuRun[input] = forloopQ(runMsg2D[input]);
                    break;
                case 2:
                    menuRun[input] = ifelseQ(runMsg2D[input]);
                    break;
                case 3:
                    menuRun[input] = operatorsrl(runMsg2D[input]);
                    break;
                case 4:
                    controlflowoperators();
                    break;
                case 5:
                    //datatypeconversion();
                    menuRun[input] = conversionQ(runMsg2D[input]);
                    break;
                case 6:
                    menuRun[input] = projqs(runMsg2D[input]);
                    break;
                case 7:
                    menuRun[input] = structuresmc(runMsg2D[input]);
                    break;
                case 8:
                    menuRun[input] = BinaryQ(runMsg2D[input]);
                    break;
                case 9:
                    // function: questionManager drives logic for Test Questions
                    // param: runMsg2D[] is updated through function call
                    // returns: 0
                    projMgrs();
                    break;
                case 10:
                    // function: histogram prints starts
                    // param: runMsg2D[] is updated through function call
                    // returns: >=0 questions run, <0 if failure
                    //menuRun[10] = histogram(runMsg2D[10]);
                    break;
                case 0:
                    input = 32227;  // 0 does not exit
                    exitflag = 1;
                    break;
                default:
                    printf("invalid input, try again\n");
                    break;
                    
            }//end of switch
            
            if (!exitflag && menuRun[input]) {
                menuRun[0]++;
            }//updates "Run Status"
            
        }//end of switch control loop
        
    }//end menu control loop
    
    return 0;
}


