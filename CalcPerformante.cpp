#include <iostream>
#include <cmath>
using namespace std;

void calcAdunare(int n1, int n2);
void calcScadere(int n1,int n2);
void calcInmultire(int n1,int n2);
void calcImpartire(int n1,int n2);
void calcPutere(int n1,int n2);
void calcRadical(int n1,int n2);


    int main(){
        int a,b;
        int rezultat;
        cout << " ****************************************** "<<endl;
        cout<<"************CALCULATOR PERFORMANT************"<<endl;
        cout << " ****************************************** "<<endl;
        cout << "1. Adunare."<<endl;
        cout << "2. Scadere."<<endl;
        cout << "3. Inmultire."<<endl;
        cout << "4. Impartire. "<<endl;
        cout << "5. Putere. "<<endl;
        cout << "6. Radical. "<<endl;
        cout << " ****************************************** "<<endl;
        cout << " ****************************************** "<<endl;
        cout << "Alege te rog operatia pe care doresti sa o efectuezi: "<<endl;
        cin >> rezultat;
        switch(rezultat){
            case 1: 
            cout <<"Introdu numerele: "<<endl;
            cin >> a>> b;
            calcAdunare(a,b);
            break;
            case 2:
                 cout <<"Introdu numerele: "<<endl;
            cin >> a>> b;
            calcScadere(a,b);
            break;
            case 3:
                 cout <<"Introdu numerele: "<<endl;
            cin >> a>> b;
            calcInmultire(a,b);
            break;
            case 4:
                 cout <<"Introdu numerele: "<<endl;
            cin >> a>> b;
            calcImpartire(a,b);
            break;
            case 5:
                 cout <<"Introdu numerele: "<<endl;
            cin >> a>> b;
            calcPutere(a,b);
            break;
            case 6:
                 cout <<"Introdu numerele: "<<endl;
            cin >> a>> b;
            calcRadical(a,b);
            break;
            default:
            cout<< "Numar invalid!";
            break;
        }
        return 0;
    }

void calcAdunare(int n1, int n2)
{
    double adunare = n1+n2;
    cout <<" Rezultat: "<< adunare <<endl;
    cout << " ****************************************** "<<endl;
    cout << " ****************************************** "<<endl;
    cout << "CEL MAI TARE DIN PARCARE!!!!!!!!!!!!!!!!!!!!"<<endl;
}
void calcScadere(int n1,int n2){
    double scadere = n1-n2;
    cout <<"Rezultat: "<<scadere <<endl;
    cout << " ****************************************** "<<endl;
    cout << " ****************************************** "<<endl;
    cout << "CEL MAI TARE DIN PARCARE!!!!!!!!!!!!!!!!!!!!"<<endl;
}
void calcInmultire(int n1,int n2){
    double inmultire = n1 * n2;
    cout <<"Rezultat: "<< inmultire << endl;
    cout << " ****************************************** "<<endl;
    cout << " ****************************************** "<<endl;
    cout << "CEL MAI TARE DIN PARCARE!!!!!!!!!!!!!!!!!!!!"<<endl;
}
void calcImpartire(int n1,int n2){
    double impartire = n1/(double)n2;
    cout <<"Rezultat: "<< impartire<<endl;
    cout << " ****************************************** "<<endl;
    cout << " ****************************************** "<<endl;
    cout << "CEL MAI TARE DIN PARCARE!!!!!!!!!!!!!!!!!!!!"<<endl;
}
void calcPutere(int n1,int n2){
    double putere = pow(n1,n2);
    cout <<"Rezultat: "<< putere<<endl;
    cout << " ****************************************** "<<endl;
    cout << " ****************************************** "<<endl;
    cout << "CEL MAI TARE DIN PARCARE!!!!!!!!!!!!!!!!!!!!"<<endl;
}
void calcRadical(int n1,int n2){
    double radical;
    radical = sqrt(n1+n2);
    cout << "Rezultat: "<< radical << endl;
    cout << " ****************************************** "<<endl;
    cout << " ****************************************** "<<endl;
    cout << "CEL MAI TARE DIN PARCARE!!!!!!!!!!!!!!!!!!!!"<<endl;
}
