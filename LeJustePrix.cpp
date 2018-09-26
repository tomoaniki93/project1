#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
    cout << "Bienvenue au Juste Prix" << endl;

    long int nomCompose{3}, nomCompose2{1'000'000}; // long int ou long pour un nombre plus grand que 1 million
    double nomAvirgule{1.2}; // ici Double permet d'afficher un chiffre à virgule
    auto nomCompose3{5'250}; // auto donne automatiqueme le type mais ! attention il ne doit pas être différent sur la même ligne

    auto JustePrix{3'784};
    auto proposition{0}; // Permet l'affichage d'une proposition pour l'utilisateur
    auto nombreTentatives{0};

    do {
        cin >> proposition;
        nombreTentatives++; // Incrémantation du nombre pour chaque tentatives
        if(proposition == JustePrix) { // proposition avec le résultat est bon
            cout << "Bravo !" << endl;
            cout << "Nombre de Tentatives : " << nombreTentatives << endl; // Donne le nombre de Tentatives total.
        }
        else if(proposition > JustePrix) { // proposition où le résultat est mauvais
            cout << "C'est moins !" << endl;
            auto difference (proposition - JustePrix);
            if(difference > 1000) { // Pour tous les essais au-dela de 1000
            cout << "Beaucoup moins !" << endl;
            }
        } else {
        cout << "C'est plus !" << endl;
        }
    } while(proposition != JustePrix); // while pour le Bloc loop
}
