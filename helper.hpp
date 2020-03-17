/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include "helper.h"


int main()
{
    string menu;
    menu =  "\n           | MENU |\n";
    menu += "1. Enter a number\n";
    menu += "2. Power the number\n";
    menu += "3. Root the number\n";
    menu += "4. Calculate e raised to a number\n";
    menu += "5. Quit\number"
    validateChoice(printMenu(menu), menu);
}
