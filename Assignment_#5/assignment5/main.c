#include <stdio.h>
#include <stdlib.h>

int programNavigation();
int rectangleAreaCalculator();
int triangleAreaCalculator();

int main(){ //Main Function; calls other functions in the program
    int functionSelect = 0;
    char functionTitle[3][26] = {"Rectangle Area Calculator", "Triangle Area Calculator", "Exit Program"};

    //Program startup text
    printf("[]================(Assignment #5)================[]\n");
    printf("         CC101 - Introduction to Computing       \n");
    printf("         Zantua, Andrei I.   ||    BSCS 1A       \n\n");

    //Keeps the program looping until user inputs exit code
    while(functionSelect != 3){
        //Assigns return value from programNavigation to determine switch case
        functionSelect = programNavigation(functionSelect);
        switch(functionSelect){ //Switch case to select through functions
            case 0: //Displays the menu at the start of program or when user inputs 0;
                printf("Menu]\n\n");
                break;

            case 1: //Calls the rectangleAreaCalculator
                printf("%s]\n\n", functionTitle[functionSelect - 1]);
                rectangleAreaCalculator();
                functionSelect = 0;
                break;

            case 2: //Calls the triangleAreaCalculator
                printf("%s]\n\n", functionTitle[functionSelect - 1]);
                triangleAreaCalculator();
                functionSelect = 0;
                break;

            case 3: //Breaks the while loop, ending the program
                printf("%s]\n\n", functionTitle[functionSelect - 1]);
                printf("[]===============(Program  Closed)===============[]\n");
                break;

            default: //Displays the menu for incorrect user inputs
                printf("Menu]\n\n");
                functionSelect = 0;
        }

    }

    return 0;
}

int programNavigation(int functionSelect){ //Function to help with navigation through the program
    //Stores user input as string
    char userInput[11];

    //UI text for readability
    printf("[]==================(Selection)==================[]\n");
    printf("  Selecttion:\n");
    printf("   - (1 = Rectangle Area Calculator)\n");
    printf("   - (2 = Triangle Area Calculator)\n");
    printf("   - (3 = Exit Program)\n\n");

    //Asks for user input to select function
    printf("[]====================(Input)====================[]\n");
    printf("  Select Function: ");
    fgets(userInput, 11, stdin); //Gets user input in string, with max size of 11 bytes
    functionSelect = atoi(userInput); //Converts user input string of numbers to int values and assigns it to functionSelect
    printf("  Selected Function: [%d - ", functionSelect);

    return functionSelect; //Returns the new value to the while loop in main()
}

int rectangleAreaCalculator(){ //Write a C program that will compute the area of a rectangle

    //UI text for readability
    printf("[]=================(Program  #1)=================[]\n");
    printf("             Rectangle Area Calculator\n\n");

    return 0;
}

int triangleAreaCalculator(){ //Write a C program that will compute the area of a triangle

    //UI text for readability
    printf("[]=================(Program  #2)=================[]\n");
    printf("             Triangle Area Calculator\n\n");

    return 0;
}
