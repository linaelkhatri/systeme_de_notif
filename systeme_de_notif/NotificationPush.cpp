#include "NotificationPush.h"

NotificationPush::NotificationPush(string d, string m, string app, string utl):Notification(d,m)
{
	this->utilisateur = utl;
	this->application = app;
}

void NotificationPush::afficher() const
{ 
	cout << "Utilisateur:" << this->utilisateur << "/" << "Application:" << this->application << "/" << "Message:" << this->message << endl;
}

void NotificationPush::envoyer() const
{
	cout << "envoie d un message" << endl;
	this->NotificationPush::afficher();
}

NotificationPush::~NotificationPush()
{
	cout << "le destructeur de la classe NotificationPush" << endl;
}
