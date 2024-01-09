#include <iostream>
using namespace std;

int main()
{
    int iAnswer = 58;
    int iGuess;
    int iCount = 0;

    iCount += 1;
    cout << "Enter a number: " << endl;
    cin >> iGuess;


    while(iAnswer != iGuess)
    {
        iCount += 1;
        cout << "Try again: " << endl;
        cin >> iGuess;

        if (iGuess != iAnswer)
        {
            int iDifference = fabs(iGuess - iAnswer);
            cout << "You suck. You are " << iDifference << " numbers away" << endl;
        }

        else if( iAnswer == iGuess)
        {
            cout << "OMG Finally jesus that took so long" << endl;
        }

        if(iCount > 3)
        {
            cout << "YOU LOSE" << endl;
            return -1;
        }
    }
    
    return 0;
}
