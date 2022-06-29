#include <iostream>

using namespace std;

class klasa {

    public:

            int metoda_1(int x, int y)
            {
                klasa dodaj;

                int suma=x+y+dodaj.metoda_2();
                return suma;
            }

    private:
        int metoda_2()
        {
            return 5;
        }

};



int main()
{
    int x, y;
    cin >> x >> y;

    klasa suma;

    cout << suma.metoda_1(x,y) << endl;

    return 0;
}
