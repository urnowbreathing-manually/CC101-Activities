#include <stdio.h>
#include <stdlib.h>

int programNavigation();
int rectangleAreaCalculator();
int triangleAreaCalculator();

int main(){
    int functionSelect = 0;
    char functionTitle[3][26] = {"Rectangle Area Calculator", "Triangle Area Calculator", "Exit Program"};

    //Program startup text
    printf("[]================(Assignment #5)================[]\n");
    printf("         CC101 - Introduction to Computing       \n");
    printf("         Zantua, Andrei I.   ||    BSCS 1A       \n\n");

    while(functionSelect != 3){
        functionSelect = programNavigation(functionSelect, functionTitle);
        switch(functionSelect){
            case 0:
                printf("Menu]\n\n");
                break;
            case 1:
                printf("%s]\n\n", functionTitle[functionSelect - 1]);
                rectangleAreaCalculator();
                functionSelect = 0;
                break;

            case 2:
                printf("%s]\n\n", functionTitle[functionSelect - 1]);
                triangleAreaCalculator();
                functionSelect = 0;
                break;

            case 3:
                printf("%s]\n\n", functionTitle[functionSelect - 1]);
                printf("[]===============(Program  Closed)===============[]\n");
                break;

            default:
                printf("Menu]\n\n");
        }

    }

    return 0;
}

int programNavigation(int functionSelect){ //Function to help with navigation through the program

    //UI text for readability
    printf("[]==================(Selection)==================[]\n");
    printf("  Selecttion:\n");
    printf("   - (1 = Rectangle Area Calculator)\n");
    printf("   - (2 = Triangle Area Calculator)\n");
    printf("   - (3 = Exit Program)\n\n");

    //Asks for user input to select function
    printf("[]====================(Input)====================[]\n");
    printf("  Select Function: ");
    scanf("%d", &functionSelect);
    printf("  Selected Function: [%d - ", functionSelect);

    return functionSelect;
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
