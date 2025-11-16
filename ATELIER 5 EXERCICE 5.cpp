/* EXERCICE 5 : Créer une Template de fonction permettant de calculer le carré d’une valeur de type quelconque(le
    résultat possédera le même type).Écrire un petit programme utilisant cette Template.*/
#include <iostream>
using namespace std;

// Template de fonction pour calculer le carre
template <typename T>
T carre(T x) {
    return x * x;
}

int main() {
    cout << carre(4) << endl;      // Carre d'un nombre entier
    cout << carre(3.2) << endl;    // Carre de nombre de type float
    return 0;
}
