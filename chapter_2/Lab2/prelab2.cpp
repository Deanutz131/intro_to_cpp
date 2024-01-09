#include <iostream>
#include <fstream>
using namespace std;

/*****************************************
PreLab 2 Assignment

Write a program that copies the data in the
prelab input file to an output file "121_gigawatts"
so that it is formatted the same in both files
Additionally add 60 to the year when you rewrite
it to the output file to help Marty Mcfly get back to
his proper time.
*****************************************/


int main() 
{

    // ADD HERE declare variables
    string sMarty, sMcFly;
    int iYear;

    


    // declare input file stream variable and open file
    ifstream fin;
    ofstream fout;

    // open files 
    fin.open("prelab_input.txt");
    fout.open("121_gigawatts");

    fin >> sMarty >> sMcFly >> iYear;
    // cout << sMarty << " " << sMcFly << " " << iYear;

    
    // Test to see if file correctly opened. If statements will
    // be learned in the future. For now, don't worry about
    // understanding this.

    iYear += 60;

    fout << sMarty << " " << sMcFly << " " << iYear;


    fin.close();
    fout.close();

    return 0;

}