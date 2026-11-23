#pragma once
#include "Notification.h"
class GestionnaireNotification
{
private:
    Notification* T[100];
    int compteur;

public:
    GestionnaireNotification();
    void ajouter(Notification* n);
    void envoyerToutes();
    ~GestionnaireNotification();
};

