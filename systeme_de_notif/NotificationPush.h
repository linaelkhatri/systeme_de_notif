#pragma once
#include "Notification.h"
class NotificationPush :public Notification
{
private:
	string application;
	string utilisateur;
public:
	NotificationPush( string, string, string,string);
	void afficher()const override;
	void envoyer() const override;
	~NotificationPush();

};

