#include <iostream>
using namespace std;
struct PolyTerm
{
    int iCoeff = 0;         // Coefficient
    int iExp = 0;           // Exponent
};

void addPolynomials(
    PolyTerm polynomialAArr[], int iArrayASize, 
    PolyTerm polynomialBArr[], int iArrayBSize, 
    PolyTerm polynomialCArr[])
{
    int k = 0;
    /*TODO: Replace message with your implementation*/
    for(int i = 0; i < iArrayASize; i++)
    {
        cout << "|" << polynomialAArr[i].iCoeff << "," << polynomialAArr[i].iExp << "||";
        // exponents must match in order to add Coefficients
        for(int j = 0; j < iArrayBSize; j++)
        {
            cout << polynomialBArr[j].iCoeff << "," << polynomialBArr[j].iExp << "|";
            if(polynomialBArr[j].iExp == polynomialAArr[i].iExp)
            {
                polynomialCArr[k].iCoeff = polynomialBArr[j].iCoeff + polynomialAArr[i].iCoeff;
                polynomialCArr[k].iExp = polynomialAArr[i].iExp;
                k++;
            }
            else if(polynomialAArr[i].iExp != polynomialBArr[j].iExp)
            {
                polynomialCArr[k].iCoeff = polynomialAArr[i].iCoeff;
                polynomialCArr[k].iExp = polynomialAArr[i].iExp;
                k++;
            }
        }
        cout << endl;
    }
}

}
int main()
{

}
