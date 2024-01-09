#include <iostream>
using namespace std;

struct PolyTerm
{
    int iCoeff;         // Coefficient
    int iExp;           // Exponent
};

double solvePolynomial(PolyTerm polynomialArr[], int iArraySize, double dX)
{
    int iP;
    int iQ;
    int pArr[iArraySize]; 
    int qArr[iArraySize];

    /*TODO: Replace message and return with your implementation*/
    bool bEvenOrOdd = true;
    
    for(int i = 0; i < iArraySize; i++)
    {
        // Rational Zero theorem
        // p = all possible factors for the index 0 term
        iP = polynomialArr[0].iCoeff;
        for(int i = i; i < 7; i++)
        {
            int k;
            if(iP % i == 0)
            {
                pArr[k] = iP / i;
                k++;
            }
        }
        for(int i = 0; i < iArraySize; i++)
        {
            cout << iP << endl;
        }
        // q = all possible factors for the index (size -1) term 
         iQ = polynomialArr[iArraySize - 1].iCoeff;


    }
    return 0;
}