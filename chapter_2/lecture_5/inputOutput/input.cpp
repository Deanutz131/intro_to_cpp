/*********************************************************************
File name: example.cpp
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
   int iNum2, iNum3, iSum1;

   ifstream fileInput;
   ofstream fileOutput;

   fileInput.open("numbers.txt");
   fileOutput.open("output.txt");

   fileInput >> iNum2;
   fileInput >> iNum3;

   iSum1 = iNum2 + iNum3;

   fileOutput << iSum1;

   fileInput.close();
   fileOutput.close();
   return 0;
}