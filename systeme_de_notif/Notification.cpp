#include "Notification.h"
#include<iostream>
using namespace std;

Notification::Notification(string d, string m)
{
	this->destinataire = d;
	this->message = m;
}

void Notification::afficher() const
{
	cout << "A:" << this->destinataire <<"/"<<"Message:"<<this->message<<"/" ;

}

Notification::~Notification()
{
	cout << "le destructeur de la classe  Notification:" << endl;
}


