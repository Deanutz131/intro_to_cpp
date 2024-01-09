#include <iostream>
#include <string>
using namespace std;



/*********************************************************************
void getPolynomial(string szArray[])
Purpose:
    populate the array with the polynomials coefficients which its exponents correspond to 
    their index.
Parameters:
   List each of each parameter including data type and description. 
   Each item should begin with whether the parameter is passed in, out or both.
   I/O iCoeffArray[iSize]
   O   iSize
Return Value:
    NA
Notes:
   This is a pretty cool function BTW.
*********************************************************************/
void getPolynomial(string szPolynomial)
{

    char cChar;
    int iMaxExp = 0;
    int iSize;
    int index;

    for(int i = 0; i < szPolynomial.length(); i++)
    {
        cout << szPolynomial.at(i) << " ";
    
        // Exponents (corespond to the indexs)
       
            if(szPolynomial.at(i) == '^')
            {
                i++;

                if(iMaxExp < szPolynomial.at(i))
                {
                    iMaxExp = szPolynomial.at(i);
                    index = i;
                }
            }

    }
    cout << endl;
    cout << index << endl;
    cout << iMaxExp << endl;
}


int main()
{
    string szPolynomial;
    int iSize;

    getline (cin, szPolynomial);
    cout << szPolynomial << endl;
    getPolynomial(szPolynomial);

        
return 0;
}