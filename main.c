# include <stdio.h>
# include <stdlib.h>
# include<string.h>

//Prototype
void romaindeci();
void deciromain();
int main()
{
    int nNum=0;
    printf("Entrer 1 pour decimal a romain et 2 pour romain a d�icmal\n"); // demande a l'utilisateur de choisir entre decimal vers romain et de romain a decimal
    scanf("%d", &nNum);
    if (nNum==1)
        deciromain(nNum);
    else if (nNum==2)
        romaindeci();



    system("pause");
    return 0;
  }

// proc�dure romain ver decimal
void romaindeci(){
  int nTab[100],nLongueur,i,j,nDeci;
  char cRom[100];
  printf("Entrer un chiffre romain:\n");
  scanf("%s",cRom);
  nLongueur=strlen(cRom); // prise de la longueur du tableau cRom
  for(i=0; i<nLongueur; i++)    // Boucle de verification de caract�re et placement d'un d�cimal qui lui correcpond dans le tableau nTab
    {
     if(cRom[i]=='I')
        nTab[i]=1;
     else if(cRom[i]=='V')
        nTab[i]=5;
     else if(cRom[i]=='X')
        nTab[i]=10;
     else if(cRom[i]=='L')
        nTab[i]=50;
     else if(cRom[i]=='C')
        nTab[i]=100;
     else if(cRom[i]=='D')
        nTab[i]=500;
     else if(cRom[i]=='M')
        nTab[i]=1000;
 }
     nDeci=nTab[nLongueur-1]; // prise du d�cimal de la chaine
     for(i=nLongueur-1; i>0; i--)   // boucle de comparaison des d�cimal pour les cas 900/400/90/40/9/4 et leur addition pour donner le d�cimal du chiffre romain saisie
    {
     if(nTab[i]>nTab[i-1])
     nDeci=nDeci-nTab[i-1];
     else if(nTab[i]==nTab[i-1] || nTab[i]<nTab[i-1])
     nDeci=nDeci+nTab[i-1];
     }
     printf("Le chiffre en d�cimal est :"); // affichage du d�cimal
     printf("%d\n",nDeci);
}
// Proc�dure decimal vers romain
void deciromain(int nNum){

    printf("Entrer un nombre entre 1 et 3999\n"); // demande a l'utilisateur de faire une sasie en d�cimal
    scanf("%d", &nNum); // lecture de la saisie
    printf("les chiffres romain sont : ");
    while(nNum > 0) // boucle tant que qui continue tant que la sasie utilisateur est superieur a 0
    {
              if(nNum >= 1000)  // s�rie de if qui comparer la saise utilisateur entre chaque chffire correspodant a une unite� Romain et l'affiche si celle-ci est superieur
              {
                     printf("M"); // et effecture un soustration exemple : 2540 -1000 affiche M 1540-1000 afiche M 540-500 affiche D 40-40 affiche XL resultat MMDXL
                     nNum-=1000;
              }
              else if(nNum >= 900)
              {
                   printf("CM");
                   nNum-=900;
              }
              else if(nNum >= 500)
              {
                   printf("D");
                   nNum-=500;
              }
              else if(nNum >= 400)
              {
                   printf("CD");
                   nNum-=400;
              }
              else if(nNum >= 100)
              {
                   printf("C");
                   nNum-=100;
              }
              else if (nNum >= 90)
              {
                  printf("XC");
                  nNum-=90;
              }
              else if(nNum >= 50)
              {
                   printf("L");
                   nNum-=50;
              }
              else if(nNum >= 40)
              {
                   printf("XL");
                   nNum-=40;
              }
              else if(nNum >= 10)
              {
                   printf("X");
                   nNum-=10;
              }
              else if(nNum >= 9)
              {
                   printf("IX");
                   nNum-=9;
              }
              else if(nNum >= 5)
              {
                   printf("V");
                   nNum-=5;
              }
              else if(nNum >= 4)
              {
                   printf("IV");
                   nNum-=4;
              }
              else
              {
                  printf("I");
                  nNum-=1;
              }
    }
printf("\n");


}
