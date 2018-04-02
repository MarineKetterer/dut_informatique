#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char        nombre_de_questions = 10;

int         getnbr() /* Récupère la réponse entrée par l'utilisateur. (Code aidé via internet) */
{
    char    *ligne; /* char * = Chaîne de charactères, une succession de char */
    size_t  nombre_de_lettre_lue = 1096;

    fgets(ligne, nombre_de_lettre_lue, stdin); /* fgets(chaine de charactères dans laquelle mettre ce que l'utilisateur écrit, nombre de caractères à lire autre que \n au maximum, stdin = l'entrée utilisateur) */
    return (atoi(ligne)); /* atoi transforme une chaine de charactères en nombre */
}

void        test()
{
    /* Préparation du test */
    char    *questions[nombre_de_questions];
    questions[0] = strdup("Combien font 2+2 ?\n\t1: 0\n\t2: 2\n\t3: 4\n\t4: 6\n");
    questions[1] = strdup("Combien font 2+2*2-2 ?\n\t1: 6\n\t2: 0\n\t3: 8\n\t4: 4\n");
    questions[2] = strdup("Combien font 8 * 6 ?\n\t1: 48\n\t2: 86\n\t3: 36\n\t4: 40\n");
    questions[3] = strdup("Un triangle equilateral est:\n\t1: Un triangle avec 2 cotes de la meme longueur\n\t2: Un triangle avec 3 cotes de la meme longueur\n\t3: Un triangle possedant un angle droit\n\t4: Un triangle avec un angle pivoresque\n");
    questions[4] = strdup("Le nombre 74 peut-il etre un nombre decimal ?\n\t1: Deci-quoi ?!?\n\t2: Oui\n\t3: Bof\n\t4: Non\n");
    questions[5] = strdup("Quel nombre est un nombre premier ?\n\t1: 9\n\t2: 42\n\t3: 29\n\t4: La reponse D\n");
    questions[6] = strdup("2/3 est par rapport à 6/9 ?\n\t1: Plus grand\n\t2: Plus petit\n\t3: Son double\n\t4: Egal\n");
    questions[7] = strdup("Combien de temps y a t'il entre 2h30 et 3h50\n\t1: 80 minutes\n\t2: 90 minutes\n\t3: 110 minutes\n\t4: 120 minutes\n");
    questions[8] = strdup("Comment ecrit-on 91 en texte?\n\t1: Nonante et un\n\t2: 91\n\t3: Quatre-vingt-onze\n\t4: KatreVinOnze\n");
    questions[9] = strdup("Quel est la probabilite que je rejoigne le DUT Informatique ?\n\t1: 25%\n\t2: 50%\n\t3: 100%\n\t4: 25%\n");
    int     bonne_reponses[nombre_de_questions];
    bonne_reponses[0] = 3;
    bonne_reponses[1] = 4;
    bonne_reponses[2] = 1;
    bonne_reponses[3] = 2;
    bonne_reponses[4] = 2;
    bonne_reponses[5] = 3;
    bonne_reponses[6] = 4;
    bonne_reponses[7] = 1;
    bonne_reponses[8] = 3;
    bonne_reponses[9] = 42;
    int    reponses[nombre_de_questions];

    /* Début du test */
    unsigned int i = 0;
    int j = 0;
    printf("Bonjour et bienvenue dans ce petit test de mathematiques, il vous sera pose 10 questions. Bonne chance :\)\n");
    while (i < nombre_de_questions)
    {
        printf("\n=== Question %d ===\n\n%s", i + 1, questions[i]);
        printf("Reponse: ");
        j = -1;
        while (j < 1 || j > 4)
        {
            j = getnbr();
            if (j < 1 || j > 4)
                printf("Merci de repondre 1, 2, 3 ou 4 !\nReponse: ");
        }
        reponses[i] = j;
        i = i + 1;
    }

    /* Résultat */
    printf("\n==== RESULTAT ====\n\n");
    i = 0;
    while (i < nombre_de_questions)
    {
        printf("Reponse question %d: ", i + 1);
        reponses[i] == bonne_reponses[i] ? printf("Juste !\n") : printf("Faux !\n");
        i = i + 1;
    }
}


int main()
{
    test();
    return 0;
}
