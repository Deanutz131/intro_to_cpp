/*********************************************************************
File name: lab3.cpp
Author: <Zach McCall>(<tye2>)
Date: XX/XX/XXXX

Purpose:
   Description of the purpose of the program.
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

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;

    string flights;

    fin.open("flights.txt");

    fin >> flights;

    cout << flights << endl;

    fin.close();

    return 0;
}