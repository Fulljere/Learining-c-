#include <iostream>
#include <time.h>
using namespace std;

int main(){
    int ora_plecare, ora_ajungere, timp_parcursh,timp_parcursm, minut_plecare, minut_ajungere;
    cout<<"Introduceti ora la care pleaca trenul: "<<endl;
    cin>>ora_plecare ;
    cout<<"Introduceti ora la care ajunge trenul: "<<endl;
    cin>>ora_ajungere;
    cout<<"Minutul la care pleaca trenul: "<<endl;
    cin>>minut_plecare;
    cout <<"Minutul la care ajunge trenul: "<<endl;
    cin>>minut_ajungere;
    if(ora_plecare>ora_ajungere)
{
    timp_parcursh= (ora_ajungere + 24 ) - ora_plecare;
    if(minut_plecare>minut_ajungere){
        timp_parcursm= (minut_ajungere + 60 ) - minut_plecare;
    }
    else{
        timp_parcursm= minut_ajungere - minut_plecare;
    }
    cout<<"Trenul a facut "<<timp_parcursh<< "ore si "<<timp_parcursm <<" minute pana la destinatie"<<endl;
    }
    else if(ora_ajungere>ora_plecare)
    {
        timp_parcursh = ora_ajungere - ora_plecare;
        if(minut_plecare>minut_ajungere){
            timp_parcursm= (minut_ajungere + 60 ) - minut_plecare;
        }
        else{
            timp_parcursm= minut_plecare - minut_ajungere;
        }
        cout<<"Trenul a facut" << timp_parcursh <<" ore si "<< timp_parcursm  << " minute pana la destinatie"<<endl;   
         }
    return 0;
}