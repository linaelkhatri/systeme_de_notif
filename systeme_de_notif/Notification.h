#pragma once
#include<string.h>
#include<iostream>
using namespace std;
class Notification
{
protected:
	string destinataire;
	string message;
public:
	Notification(string,string);
	virtual void afficher() const;
	virtual void envoyer()const=0;
	 virtual ~Notification();

};

