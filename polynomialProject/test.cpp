
/*********************************************************************
File name: test.cpp
Author: <Zach McCall>(<tye2>)
Date: 11/14/2023

Purpose:
    Determine all of the information defined from the given polynomial
Command Parameters:
    -
Input:
    Polynomial
Results:
    Gives information on the given polynomials
Notes:
    NA
*********************************************************************/

/*********************************************************************
function prototype
Purpose:
   Description of the purpose of the function.
Parameters:
   List each of each parameter including data type and description. 
   Each item should begin with whether the parameter is passed in, out or both.
   I Passed in. 
   O Passed out.
   I/O Modified. 
Return Value:
   List of values returned by the function, excluding parameters.
Notes:
   Description of any special information regarding this function. 
   This is a good place to state any assumptions the function makes.
*********************************************************************/


#include <iostream>
using namespace std;

struct sPolyterm
{
    int iCoeff;
    int iExp;
    char cPlusOrMin;
};
// Functions
void printPolynomial(sPolyterm polynomialArr[], int iArraySize)
{
    for(int i = 0; i < iArraySize; i++)
    {
        cout << polynomialArr[i].iCoeff << "x^" << polynomialArr[i].iExp << " " << polynomialArr[i].cPlusOrMin << " "; 
    }
}

void addPolynomial(int iPolynomialAArr[], int iArrayASize, int iPolynomialBArr[], int iArrayBSize, int iPolynomialCArr[])
{

}

void solvePolynomial(int iPolynomialArr[], int iArraySize, double dX)
{

}
void convertPolynom(string szPolynomial, sPolyterm iPolyArr[], int iSize)
{

    int iCoeffCount = 0;
    int iExpCount = 0;
    char cReadArray[iSize];
    for(int i = 0; i < iSize; i++)
    {
        cReadArray[i] = szPolynomial.at(i);
        cout << cReadArray[i] << " ";
        if(isdigit(cReadArray[i]))
        {
            if(iExpCount == iCoeffCount)
            {
                iPolyArr[i].iCoeff = cReadArray[i];
            }
            else if(iCoeffCount > iExpCount)
            {
                iPolyArr[i].iExp = cReadArray[i];
            }
        }
        else if(cReadArray[i] != ' ')
        {
            if(cReadArray[i] == 'x')
            {
                iCoeffCount++;
            }
            else if(cReadArray[i] == '^')
            {
                iExpCount++;
            }
            else if(cReadArray[i] == '+')
            {
                iPolyArr[i].cPlusOrMin = '+';
            }
            else if(cReadArray[i] == '-')
            {
                iPolyArr[i].cPlusOrMin = '-';
            }
        }
        else if(cReadArray[i] == ' ')
        {
        
        }
        else
        {
            cout << "ERROR: Invalid term, please enter a valid term." << endl;
        }
    }

}


int main()
{
    int iSize = 100; 
    string szPolynom;
    sPolyterm iPolyArrayA[iSize];
    // sPolyterm iPolyArrayB[iSize];
    // sPolyterm iPolyArrayAB[iSize];
    
    // Enter in First polynomial;
    cout << "Enter Polynomial 'A': ";
    getline(cin,szPolynom);
    cout << szPolynom << endl;
    convertPolynom(szPolynom, iPolyArrayA, iSize);

    // // Enter in Second Polynomial;
    // cin >> szPolynomB;
    // convertPolynom();

    // addPolynomial();
    // solvePolynomial();
    // printPolynomial();
    


    return 0;
}