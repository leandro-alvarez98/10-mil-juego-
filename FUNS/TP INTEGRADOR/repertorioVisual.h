#ifndef REPERTORIOVISUAL_H_INCLUDED
#define REPERTORIOVISUAL_H_INCLUDED

void menu();

void linea2 (int x,int y,int ancho,int alto);

void linea ();

void siguente_ronda(int ronda,int puntos,int puntaje);

void no_acumula_puntos(int rondas, int puntos_total);

void interfaz(char jugador[], int ronda, int puntajetotal, int lanzamiento);

bool seguir_tirando();

void combinacion (int puntos,int vec[],int tam);

void puntaje_acumulado(int puntos);

void intefaz_ganar(char nombre[],int puntos);

void interfaz_perdedor();


void interfaz_turno(char nombre1[],char nombre2[],int rondas,int puntos1,int puntos2);

void empate(int puntos1,int puntos2,char jugador1[],char jugador2[]);

void cero_puntos(int puntos);

void max_puntaje(int& rond);

#endif // REPERTORIOVISUAL_H_INCLUDED
