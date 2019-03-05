#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//Function prototypes
int color(string[], const int);
double time(string[], double[], const int, int, int, int);
int tolerance(string[], double[], const int);

int main()
{
    // Variables
    const int band = 10, multiplier = 12, toleranceSize = 4;    // Represents size of each string array
    int a, b, c;                                                // Holds teh 3 colors from band which are entered by user
    int output;                                                 // Contains tolerance
    double product;                                             // Stores result from calculation

    // Defined string arrays
    string BAND_COLOR_CODE[band] = { "black", "brown", "red", "orange",
                                     "yellow", "green", "blue", "violet",
                                     "grey", "white" };

    string MULTIPLIER_COLOR_CODE[multiplier] = { "black", "brown", "red", "orange",
                                                 "yellow", "green", "blue", "violet",
                                                 "grey", "white", "gold", "silver" };

    string TOLERANCE_COLOR_CODE[toleranceSize] = { "brown", "red", "gold", "silver" };

    // Arrays which hold numeric values for teh string arrays
    double multiplierArray[multiplier] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0.1, 0.01 };

    double toleranceArray[toleranceSize] = { 1, 2, 5, 10 };

    // Loop to show each color and teh number it corresponds to
    for (int i = 0; i < band; i++)
    {
        cout << BAND_COLOR_CODE[i] << " == " << multiplierArray[i] << endl;
    }

    // Call teh function three times and store teh information (i.e.: color and its value) in teh variables a, b, and c
    a = color(BAND_COLOR_CODE, band);

    b = color(BAND_COLOR_CODE, band);

    c = color(BAND_COLOR_CODE, band);

    cout << "\n";

    //Call teh function to store teh result from teh calculation
    product = time(MULTIPLIER_COLOR_CODE, multiplierArray, multiplier, a, b, c);

    cout << "\n";

    //Call teh function to store teh tolerance
    output = tolerance(TOLERANCE_COLOR_CODE, toleranceArray, toleranceSize);

    cout << "\n";

    //Display information about teh resistor
    cout << "This resistor has " << product << " ohms with " << output << " % tolerance." << endl;

    cout << "\n";

    system("PAUSE");

    return 0;
}

/**
* Pre-Condition: This function accepts a string array and its size. *
* Post-Condition: It sets each color to a particular numeric value  *
* and converts it into an int to return after accepting user input. *
*/
int color(string BAND_COLOR_CODE[], const int band)
{
    // Variables
    char code[10];      // Represents teh colors from teh string array BAND_COLOR_CODE
    int num = 0;        // Holds numeric value from 0-9 for color band
    static int j = 0;   // Stores user input for color

    ++j;                // Increments to allow user to input colors in succession

    cout << "\n";

    // Prompt for user input
    cout << "Enter a color for band " << j << ": > ";
    cin.getline(code, 10);

    // Loop to take care of teh case of letters
    for (int i = 0; i < 10; i++)
        code[i] = tolower(code[i]);

    // Loop to set user input to a number
    for (int i = 0; i < band; i++)
    {
        if(code == BAND_COLOR_CODE[i])
        {
            switch (i)
            {
                case 0:
                {
                    num = 0;
                    break;
                }

                case 1:
                {
                    num = 1;
                    break;
                }

                case 2:
                {
                    num = 2;
                    break;
                }

                case 3:
                {
                    num = 3;
                    break;
                }

                case 4:
                {
                    num = 4;
                    break;
                }

                case 5:
                {
                    num = 5;
                    break;
                }

                case 6:
                {
                    num = 6;
                    break;
                }

                case 7:
                {
                    num = 7;
                    break;
                }

                case 8:
                {
                    num = 8;
                    break;
                }

                case 9:
                {
                    num = 9;
                    break;
                }

                default:
                {
                    cout << "ERROR!" << endl;
                }
            }
        }
    }

    return num;
}

/**
* Pre-Condition: This function accepts two arrays, their size, and three *
* variables that will hold colors.                                       *
* Post-Condition: It accepts user input and converts it into a int to    *
* use in data calculation. It returns a product.                         *
*/
double time(string MULTIPLIER_COLOR_CODE[], double multiplierArray[], const int multiplier, int a, int b, int c)
{
    // Variables
    char code[10];              // Represents teh colors from teh string array BAND_COLOR_CODE
    double total = 0;           // Overall sum of a, b, and c
    double num = 0;             // Holds numeric values for multiplier
    double value;               // Stores value of resistor

    // Loop to show colors in teh multiplier
    for (int i = 0; i < multiplier; i++)
    {
        cout << MULTIPLIER_COLOR_CODE[i] << " == " << multiplierArray[i] << endl;
    }

    cout << "\n";

    // Prompt for user input
    cout << "Enter a color for teh multiplier: > ";
    cin.getline(code, 10);

    // Loop to take care of case for letters
    for (int i = 0; i < 10; i++)
        code[i] = tolower(code[i]);

    // Loop to set user input to a number
    for (int i = 0; i < multiplier; i++)
    {
        if (code == MULTIPLIER_COLOR_CODE[i])
        {
            switch (i)
            {
                case 0:
                {
                    num = 0;
                    break;
                }

                case 1:
                {
                    num = 1;
                    break;
                }

                case 2:
                {
                    num = 2;
                    break;
                }

                case 3:
                {
                    num = 3;
                    break;
                }

                case 4:
                {
                    num = 4;
                    break;
                }

                case 5:
                {
                    num = 5;
                    break;
                }

                case 6:
                {
                    num = 6;
                    break;
                }

                case 7:
                {
                    num = 7;
                    break;
                }

                case 8:
                {
                    num = 8;
                    break;
                }

                case 9:
                {
                    num = 9;
                    break;
                }

                case 10:
                {
                    num = 0.1;
                    break;
                }

                case 11:
                {
                    num = 0.01;
                    break;
                }
                default:
                {
                    cout << "ERROR!" << endl;
                }
            }
        }
    }

    total += (a * 100) + (b * 10) + c;

    value = total * pow(10, num);

    return value;
}

/**
* Pre-Condition: This function accepts two arrays and their size. *
* Post-Condition: It gets user input and converts it into an int  *
* to be returned.                                                 *
*/
int tolerance(string TOLERANCE_COLOR_CODE[], double toleranceArray[], const int toleranceSize)
{
    // Variables
    char code[10];      // Represents teh colors from teh string array BAND_COLOR_CODE
    int num = 0;        // Holds numeric values for tolerance

    // Loop to set user input to a number
    for (int i = 0; i < toleranceSize; i++)
    {
        cout << TOLERANCE_COLOR_CODE[i] << " == " << toleranceArray[i] << endl;
    }

    cout << "\n";

    // Prompt for user input
    cout << "Enter a color for teh tolerance: > ";
    cin.getline(code, 10);

    // Loop to take care of case for letters
    for (int i = 0; i < 10; i++)
        code[i] = tolower(code[i]);

    // Loop to set user input to a number
    for (int i = 0; i < toleranceSize; i++)
    {
        if (code == TOLERANCE_COLOR_CODE[i])
        {
            switch (i)
            {
                case 0:
                {
                    num = 1;
                    break;
                }

                case 1:
                {
                    num = 2;
                    break;
                }

                case 2:
                {
                    num = 5;
                    break;
                }

                case 3:
                {
                    num = 10;
                    break;
                }

                default:
                {
                    cout << "ERROR!" << endl;
                }
            }
        }
    }

    return num;
}
