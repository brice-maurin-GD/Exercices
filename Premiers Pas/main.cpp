#include <iostream>
#include <string>
#include <vector>
using namespace std;
void politesses(){
   cout <<"Salut toi!" << endl;
   cout << "Tu vas bien?"<<endl;
   cout << "Quel beau temps aujourd'hui !" <<endl;
}
void SaluerChacun(vector<string>NomsAffiches){
 for (string nom : NomsAffiches){
    cout << "Salut"<< nom << endl;
    cout <<"Tu vas bien?" << endl;
    cout<<endl;
 }     
}
void AjouterNom(vector<string>& noms, int& nbPersonne, string nom){
    noms.push_back(nom);
    nbPersonne = noms.size();
}

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
    vector<string> noms;
    noms.push_back ("Annie");
    noms.push_back ("Brandon");
    noms.push_back ("Caitlin");
    noms.push_back ("Darius");
    
    vector<string> noms_alt{"Anny","Brandonne","Caytlinasse","Dariuso le boloss"};
    
    for (string nom:  noms){
        cout << "Salut" << nom << endl;
    }
    for (string nom : noms_alt){
        cout<<"Hey"<<nom<<" petit panoptile"<<endl;
    }
    
    cout << "Suite de l'exercice" <<endl;
    politesses();

    
    
    for (string nom : noms){
        cout << "Salut" <<nom <<endl;
    }
    cout << "suite de l'exercice"<< endl;
    SaluerChacun(noms);


    cout<< "Suite de l'exercice...encore"<< endl;;
  
    AjouterNom(noms,nbPersonne,"Elise");
    SaluerChacun(noms);
    cout<< nbPersonne << endl;
    
        AjouterNom(noms,nbPersonne,"Fiora");
    SaluerChacun(noms);
    cout<< nbPersonne << endl;
    
    return 0;
 }