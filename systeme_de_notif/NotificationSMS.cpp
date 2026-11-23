#include "NotificationSMS.h"

NotificationSMS::NotificationSMS(string num, string opp, string d, string m) :Notification(d, m)
{
	this->operateur = opp;
	this->numero = num;
}
void NotificationSMS::afficher() const
{
	cout << "Numero:" << this->numero << "/" << "Operateur:" << this->operateur << "/" << "Message:"<<this->message << endl;
}

void NotificationSMS::envoyer() const
{
	cout << "envoie d un message" << endl;
	this->NotificationSMS::afficher();

}

NotificationSMS::~NotificationSMS()
{
	cout << "le destructeur de la classe NotificationSMS" << endl;
}
