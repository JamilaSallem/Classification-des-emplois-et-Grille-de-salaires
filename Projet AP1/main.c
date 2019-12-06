#include<stdio.h>
#include<string.h>
//Déclaration des tableauxet des variables globales.

char
CATEGORIES[8][5][10]={
                        {"E1","E2","E3","",""},
                        {"E4","E5","E6","E7",""},
                        {"E8","E9","E10","E11",""},
                        {"M1","M2","M3","",""},
                        {"M4","M5","M6","",""},
                        {"C1","C2","","",""},
                        {"C3","C4","","",""},
                        {"C5","C6","","",""}
                     };

float GRISAL[22][15]={
                    {474.697,477.017,479.335,481.653,483.971,486.289,488.607,490.925,493.242,495.560,497.878,500.196,502.514,504.837,507.691},
                    {494.877,497.521,499.839,502.157,504.475,506.793,509.111,511.429,513.746,516.064,518.382,520.700,523.018,525.336,527.850},
                    {516.063,519.040,521.358,523.676,525.994,528.312,530.630,532.947,535.265,537.583,539.901,542.219,544.537,546.855,549.017},
                    {562.158,565.532,568.622,571.713,574.803,577.894,580.984,584.075,587.165,590.256,593.346,596.437,599.527,602.618,606.610},
                    {604.543,608.574,611.664,614.755,617.845,620.936,624.026,627.117,630.207,633.298,636.388,639.479,642.569,645.660,648.515},
                    {646.883,651.569,654.659,657.750,660.840,663.932,667.021,670.112,673.202,676.293,679.383,682.474,685.564,688.655,690.837},
                    {689.177,694.516,697.607,700.697,703.788,706.878,709.969,713.059,716.150,719.240,722.331,725.421,728.512,731.602,733.132},
                    {768.508,773.317,779.498,785.679,791.860,798.041,804.222,810.403,816.584,822.765,828.946,835.127,841.308,847.489,856.412},
                    {810.898,816.361,822.542,828.723,834.904,841.085,847.266,853.447,859.628,865.809,871.990,878.171,884.353,890.534,898.823},
                    {853.241,859.358,865.539,871.720,877.901,884.082,890.263,896.444,902.625,908.806,914.987,921.168,927.349,933.530,941.164},
                    {895.625,902.399,908.580,914.761,920.942,927.123,933.304,939.485,945.666,951.847,958.028,964.209,970.390,976.571,983.550},
                    {767.145,771.955,778.136,784.317,790.498,796.679,802.860,809.041,815.222,821.403,827.584,833.765,839.496,846.127,855.049},
                    {809.461,814.924,821.105,827.286,833.467,839.648,845.829,852.010,858.191,864.372,870.553,876.734,882.915,889.096,897.385},
                    {851.728,857.844,864.025,870.206,876.387,882.568,888.749,894.930,901.111,907.292,913.473,919.654,925.835,932.016,939.652},
                    {894.038,900.811,906.992,913.173,919.354,925.536,931.717,937.898,944.079,950.260,956.441,962.622,968.803,974.984,981.962},
                    {1028.412,1036.643,1044.370,1052.096,1059.822,1067.549,1075.275,1083.001,1090.727,1098.454,1106.180,1113.906,1121.632,1129.359,1138.314},
                    {1120.418,1129.456,1138.727,1147.999,1157.270,1166.542,1175.813,1185.085,1194.356,1203.328,1212.899,1222.171,1231.442,1240.714,1252.296},
                    {1028.412,1036.643,1044.370,1052.096,1059.822,1067.549,1075.275,1083.001,1090.727,1098.454,1106.180,1113.906,1121.632,1129.359,1138.314},
                    {1120.418,1129.456,1138.727,1147.999,1157.270,1166.542,1175.813,1185.085,1194.356,1203.328,1212.899,1222.171,1231.442,1240.714,1252.296},
                    {1339.662,1351.467,1362.284,1373.100,1383.917,1394.734,1405.551,1416.367,1427.184,1438.001,1448.818,1459.635,1470.451,1481.268,1493.516},
                    {1558.904,1573.477,1585.839,1598.201,1610.563,1622.925,1635.287,1647.649,1660.011,1672.373,1684.735,1697.097,1709.459,1721.821,1734.735},
                    {1778.153,1795.490,1809.397,1823.304,1837.212,1851.119,1865.026,1878.933,1892.841,1906.748,1920.650,1934.562,1948.470,1962.377,1975.978}
                     };

char
FAMILLES[12][50]={"Achat","Commercial","Direction","Etudes","Finances & comptabilite","Informatique","Logistique","Maintenance","Production","Qualite","Ressources humaines","Services generaux"};

char
METIERS[12][13][100]={  {"Acheteur","Coursier","Demarcheur","Responsable achat","","","","","","","","",""},
                        {"Agent commercial","Assistant commercial ou marketing","Representant commercial ou marketing","Responsable commercial ou marketing ou vente","","","","","","","","",""},
                        {"Assistant administratif","Secretaire","","","","","","","","","","",""},
                        {"Agent methodes ou industrialisation ou conception","Chef de projet","Ingenieur methodes ou industrialisation ou conception","Responsable R&D","","","","","","","","",""},
                        {"Agent administratif de comptabilite ou aide comptable","Agent de recouvrement","Caissier","Comptable","Controleur de gestion ou financier","Responsable comtabilite","Responsable financier ou du controle de gestion","Tresorier","","","","",""},
                        {"Agent informaticien","Informaticien","Responsable informatique","","","","","","","","","",""},
                        {"Agent de transit","Aide-magasinier","Approvisionneur","Cariste","Chauffeur PL","Chauffeur PL avec semi-remorque","Chauffeur VL","Chef magasinier","Declarant en douanes","Magasinier","Manutentionnaire","Responsable approvisionnement","Responsable logistique"},
                        {"Agent de maintenance","Technicien de maintenance","Responsable de services generaux","Responsable maintenance","","","","","","","","",""},
                        {"Assistant d'essais, de mesures et d'instrumentation","Chef d'atelier ou UAP","Chef d'equipe ou de ligne de production","Chef de section","Conducteur de machines","Conducteur de machines polyvalent ou technicien de process","Operateur sur poste de production","Operateur sur chaine de  production","Responsable industriel ou d'usine","Responsable production","","",""},
                        {"Agent ou technicien de qualite","Agent d'entretien de batiments","Agent d'entretien de batiments specialise","Controleur qualite","Responsable qualite","","","","","","","",""},
                        {"Agent administratif et accueil ou social","Infirmier(e)","Ouvrier de nettoyage","Ouvrier specialise de nettoyage","Responsable hygiene, sante, securite et environnement","Responsable recrutement, formation, paie ou social","Responsable ressources humaines","Standariste","","","","",""},
                        {"Gardien","Agent de securite","Technicien de securite","Jardinier ordinaire","Jardinier","","","","","","","",""}
                      };

char
NIVEAUX_PROPOSES[12][13][10]={
                                {"N3","N2","N3","N4","","","","","","","","",""},
                                {"N3","N4","N4","N4-N5","","","","","","","","",""},
                                {"N2","N3","","","","","","","","","","",""},
                                {"N4","N6","N6","N6","","","","","","","","",""},
                                {"N3","N3","N3","N3","N3","N6","N6","N5-N7","","","","",""},
                                {"N3","N5-N6","N6","","","","","","","","","",""},
                                {"N2-N3","N2","N2","N1","N1","N1","N1","N4","N2","N3","N1","N5-N7","N6"},
                                {"N3","N2","N4-N5","N6","","","","","","","","",""},
                                {"N4","N4-N5","N4","N4","N2","N3","N1","N1","N6","N6","","",""},
                                {"N4","N1","N2","N3","N6","","","","","","","",""},
                                {"N2","N2","N1","N1","N4-N5","N4","N5-N7","N2","","","","",""},
                                {"N1","N1","N2","N1","N1","","","","","","","",""}
                              };

char NIVEAUX[8][6] = {"N1","N2","N3","N3bis","N4","N5","N6","N7"};

//Procedures: Partie I

//Procédures d'affichage
//*****************************************************//
void AfficheF()
{int i;
 printf("\n\n_______________________________\n\n)");
 printf("FAMILLES\n");
 printf("\n\n_______________________________\n\n)");
 printf("\n\n");
    for(i=0;i<12;i++)
        printf("''%s''\n",FAMILLES[i]);
 printf("\n\n_______________________________\n\n)");
}

void Affiche_M ()
{int i,j,stop;
printf("\n\n_______________________________\n\n)");
printf("METIERS\n");
printf("\n\n_______________________________\n\n)");
printf("\n\n");
    for(i=0;i<12;i++)
        {j=0;
         stop=1;
        do
          {if(strcmp(METIERS[i][j],"")!=0)
              {printf("''%s''\n",METIERS[i][j]);
               j++;
              }
            else stop=0;
           }
       while(j<13&&stop);

printf("\n");
         }
printf("\n\n_______________________________\n\n)");

}

void Affiche_N ()
{int i;
printf("\n\n_______________________________\n\n)");
printf("NIVEAUX\n");
printf("\n\n_______________________________\n\n)");
printf("\n\n");
    for(i=0;i<8;i++)
     printf("''%s''\n",NIVEAUX[i]);

     printf("\n\n_______________________________\n\n)");

}

void Affiche_C ()
{int i,j,stop;

printf("\n\n_______________________________\n\n)");
printf("CATEGORIES\n");
printf("\n\n_______________________________\n\n)");
 printf("\n\n");
 for(i=0;i<8;i++)
   {j=0; stop=1;
     do
    {if(strcmp(CATEGORIES[i][j],"")!=0)
      {printf("''%s''\n",CATEGORIES[i][j]);
       j++;}
     else stop=0;
    }
    while(j<5&&stop);
    printf("\n");
   }
printf("\n\n_______________________________\n\n)");
}
//*****************************************************//

void Q2()
{//Q2//Etant donnee une famille F choisie par l'utulisateur, trouver puis afficher tous les métiers lui appartenant.
    int i,existe,l,j;
    char F[50];

  AfficheF();
    existe=0;
    do {
        printf("\n\tDonner une famille:\n");
        fflush(stdin);
        gets(F);
        i=0;
        while(i<12&&!existe)
            {if(strcmp(F,FAMILLES[i])==0)
                {existe=1;
                l=i;
                }
            i++;
            }
       }
       while(!existe);

    printf("Pour la famille F=''%s'', les metiers lui appartenant sont:\n\n",F);

    j=0;
    while(strcmp(METIERS[l][j],"")!=0&&j<13)
        {printf("''%s''\n",METIERS[l][j]);
         j++;
        }
}

void Q3()
{//Q3//Etant donné un métier choisi par l'utilisateur, trouver puis afficher la famille F et le niveau N correspondants.
    int i,j,l,k,existe;
    char M[100];
    Affiche_M ();

    existe=0;
    do
        {
        printf("Donner un metier:\n");
        fflush (stdin);
        gets(M);
        i=0;
        while (i<12&&!existe)
          {j=0;
            do
               {if(strcmp(M,METIERS[i][j])==0)
                  {existe=1;
                   l=i;
                   k=j;
                  }
                j++;
                }
            while(j<13&&!existe);
            i++;
           }
        }
        while(!existe);
    printf("Pour le metier M=''%s'',  la famille et le niveau correspondants sont respectivement F=''%s'' et N=''%s''.\n\n",M,FAMILLES[l],NIVEAUX_PROPOSES[l][k]);
}

void Q4()
{//Q4//Etant donné un niveau N choisi par l'utilisateur, trouver puis afficher tous les métiers correspondants ainsi que leur famille.
    int i,j,existe;
    char N[10];
    Affiche_N ();

 existe=0;
 do
 {printf("Donner un niveau:\n");
  fflush(stdin);
  gets(N);

i=0;
while(i<12&&!existe)
   {j=0;
    do
    {if((strcmp(N,NIVEAUX_PROPOSES[i][j])==0)||(strstr(NIVEAUX_PROPOSES[i][j],N)))
      existe=1;
      j++;
    }
    while(j<13||!existe);
   }
 }
 while(!existe);

 if(strcmp(N,"N3bis")!=0)
printf("Pour le niveau N=''%s'', les metiers (ainsi que leur famille) correspondants sont:\n\n",N);
 else
printf("Pour le niveau N=''N3bis'', Il n'y a pas de metiers correspondants.\n\n");

for(i=0;i<12;i++)
   for(j=0;j<13;j++)
    if((strcmp(N,NIVEAUX_PROPOSES[i][j])==0)||(strstr(NIVEAUX_PROPOSES[i][j],N)))
      printf("''%s'' (''%s'')\n",METIERS[i][j],FAMILLES[i]);


}

void Q5()
{//Q5//Etant donné une catégorie C choisi par l'utilisateur, trouver puis afficher tous les métiers correspondants
    int i,j,existe,l;
    char C[10];

 Affiche_C ();

existe=0;
do
{printf("Donner une categorie:\n");
 fflush(stdin);
 gets(C);

i=0;
while(i<8||!existe)
 {j=0;
  do
  {if(strcmp(CATEGORIES[i][j],C)==0)
    {existe=1;
     l=i;}
   j++;
  }
  while(j<4||!existe);
i++;
 }
}
while(!existe);

if(l!=3)
printf("Pour la categorie C=''%s'' qui appartient au niveau ''%s', l'ensemble des metiers lui correspondants sont:\n\n",C,NIVEAUX[l]);
else
printf("Pour la categorie C=''%s'' qui appartient au niveau ''%s'', il n'y a pas de metiers correspondants.\n\n",C,NIVEAUX[l]);

for(i=0;i<12;i++)
    for(j=0;j<13;j++)
      if((strcmp(NIVEAUX[l],NIVEAUX_PROPOSES[i][j])==0)||(strstr(NIVEAUX_PROPOSES[i][j],NIVEAUX[l])))
       printf("''%s''\n",METIERS[i][j]);

}

void Q6()
{//Q6//Trouver et afficher le niveau NMAX (prmier apparu) le plus redondant ainsi que ses catégories et ce par rapport à tous les métiers.
    int i,j,l,k,cpt,cptmax;
    char NMAX[10];
strcpy(NMAX,NIVEAUX[0]);
cptmax=0;
l=0;
for(i=0;i<8;i++)
    {cpt=0;
        for(j=0;j<12;j++)
        {k=0;
         while(k<13&&strcmp(NIVEAUX_PROPOSES[j][k],"")!=0)
         {if ((strcmp(NIVEAUX[i],NIVEAUX_PROPOSES[j][k])==0)||(strstr(NIVEAUX_PROPOSES[j][k],NIVEAUX[i])))
              cpt++;
         k++;
         }
        }
    if (cpt>cptmax)
    {cptmax=cpt;
     strcpy(NMAX,NIVEAUX[i]);
     l=i;
    }
    }

printf ("Le niveau ''%s'' est associe a %i metiers du tableau METIERS et lui sont associes dans CATEGORIES les categories ",NMAX,cptmax);

printf(" ''%s''",CATEGORIES[l][0]);
i=1;
while(i<4&&strcmp(CATEGORIES[l][i],"")!=0)
   {if(strcmp(CATEGORIES[l][i+1],"")!=0)
       printf(", ''%s''",CATEGORIES[l][i]);
    else
    printf(" et''%s''.",CATEGORIES[l][i]);

    i++;
   }

}

void Q7()
{//Q7//Trouver et afficher la famille FMAX (première apparue) dont les métiers associés leur correspondent le maximum de niveaux. Quand un niveau figure deux fois ou plus dans le tableau NIVEAUX_PROPOSES pour des metiers de la meme famille, on le compte une seule fois.
    int i,j,l,k,existe,cpt,cptmax,nbre_met;
    char FMAX[50];
strcpy(FMAX,FAMILLES[0]);
cptmax=0;
l=0;
for(i=0;i<12;i++)
   {cpt=0;
    j=0;
      {while(j<13&&strcmp(NIVEAUX_PROPOSES[i][j],"")!=0)
           {existe=0;
             k=j-1;
             while(k>=0&&!existe)
             {if((strcmp(NIVEAUX_PROPOSES[i][j],NIVEAUX_PROPOSES[i][k])==0)||(strstr(NIVEAUX_PROPOSES[i][k],NIVEAUX_PROPOSES[i][j])))
                  existe=1;
             k--;
             }
            if(!existe&&!strstr(NIVEAUX_PROPOSES[i][j],"-"))
                cpt++;
            else if (!existe&&strstr(NIVEAUX_PROPOSES[i][j],"-"))
                cpt=cpt+2;

            j++;
           }
      }


if (cpt>cptmax)
    {cptmax=cpt;
     strcpy(FMAX,FAMILLES[i]);
     l=i;

     j=0;
     nbre_met=0;
     while(j<13&&strcmp(NIVEAUX_PROPOSES[l][j],"")!=0)
     {nbre_met++;
      j++;
     }
    }

   }
printf("La famille ''%s'' a laquelle correspondent dans METIERS les %i metiers ",FMAX,nbre_met);
printf("''%s''",METIERS[l][0]);

i=1;
while(i<13||strcmp(METIERS[l][i],"")!=0)
   {if(strcmp(METIERS[l][i+1],"")!=0)
        printf(", ''%s''",METIERS[l][i]);
    else
        printf(" et''%s''",METIERS[l][i]);

    i++;
   }

printf(" dont les niveaux respectifs proposes dans le tableau NIVEAUX_PROPOSES sont ");
printf("''%s''",NIVEAUX_PROPOSES[l][0]);

i=1;
while(i<13||strcmp(NIVEAUX_PROPOSES[l][i],"")!=0)
   {if(strcmp(NIVEAUX_PROPOSES[l][i+1],"")!=0)
       printf(", ''%s''",NIVEAUX_PROPOSES[l][i]);
    else
    printf(" et''%s''",NIVEAUX_PROPOSES[l][i]);

    i++;
   }

printf(", admet en totalite %i niveaux.",cptmax);


}

void Q8()
{//Q8// Trouver et afficher les métiers qui peuvent etre à la fois proposés par GE et PME.
    int i,j;
  printf("les metiers qui peuvent etre proposes a la fois par GE et PME sont:\n\n");

   for(i=0;i<12;i++)
        {j=0;
         while(j<13&&strcmp(NIVEAUX_PROPOSES[i][j],"")!=0)
          {if (strstr(NIVEAUX_PROPOSES[i][j],"-"))
            printf("''%s''\n",METIERS[i][j]);
           j++;
          }
         }
}

//Procedures: Partie II

char C[4];
char N[6];
int D,A,pC,pN;

void lireD()
{
do
{
printf("D= ");
fflush(stdin);
scanf("%d",&D);
}
while(D<1||D>15);
}

void lireA()
{
do
{
printf("A= ");scanf("%d",&A);
}
while(A<1||A>30);

    if ((A%2)==0)
        D=(A/2);
    else
        D=(A/2)+1;
}

void find_pC()
{//Déterminer la position d'une catégorie donnée.
int i,j,x=0;
pC=-1;
i=0;
while(i<8&&pC==-1)
    {j=0;
        while (j<5&&pC==-1&&strcmp(CATEGORIES[i][j],"")!=0)
           {if (strcmp(CATEGORIES[i][j],C)==0)
                {pC=x; //x =Position de la catégorie.
                }
             else
                x++;
             j++;
           }
           i++;
    }
}


void find_C()
{ //Chercher une catégorie par son indice (pC) et l'affecter à une chaine donnée.
int i,j,x=0;
for(i=0;i<8;i++)
    {j=0;
        while (j<5&&strcmp(CATEGORIES[i][j],"")!=0&&strcmp(CATEGORIES[i][j],"C6")!=0)
           {if (x==pC)
                strcpy(C,CATEGORIES[i][j]);
            else
                x++;
             j++;
           }
    }
}

void lireC()
{
do
{
printf("C= ");scanf("%s",C);
find_pC();
}
while (pC==-1);
}

void lireN()
{
do
{
int i,x=0;
printf("N= ");scanf("%s",N);
pN=-1;
i=0;
while (i<8&&pN==-1)
   {if (strcmp(NIVEAUX[i],N)==0)
       pN=x;
    else
       x++;
       i++;
    }
}
while (pN==-1);
}

void Q11()
{
int i,j;
for (i=0;i<22;i++)
    {for(j=0;j<15;j++)
      {printf("%.3f ",GRISAL[i][j]);
      }
     printf("\n");
    }
}

void Q12()
{
lireC();
lireD();
printf("Pour un salarie qui a la categorie ''%s'' et qui a le degre ''%i'', le salaire = %.3f DT\n",C,D,GRISAL[pC][D-1]);
}

void Q13()
{
int i,j,cmax,dmax;
float smax=0;
for(i=0;i<22;i++)
    {for(j=0;j<15;j++)
         {if (GRISAL[i][j]>smax)
             {smax = GRISAL[i][j];
              cmax = i;
              dmax = j;
             }
         }
    }
pC = cmax;
find_C();
printf("SMAX = %.3f DT\n",smax);
printf("CMAX = %s\n",C);
printf("DMAX = D%d\n",dmax+1);
}

void Q14()
{lireA();
 lireC();
 printf("Pour un employe qui a un nombre d'annees d'experience A= %i ans et une categorie C= %s, son degre est donc D = %d",A,C,D);
 printf(" et son salaire est S = %.3f DT\n",GRISAL[pC][D-1]);
}

void Q15()
{int i;
lireA();
lireN();
printf("Pour un employe qui a un nombre d'annees d'experience A= %d ans et un niveau N= %s, son degre est donc D = %d, l'ensemble des categories possibles (ainsi que les salaires correspondants) sont:\n",A,N,D);

  i=0;
  while(i<4&&strcmp(CATEGORIES[pN][i],"")!=0)
     {strcpy(C,CATEGORIES[pN][i]);
      find_pC();
      printf("%s(%.3f DT)\n",C,GRISAL[pC][D-1]);
      i++;
     }
}

void Q16()
{//Chercher la catégorie qui admet la plus grande augmentation de salaire au fil des 30 ans.
    int i,j,cmax,dmax,CMAX,DMAX;
    float aumax=0,AUMAX=0;
    for(i=0;i<22;i++)
       {for(j=0;j<14;j++)
           {if ((GRISAL[i][j+1]-GRISAL[i][j])>aumax)
              {aumax = (GRISAL[i][j+1]-GRISAL[i][j]);
               dmax = j+1;
               cmax = i;
              }
           }
        if(aumax>AUMAX)
          {AUMAX=aumax;
           CMAX=cmax;
           DMAX=dmax;
          }
        }
    pC = CMAX;
    find_C();
     printf("Pour la categorie %s dont le salaire du degre D= %d est %.3f DT et le salaire du degre D= %d est %.3f DT, on a une augmentation de %.3f DT.\n",C,DMAX,GRISAL[pC][DMAX-1],DMAX+1,GRISAL[pC][DMAX],AUMAX);
}

void main()
{//LES 2 MENUS
    int run = 1,choix;
     while (run)
        {
        printf("\n_________________________________\n");
        printf("\nMENU Partie I\n\n");
        printf("\n_________________________________\n");
        printf("    2_Q2\n");
        printf("    3_Q3\n");
        printf("    4_Q4\n");
        printf("    5_Q5\n");
        printf("    6_Q6\n");
        printf("    7_Q7\n");
        printf("    8_Q8\n");
        printf("\n_________________________________\n");
        printf("\nMENU Partie II\n\n");
        printf("\n_________________________________\n");
        printf("    11_Q1\n");
        printf("    12_Q2\n");
        printf("    13_Q3\n");
        printf("    14_Q4\n");
        printf("    15_Q5\n");
        printf("    16_Q6\n");
        printf("\n_________________________________\n");
        printf("\n    0) Quitter\n");
        printf("\nSaisir votre choix: ");
        fflush(stdin);scanf("%d",&choix);
        printf("\n%d\n",choix);
        switch (choix)
           {case 2: { Q2(); } break;
            case 3: { Q3(); } break;
            case 4: { Q4(); } break;
            case 5: { Q5(); } break;
            case 6: { Q6(); } break;
            case 7: { Q7(); } break;
            case 8: { Q8(); } break;
            case 11: { Q11(); } break;
            case 12: { Q12(); } break;
            case 13: { Q13(); } break;
            case 14: { Q14(); } break;
            case 15: { Q15(); } break;
            case 16: { Q16(); } break;
            case 0: { run=0; } break;
            default : {printf("Erreur de saisie.\n");} break;
        }
    }
}
