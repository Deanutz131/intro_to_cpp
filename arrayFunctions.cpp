/*********************************************************************
File name: arrayFunctions.cpp
Author: <Zach McCall>(<tye2>)
Date: XX/XX/XXXX

Purpose:
   List of Array functions useful to me.
Notes:
   Description of any special information regarding this program.
*********************************************************************/

#include <iostream>
using namespace std;


void populatorArray(int iArr[], int iSize)
/*********************************************************************
void populatorArray(int iArray[], int iSize)
Purpose:
   Populate Array with numbers
Parameters:
    O   int iArray[]
    I   int iNum      Size of array
Return Value:
   -
Notes:
    Populates numbers from 0 to size
*********************************************************************/
// Arrays are pass by Pointers therefore there is no need for a return value
{
    for(int i = 0; i < iSize; i++)
    {
        iArr[i] = i;
    }
}

void printArray(const int iArray[], int iSize)
//  Prints the Array while the array is fully populated;
/*********************************************************************
void PrintArray(int iArray[], int iSize)
Purpose:
   Print the Array
Parameters:
    I   const int iArray[]   Array to Populate 
    I   int iSize      Size of array
Return Value:
    -
Notes:
    -
*********************************************************************/
{
    for(int i = 0; i < iSize; i++)
    {
        cout << iArray[i] << " ";
    }
    cout << endl;
}

void copyArray(int iOrigArr[], int iCopyArr[], int iSize)
/*********************************************************************
void copyArray(int iOrigArr[], int iCopyArr[], int iSize)
Purpose:
   Copy Array to a new location. 
Parameters:
    I   int iOrigArr[]      Array to copy
    O   int iCopyArr[]      Array to store
    I   int iSize           Size of array
Return Value:
    -
Notes:
   -
*********************************************************************/
{
    for(int i = 0; i < iSize; i++)
    {
        iCopyArr[i]= iOrigArr[i];
    }
}



int swapArrayElements(int iArr[], int iSize, int iIndex1, int iIndex2)
/*********************************************************************
void swapArrayElements(int iArr[], int iSize, int iIndex1, int iIndex2)
Purpose:
   Copy Array to a new location. 
Parameters:
    I/O int iArr[]          Array to populate
    I   int iSize           Size of array
    I   int iIndex1         Index 1 to swap
    I   int iIndex2         Index 2 to swap
Return Value:
    -
Notes:
   -
*********************************************************************/
{
    if (iIndex1 > iSize || iIndex2 > iSize)
    {
        return -1;
    }
    int iTemp = 0;
    iArr[iIndex1] = iTemp;
    iArr[iIndex1] = iArr[iIndex2];
    iArr[iIndex2] = iTemp;
    return 0;
}

// int allPossibleFactors(int iArray[], int iArraySize)
// Determines all the possible outputs of a given integer
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

int main()
{
    return 0;
}