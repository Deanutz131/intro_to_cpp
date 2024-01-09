/*********************************************************************
File name: example.cpp
Author: <Zach McCall>(<tye2>)
Date: 09/11/2023

Purpose:
   Description of the purpose of the program.
   Define Char
Command Parameters:
   Description of the parameters to main().
Input:
   Description of the input to the program.
Results:
   Description of what the program produces.
Notes:
   Description of any special information regarding this program.
*********************************************************************/

#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

int main()
{
    char cGrade1, cGrade2;
    cout << "Enter Grade 1: ";
    cin >> cGrade1;

    cout << "Enter Grade 2: ";
    cin >> cGrade2;


// char requires a ('') to define char values
    // char cFavoriteChar = 'A';

    // cout << static_cast<int>(cFavoriteChar);
    // cout << endl;

    // char cCombined = '!' + '$';
    // cout << cCombined << endl;

    // find character value 

    cGrade1 = getchar();

    
    cout << cGrade1 << cGrade2;
    cout << cGrade1;





    return 0;
}