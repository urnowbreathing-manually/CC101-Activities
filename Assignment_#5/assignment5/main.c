#include <stdio.h>
#include <stdlib.h>

int programNavigation();       //Function to help with navigation through the program
int rectangleAreaCalculator(); //Write a C program that will compute the area of a rectangle
int triangleAreaCalculator();  //Write a C program that will compute the area of a triangle

int main(){ //Main Function; calls other functions in the program
    //Stores value to navigate through program
    int functionSelect = 0;
    //Array stores pre-determined text to display to the user
    char functionTitle[3][26] = {"Rectangle Area Calc", "Triangle Area Calc", "Exit Program"};

    //Program startup text
    printf("[]================(Assignment #5)================[]\n\n\n");
    printf("         CC101 - Introduction to Computing       \n");
    printf("         Zantua, Andrei I.   ||    BSCS 1A       \n\n\n");

    //Keeps the program looping until user inputs exit code
    while(functionSelect != 3){
        //Assigns return value from programNavigation to determine switch case
        functionSelect = programNavigation(functionSelect);
        switch(functionSelect){ //Switch case to select through functions
            case 0: //Displays the menu at the start of program or when user inputs 0;
                printf("Menu]\n\n\n\n");
                break;

            case 1: //Calls the rectangleAreaCalculator
                printf("%s]\n\n\n\n", functionTitle[functionSelect - 1]);
                rectangleAreaCalculator();
                functionSelect = 0;
                break;

            case 2: //Calls the triangleAreaCalculator
                printf("%s]\n\n\n\n", functionTitle[functionSelect - 1]);
                triangleAreaCalculator();
                functionSelect = 0;
                break;

            case 3: //Breaks the while loop, ending the program
                printf("%s]\n\n\n\n", functionTitle[functionSelect - 1]);
                printf("[]===============(Program  Closed)===============[]\n");
                break;

            default: //Displays the menu for incorrect user inputs
                printf("Menu]\n\n\n\n");
                functionSelect = 0;
        }

    }

    return 0;
}

int programNavigation(int functionSelect){ //Function to help with navigation through the program
    //Stores user input as string
    char userInput[11];

    //UI text for readability
    printf("[]==================(Selection)==================[]\n\n");
    printf("  Selecttion:\n");
    printf("   - (1 = Rectangle Area Calculator)\n");
    printf("   - (2 = Triangle Area Calculator)\n");
    printf("   - (3 = Exit Program)\n\n");

    //Asks for user input to select function
    printf("[]====================(Input)====================[]\n\n");
    printf("  Select Function: ");

    //Gets user input in string, with max size of 11 bytes
    fgets(userInput, 11, stdin);
    //Converts user input string of numbers to int values and assigns it to functionSelect

    functionSelect = atoi(userInput);
    printf("  Selected Function: [%d - ", functionSelect);

    return functionSelect; //Returns the new value to the while loop in main()
}

int rectangleAreaCalculator(){ //Write a C program that will compute the area of a rectangle
    //Stores user input as string
    char rectangleChar[11];
    //Stores converted string value
    double rectangleLF = 0;
    //Array stores pre-determined text to display to the user
    char rectangleNouns[2][7] = {"Length", "Width"};

    //UI text for readability
    printf("[]=================(Program  #1)=================[]\n");
    printf("             Rectangle Area Calculator\n");
    printf("  Formula:\n   - Area of a Rectangle = (Length * Width)\n\n");
    printf("                ____________________\n");
    printf("               |                    |\n");
    printf("               |                    |\n");
    printf("               | < Width            |\n"); // Visualization of a rectangle
    printf("               |                    |\n");
    printf("               |                    |\n");
    printf("               |____________________|\n");
    printf("                      ^ Length\n\n");

    //Asks for user to input rectangle length and width
    printf("[]====================(Input)====================[]\n\n");
    for(int i = 0; i < 2; i++){
        printf("  Insert Rectangle %s: ", rectangleNouns[i]);

        //Gets user input in string, with max size of 11 bytes
        fgets(rectangleChar, 11, stdin);
        //Converts user input string of numbers to lf values and assigns it to rectangleLF
        rectangleLF = atof(rectangleChar) + rectangleLF;

    }

    //Displays inputs that the user made
    printf("  Selected %s and %s: ", rectangleNouns[0], rectangleNouns[1]);
    printf("[%.2lf u], [%.2lf u]\n\n\n", rectangleLF - atof(rectangleChar), atof(rectangleChar));

    //Calculates Area of the rectangle and prints it for the user to see
    printf("[]===================(Output)====================[]\n\n");
    printf("  Area of Rectangle = [%.2lf u] * [%.2lf u]\n", rectangleLF - atof(rectangleChar), atof(rectangleChar));
    printf("  Area of Rectangle = [%.2lf square units]\n\n\n\n", (rectangleLF - atof(rectangleChar)) * atof(rectangleChar));

    return 0;
}

int triangleAreaCalculator(){ //Write a C program that will compute the area of a triangle
    //Stores user input as string
    char triangleChar[11];
    //Stores converted string value
    double triangleLF = 0;
    //Array stores pre-determined text to display to the user
    char triangleNouns[2][7] = {"Base", "Height"};

    //UI text for readability
    printf("[]=================(Program  #2)=================[]\n");
    printf("             Triangle Area Calculator\n\n");
    printf("  Formula:\n   - Area of a Triangle  = [(Base * Height) / 2]\n\n");
    printf("                       X\n");
    printf("                      /|\\\n");
    printf("                     / | \\\n");
    printf("                    /  |  \\\n");
    printf("                   /   |   \\\n");
    printf("                  /    | < Height\n"); //Visualization of a triangle
    printf("                 /     |     \\\n");
    printf("                /      |      \\\n");
    printf("               /       |       \\\n");
    printf("              /________X________\\\n");
    printf("                         ^ Base\n\n");

    //Asks for user to input triangle base length and height
    printf("[]====================(Input)====================[]\n\n");
    for(int i = 0; i < 2; i++){
        printf("  Insert Triangle %s: ", triangleNouns[i]);

        //Gets user input in string, with max size of 11 bytes
        fgets(triangleChar, 11, stdin);
        //Converts user input string of numbers to lf values and assigns it to triangleLF
        triangleLF = atof(triangleChar) + triangleLF;

    }

    //Displays inputs that the user made
    printf("  Selected %s and %s: ", triangleNouns[0], triangleNouns[1]);
    printf("[%.2lf u], [%.2lf u]\n\n\n", triangleLF - atof(triangleChar), atof(triangleChar));

    //Calculates Area of the triangle and prints it for the user to see
    printf("[]===================(Output)====================[]\n");
    printf("                       [%.2lf u] * [%.2lf u]\n", triangleLF - atof(triangleChar), atof(triangleChar));
    printf("  Area of Triangle = ----------------------------\n");
    printf("                                   2\n\n");
    printf("  Area of Triangle = [%.2lf square units]\n\n", ((triangleLF - atof(triangleChar)) * atof(triangleChar)) / 2);

    return 0;
}
