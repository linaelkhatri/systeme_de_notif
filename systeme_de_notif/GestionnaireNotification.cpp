#include "GestionnaireNotification.h"
#include <iostream>
using namespace std;

GestionnaireNotification::GestionnaireNotification()
{
    this->compteur = 0;
}

void GestionnaireNotification::ajouter(Notification* n)
{
    if (this->compteur<100)
    {
        this->T[this->compteur] = n;
        this->compteur++;
    }
    else
    {
        cout << "Le tableau est plein" << endl;
    }
}

void GestionnaireNotification::envoyerToutes()
{
    for (int i = 0; i < this->compteur; i++)
    {
        this->T[i]->envoyer();
    }
}
GestionnaireNotification::~GestionnaireNotification()
{
    cout << "Destructeur GestionnaireNotification" << endl;
}


