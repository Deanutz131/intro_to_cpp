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