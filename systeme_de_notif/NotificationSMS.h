#pragma once
#include "Notification.h"
class NotificationSMS :public Notification
{
private:
	string operateur;
	string numero;
public:
	NotificationSMS(string, string, string,string );
	void afficher()const override;
	void envoyer() const override;
	~NotificationSMS ();
};

