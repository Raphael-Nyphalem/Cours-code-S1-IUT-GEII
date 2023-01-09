#include <iostream>
#include <ostream>

using namespace std;

const int NB_MAX =5;



void ex1()
{
    int monTableau[NB_MAX];

    for (int i = 0; i < NB_MAX; i++)
    {
        monTableau[i] = 10 * (i+1);
    }

    cout <<"Les valeurs du tableau sont : " <<endl;
    for (int i = 0; i < NB_MAX; i++)
    {
        cout << "element #"<< i <<" : "<< monTableau[i]<<endl;
    }

    cout << endl;


    for (int i = 0; i < NB_MAX; i++)
    {
        monTableau[i] -= 5;
    }

    cout <<"Les nouvelles valeurs du tableau sont : " <<endl;
    for (int i = 0; i < NB_MAX; i++)
    {
        cout << "element #"<< i <<" : "<< monTableau[i]<<endl;
    }

    
}

const int NB_Note = 5;

typedef float notes_t[NB_Note];

void lireNote(notes_t &Tab)
{
    float note;
    cout << "Donner les notes d'un étudiant : "<<endl;
    for (int i =0; i<NB_Note; i++) {
        cin >> Tab[i];
    }
}
float calculerMoyenne(notes_t Tab)
{
    float somme,result;
    somme = 0.0;
    for (int i=0; i<NB_Note; i++) {
        somme += Tab[i];
    }
    result = somme/NB_Note;
    return result;
}

void afficherNote(notes_t Tab)
{
    float moy;
    cout<<" Les notes sont:"<<endl;
    for (int i = 0; i< NB_Note; i++) {
        cout<<"\tnote #"<<i<<" : "<<Tab[i]<<endl;
    }
    cout<<endl;
    moy = calculerMoyenne(Tab);
    cout<<"La moyenne est : "<<moy<<endl;
}

void ex2()
{
    notes_t notesEtudiant;
    lireNote(notesEtudiant);
    afficherNote(notesEtudiant);
}



int main(int argc, char const *argv[])
{
    ex2();
    return 0;
}
