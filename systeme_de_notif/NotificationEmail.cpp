#include "NotificationEmail.h"
#include<iostream>
using namespace std;

NotificationEmail::NotificationEmail(string d,string m,string objt):Notification(d,m)
{
    this->objet = objt;

}

void NotificationEmail::afficher() const
{
    this->Notification::afficher();
    cout << "Objet:" << this->objet << endl;
}

void NotificationEmail::envoyer() const
{
    cout << "envoie d un message" << endl;
    this->NotificationEmail::afficher();

}

NotificationEmail::~NotificationEmail()
{
    cout << "le destructeur de la classe NotificationEmail" << endl;
}
