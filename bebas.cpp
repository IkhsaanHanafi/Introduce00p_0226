#include <iostream>
using namespace std;

class persegipanjang {
    public :
        float panjang;
        float lebar;
        float luas;
        void inputData(){
            cout << "input panjang : ";
            cin >> panjang;
            cout << "input lebar : ";
            cin >> lebar;
        }

        void outputData(){
            
        }

        void menghitungluas(){
            luas = panjang*lebar;
            cout << "luas persegi panjang = " << luas << endl;

        }
};

int main()
{
    persegipanjang per ;
    per.inputData();
    per.menghitungluas();
    return 0;

};