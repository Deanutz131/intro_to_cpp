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
    ifstream fin;
    ofstream fout;

    fin.open("masallah.txt");
    fout.open("Quran.txt");

    string masallah;
    string sDrawTheProfit;
    

    getline(fin, masallah);
    getline(fin, sDrawTheProfit);

    fout << masallah << endl;
    fout << sDrawTheProfit << endl;

    fin.close();
    fout.close();

    return 0;
}