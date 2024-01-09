 #include <iostream>
using namespace std;

int main()
{
    int iY = 1;
    int iX = 1;

   while(iX <= 1000)
        {

            if(iX >= iY)
            {
                iY += iX;
                cout << iY << endl;
            } 
            else
            {
                iX += iY;
                cout << iX << endl;
            }
        }
}