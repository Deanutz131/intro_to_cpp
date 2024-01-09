#include <iostream>
#include <fstream>

using namespace std;
/*********************************************************************
File name: main.cpp
Author: David Patrick
Date: 09/15/2023

Purpose:
   Program to introduce the concepts of Booleans and Ifs
Command Parameters:
   -
Input:
   -
Results:
   Various outputs.
Notes:
   -
*********************************************************************/
int main()
{
    ifstream fin;
    ofstream fout;

    int iX, iY, iZ;

    fin.open("numbers.txt");
    fout.open("output.txt");

    if(!fin)
    {
        cout << "BOOK MISSING" << endl;
        return -1;
    }
    else 
    {
        cout << "We Have found the book";
    }
    return 0;
}