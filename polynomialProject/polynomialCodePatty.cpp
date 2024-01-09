#include <iostream>
#include <fstream>
#include <cmath>
#include <set>

using namespace std; 

/*
** Polynomial
** A polynomial is the combination of a coefficient term and an 
** exponent term. For simplicity, we only consider integers for
** these terms.
*/
struct PolyTerm
{
    int iCoeff = 0;         // Coefficient
    int iExp = 0;           // Exponent
};

// Change this value to get different polynomials
const int randomSeed = 7;

/* Function prototypes */
void populatePolynomial(PolyTerm polynomialArr[], int iArraySize);
void sortPolynomial(PolyTerm polynomialArr[], int iArraySize);
void addPolynomials(
    PolyTerm polynomialAArr[], int iArrayASize, 
    PolyTerm polynomialBArr[], int iArrayBSize, 
    PolyTerm polynomialCArr[]);
void printPolynomial(PolyTerm polynomialArr[], int iArraySize);
double solvePolynomial(PolyTerm polynomialArr[], int iArraySize, double dX);

/*********************************************************************
void populatePolynomial(PolyTerm polynomialArr[], int iArraySize)
Purpose:
   Randomly populate the polynomial array with random exponents and
   coefficient.
Parameters:
   I/O polynomialArr[]  Array of PolyTerm
   I iArraySize         Size of the polynomial array
Return Value:
   -
Notes:
   iCoeff can not be zero. This is done in an inefficient way for 
   readability purposes. 
*********************************************************************/
void populatePolynomial(PolyTerm polynomialArr[], int iArraySize)
{
    set<int> iExpSet;

    // Loop through polynomial array
    for(int i = 0; i < iArraySize; i = i + 1)
    {
        // Assign a random coefficient that is not zero
        do
        {
            polynomialArr[i].iCoeff = 10 - rand() % 10;
        } while (polynomialArr[i].iCoeff == 0);
        
        // Assign a random exponent that has not been used before
        do
        {
            polynomialArr[i].iExp = rand() % 10;
        }
        while(iExpSet.find(polynomialArr[i].iExp) != iExpSet.end());

        iExpSet.insert(polynomialArr[i].iExp);
    }
}
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
int allPossibleFactors(int iNum, int iArray[], int iArraySize)
{
    int iTerator = 0;

    // Checks for all possible divisors
    for (int i = 1; i <= iArraySize; i++)
    {
        if(iNum % i == 0)
        {
            iArray[iTerator] = iNum / i;
            iTerator++;
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

/*********************************************************************
void sortPolynomial(PolyTerm polynomialArr[], int iArraySize)
Purpose:
   Sorts the polynomial in descending order using the exponent terms.
Parameters:
   I/O polynomialArr[]  Array of PolyTerm
   I iArraySize         Size of the polynomial array
Return Value:
   -
Notes:
   Uses Bubble sort for readability purposes. 
*********************************************************************/
void sortPolynomial(PolyTerm polynomialArr[], int iArraySize)
{
    // Create a temporary swap variable
    PolyTerm temp;

    // Sort array using Bubble sort
    for(int i = 0; i < iArraySize; i = i + 1)
    {
        for(int j = 0; j < iArraySize - 1; j = j + 1)
        {
            if(polynomialArr[j].iExp < polynomialArr[i].iExp)
            {
                temp = polynomialArr[j];
                polynomialArr[j] = polynomialArr[i];
                polynomialArr[i] = temp;
            }
        }
    }
}


void addPolynomials(
    PolyTerm polynomialAArr[], int iArrayASize, 
    PolyTerm polynomialBArr[], int iArrayBSize, 
    PolyTerm polynomialCArr[])
{
    int k = 0;
    /*TODO: Replace message with your implementation*/
    for(int i = 0; i < iArrayASize; i++)
    {
        // exponents must match in order to add Coefficients
        for(int j = 0; j < iArrayBSize; j++)
        {
            
            
            if(polynomialBArr[j].iExp == polynomialAArr[i].iExp)
            {
                polynomialCArr[k].iCoeff = polynomialBArr[j].iCoeff + polynomialAArr[i].iCoeff;
                polynomialCArr[k].iExp = polynomialAArr[i].iExp;
                polynomialBArr[j].iCoeff = -1;
                polynomialBArr[j].iExp = -1;
                polynomialAArr[i].iCoeff = -1;
                polynomialAArr[i].iExp = -1;
                i++;
                k++;
            }
            else if(polynomialAArr[i].iExp != polynomialBArr[j].iExp)
            {
                // Puts the struct of value poly(a) into the new array
                if(j == iArrayBSize - 1)
                {
                    polynomialCArr[k].iExp = polynomialAArr[i].iExp;
                    polynomialCArr[k].iCoeff = polynomialAArr[i].iCoeff;
                    k++;
                }
                if(i == iArrayASize - 1)
                {
                    if(polynomialBArr[j].iExp == - 1)
                    {

                    }
                    else
                    {
                    polynomialCArr[k].iExp = polynomialBArr[j].iExp;
                    polynomialCArr[k].iCoeff = polynomialBArr[j].iCoeff;
                    k++;
                    }
                }
                
            }

        }
    }
    cout << endl;
}

/*TODO: Write proper documentation for this function*/
void printPolynomial(PolyTerm polynomialArr[], int iArraySize)
{

    /*TODO: Replace message with your implementation*/
    for(int i = 0; i < iArraySize; i++)
    {
        if(i == 0)
        {
            cout << polynomialArr[i].iCoeff << "x^" << polynomialArr[i].iExp;
        }
        
        else
        {
            if(polynomialArr[i].iCoeff == 0)
            {
                break;
            }
            else if(polynomialArr[i].iExp == 0)
            {
                cout <<  " + " << polynomialArr[i].iCoeff;
            }
            else
            {
                cout <<  " + " << polynomialArr[i].iCoeff << "x^" << polynomialArr[i].iExp;
            }
        }

    }
        
}


/*TODO: Write proper documentation for this function*/
double solvePolynomial(PolyTerm polynomialArr[], int iArraySize, double dX)
{
    double dTotal;
    for(int i = 0; i < iArraySize; i++)
    {
        dTotal += (polynomialArr[i].iCoeff * (pow(dX, polynomialArr[i].iExp)));
    }
    return dTotal;
}



void zeroPolynomials(PolyTerm polynomialArr[], int iArraySize)
{
    // Sets all the coefficients of the new array within the struct to zero.
    for(int i = 0; i < iArraySize; i++)
    {
        polynomialArr[i].iCoeff = 0;
        polynomialArr[i].iCoeff = 0;
    }
}

/*TODO: Write proper documentation for this function*/
int main()
{
    int iSizeA = 4;
    int iSizeB = 3;
    int iSizeC = iSizeA + iSizeB;
    PolyTerm polynomialAArr[iSizeA];
    PolyTerm polynomialBArr[iSizeB];
    PolyTerm polynomialCArr[iSizeC];

    cout << "Start Polynomial Calculator" << endl;

    // Provide a random seed. 
    int iRandomSeed = 0;
    cout << "Enter integer random seed: ";
    cin >> iRandomSeed;
    srand(iRandomSeed);
    cout << endl;

    populatePolynomial(polynomialAArr, iSizeA);
    sortPolynomial(polynomialAArr, iSizeA);
    
    // TODO: Student Part
    cout << "Polynomial A : ";
    printPolynomial(polynomialAArr, iSizeA);

    populatePolynomial(polynomialBArr, iSizeB);
    sortPolynomial(polynomialBArr, iSizeB);
    cout << endl;

    // TODO: Student Part
    cout << "Polynomial B : ";
    printPolynomial(polynomialBArr, iSizeB);

    // TODO: Student Part
    
    addPolynomials(polynomialAArr, iSizeA, polynomialBArr, iSizeB, polynomialCArr);
    cout << "Polynomial A+B : ";
    sortPolynomial(polynomialCArr, iSizeC);
    printPolynomial(polynomialCArr, iSizeC);
    cout << endl;

    char cRestartLoop;
    double dSolution;
    double dX;

    do
    {
        cout << "Enter a X value: ";
        cin >> dX;
        
        // TODO: Student Part
        dSolution = solvePolynomial(polynomialCArr, iSizeA+iSizeB, dX);
        cout << "Solution for X = " << dX << ": " << dSolution << endl;

        cout << "Do you want to enter another X (Y/N)? ";
        
        getchar(); // Clear buffer
        cRestartLoop = getchar();
        getchar(); // Clear buffer
        cout << endl;
    }while(cRestartLoop == 'y' || cRestartLoop == 'Y');
    cout << "End Polynomial Calculator" << endl;
    return 0;
}