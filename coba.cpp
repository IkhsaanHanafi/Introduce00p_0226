#include <iostream>
using namespace std; 

class Planet {
    private :
       float gravitasi;
    public : 
       string nama;
       float diameter;

       void displaydata(){
        cout << "Halo aku planet" << nama << endl;
        cout << "ukuranku" << diameter << endl;
        cout << "gravitasiku" << gravitasi << endl;
       }
       
    void inputData(){
        cout << "input nama : ";
        cin >> nama; 
        cout << "ukuranku : ";
        cin >> diameter;
        cout << "gravitasiku : ";
        cin >> gravitasi;
    }


};
int main()
{
    Planet Venus ;
    Venus.inputData(); //tanda () memanggil method
    cout << "namanya adalah" << Venus .nama <<endl;
    cout << "diameternya adalah" << Venus.nama <<endl;
    

};