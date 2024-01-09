#include <iostream>
using namespace std;

int main()

{   
    int ie, iW, iE3;

   
    cout << "Enter the value for e" << endl;
    cin >> ie;

    cout << "Enter the value for w " << endl;
    cin >> iW;

    iE3 = ie * ie * ie;
    iW = iW + 44;


    cout << "e to the power of 3 = " << iE3 << endl;

    cout << "w  +  44 = " << iW << endl;

    return 0;

}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double dNumPoundsLift;
    double dNumKiloLift;

    cout << " Greetings peasent. How many pounds can you lift? ";
    cin >> dNumPoundsLift;



    dNumKiloLift = dNumPoundsLift / 2.20462;
    
    cout << fixed << setprecision(2) << " You can lift a totol of " << dNumKiloLift << " kilograms." << endl;
    cout << "Congrats Mortal";




}