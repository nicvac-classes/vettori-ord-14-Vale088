#include <iostream>
using namespace std;

int main() {
    int n,i;
    cout<<"inserisci numero studenti"<<endl;
    cin>>n;
    string nomi[n];
    int voti[n];
    for(i=0;i<=n-1;i++) {
        cout<<" inserisci il nome del  " <<i+1<<"studente:"<<endl;
        cin>>nomi[i];
        cout<<"inserisci il voto del " <<i+1<<"studente:"<<endl;
        cin>>voti[i];

    }
       int tempVoto,j;
        for(i=0;i<=n-2;i++) {
            for(j=0;j<=n-2;i++){
                if(voti[j]>voti[j+1]) {
                    tempVoto=voti[j];
                    voti[j]voti[j+1];
                    voti[j+1]=tempVoto;

                }
            }
        }     
        string tempNomi;
         for(i=0;i<=n-2;i++) {
            for(j=0;j<=n-2;j++){
                if(nomi[j]>nomi[j+1]) {
                    tempNomi=nomi[j];
                    nomi[j]=nomi[j+1];
                    nomi[j+1]=tempNomi;

                }
            }
         }  
         cout<<"Classifica studenti"<<endl;
         for(i=0;i<=n-1;i++) {
            cout<<"Nomi[i],voti[i]"<<endl;
         }

//LEGGERE LE ISTRUZIONI NEL FILE README.md
