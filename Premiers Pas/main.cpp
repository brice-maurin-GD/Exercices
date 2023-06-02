#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout <<"Salut toi!" << endl;
    int nbPersonne = 3;
    cout <<nbPersonne << endl;
    
    nbPersonne = nbPersonne +1;
    cout <<nbPersonne <<endl;
    
    int r = 5+2;
    r = 5-2;
    cout << r << endl;
    r = 5*2;
    cout << r << endl;
    r = 5/2;
    cout << r << endl;
    int reste = 17 % 5;
    cout<< reste << " restant" << endl;
 
 
    string salutation = "hello";
    string cible = "you";
    cout << salutation << " " << cible << endl;
    cout <<salutation+" "+cible << endl;
    cout <<nbPersonne << endl;
    ++nbPersonne;
    cout <<nbPersonne << endl;
    
    cout <<"Suite de l'exercice" <<endl;
    cout << nbPersonne<<" Personnes"<<endl;

    for (int i = 0; i < nbPersonne; ++i){
        cout << "Salut toi" <<endl;
        cout << i <<endl;
    }
    cout <<"Suite de l'exercice"<< endl;
    
    
    return 0;
 }