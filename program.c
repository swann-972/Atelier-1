#include <stdio.h>
int main() {

int vitesse = 250;
int altitude = 280;
int compas = 140;
int variomètre = 0;


    printf("                                                                        \n");
    printf("                                                                        \n");
    printf(" ____KTS___                                              ____ALT___     \n");
    printf(" |      __|               HORIZON ARTIFICIEL             |   %3d__|     \n", altitude + 4);
    printf(" |        |                                              |        |     \n");
    printf(" |   %3d__|                                              |      __|     \n", vitesse + 30);
    printf(" |        |                      20                      |        |     \n");
    printf(" |      __|                  -----------                 |   %3d__|     \n", altitude + 2);
    printf(" |        |                      10                      |        |     \n");
    printf(" |   %3d__|           ------------------------           |      __|     \n", vitesse + 10);
    printf(" |        |                       0                      |        |     \n");
    printf(" |      __|<     =================|================     >|   %3d__|     \n", altitude);
    printf(" |        |                       0                      |        |     \n");
    printf(" |   %3d__|           ------------------------           |      __|     \n", vitesse - 10);
    printf(" |        |                      10                      |        |     \n");
    printf(" |      __|                  -----------                 |   %3d__|     \n", altitude - 2);
    printf(" |        |                      20                      |        |     \n");
    printf(" |.  %3d__|                                              |      __|     \n", vitesse - 30);
    printf(" |        |                                              |        |     \n");
    printf(" |      __|       ROLL                       PITCH       |   %3d__|     \n", altitude - 4);
    printf(" __________       0°                           0°        __________     \n");
    printf("  ___________________________________________________________________   \n");
    printf(" |                                                                   |  \n");
    printf(" |     %3d     %3d     %3d     > %3d <     %3d     %3d     %3d       |  \n", compas - 30, compas - 20, compas - 10, compas, compas + 10,  compas + 20,  compas + 30);
    printf(" |___________________________________________________________________|  \n");


    return 0;
}
