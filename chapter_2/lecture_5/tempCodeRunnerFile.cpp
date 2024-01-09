#include <iostream>
#include <fstream>
using namespace std;



int main()
{
    // Create Variables
    int iNum1, iNum2, iSum;
    ifstream fileInput;
    ofstream fileOutput;

    // Open the file
    fileInput.open("numbers.txt");
    fileOutput.open("output.txt");
    
    // Read the file
    cout << "Reading the file";
    fileInput >> iNum1;
    fileInput >> iNum2; 


    // Process information
    iSum = iNum1 + iNum2;

    fileOutput << iSum;


    // Close the file 
    fileInput.close();
    fileOutput.close();
    return 0;
}