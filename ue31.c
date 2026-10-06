#include <stdio.h>

int main()
{
    int spieler;
    int incerster, inczweiter;

    // Anzahl der Spieler eingeben
    printf("Wie viele Spieler? ");
    scanf("%d", &spieler);

    // Überpruefen, ob es mehr als 26 Spieler gibt
    if (spieler > 26)
    {
        // Fehlermeldung ausgeben
        printf("Hinweis: Maximal 26 Spieler erlaubt.\n");
    }
    else
    {
        // Erster Spieler
        for (incerster = 0; incerster < spieler; incerster++)
        {
            // Zweiter Spieler
            // incerster + 1 verhindert, dass ein Spieler gegen sich selbst spielt
            for (inczweiter = incerster + 1; inczweiter < spieler; inczweiter++)
            {
                // Spieler als Buchstaben A-Z ausgeben
                printf("%c gegen %c\n", 'A' + incerster, 'A' + inczweiter);
            }
        }
    }

    return 0;
}
