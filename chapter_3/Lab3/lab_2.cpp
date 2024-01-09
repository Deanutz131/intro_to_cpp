//TO-DO: Fill in the Authors Name Here
// Zachary McCall
//TO-DO: Fill in the current date here
// Date: 09/15/2023
//CS1428 Lab
//Lab 2
//Description: this program will calculate the average number
//  of iphones sold by Apple and save the values to a
//  file

#include <iostream>
#include <iomanip> // library for setw() and other i/o manipulators
#include <fstream> // library for file input and output
using namespace std;

int main() {

    string sale_period, version;
    double year1, year2, year3;
    double average;
    int i;

    // Declare input file stream variable and open the input file:
    ifstream fin;
    ofstream fout;

    fin.open("Apple_iphone_sales_data.txt");
    fout.open("averages.txt");



    // TODO: Declare output file stream variable and open the output file:



    // Error check to ensure the input file opened:
    if (!fin) {
        cout << "Could not open file. Terminating program." << endl;
        return -1;
    }

    // Write the column headers to the output file:

       fout << left;
       fout << setw(10) << "SalePeriod" << setw(13) << "Version" << "Average" << endl;

       
       for (i = 1; i <= 4; i++){
           fin >> sale_period >> version >> year1 >> year2 >> year3;
       average = (year1 + year2 + year3) / 3;
       fout << setw(10) << sale_period << setw(13) << version << fixed << setprecision(3) << average << endl;
       }
       
        

        // fin >> sale_period >> version >> year1 >> year2 >> year3;
        // average = (year1 + year2 + year3) / 3;
        // fout << setw(10) << sale_period << setw(13) << version << fixed << setprecision(3) << average << endl;

        // fin >> sale_period >> version >> year1 >> year2 >> year3;
        // average = (year1 + year2 + year3) / 3;
        // fout << setw(10) << sale_period << setw(13) << version << fixed << setprecision(3) << average << endl;

        // fin >> sale_period >> version >> year1 >> year2 >> year3;
        // average = (year1 + year2 + year3) / 3;
        // fout << setw(10) << sale_period << setw(13) << version << fixed << setprecision(3) << average << endl;

        // fin >> sale_period >> version >> year1 >> year2 >> year3;
        // average = (year1 + year2 + year3) / 3;
        // fout << setw(10) << sale_period << setw(13) << version << fixed << setprecision(3) << average << endl;

        

    // TODO: Read data from input file, perform calculation,
    //    and write data to output file (x3):





    cout << "Data written to averages.txt" << endl;

    // Close the input and output files:
    fin.close();
    fout.close();

    // Exit the program:
    return 0;
}
