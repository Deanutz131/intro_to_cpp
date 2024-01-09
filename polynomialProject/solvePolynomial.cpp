#include <iostream>
using namespace std;

/*********************************************************************
int allPossibleFactors(int iNum, int iArray[], int iArraySize)
Purpose:
   takes all the possible factors of the given variable and stores them into an array
Parameters:
    I int iNum        The number that we are trying to find the factors of
    O int iArray[]    The Array that will be filled with the factors
    I/O int iArraySize The original array size will be put in and a new arraysize will be returned
Return Value:
    New Array size, int iArraySize
Notes:
   This is only for integer numbers
*********************************************************************/
int allPossibleFactors(int iArray[], int iArraySize)
{
    int iTerator = 0;


    // Checks for all possible divisors
    for (int i = 1; i <= iArraySize; i++)
    {
        if(iArraySize % i == 0)
        {
            iArray[iTerator] = iArraySize / i;
        }
        
    }
    // Shortens the array to the inputed numbers
    for(int i = 0; i < iArraySize; i++)
    {
        
        if(iArray[i] < 2)
        {
            iArraySize = i - 1;
        }
    }
    for(int i = 0; i < iArraySize; i++)
    {
        cout << iArray[i] << " ";
    }
    return iArraySize;

}

