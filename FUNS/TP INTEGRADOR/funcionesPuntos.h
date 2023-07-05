#ifndef FUNCIONESPUNTOS_H_INCLUDED
#define FUNCIONESPUNTOS_H_INCLUDED

bool es_uno(int num);

int contar_unos(int vec[],int tam);

int jugada_de_uno(int cantidad);

int repetidos(int vec[],int tamanio);

bool es_cinco (int num);

int contar_cincos (int vec[],int  tam);

bool  es_escalera(int vec[],int tam);

bool sexteto(int cantidad);

int puntos(int vec[],int tamanio);

void mostrar_dados (int dados[],int tamanio);

bool comprobar_limite(int total);

void tirar_dados(int vec[], int tam);

bool jugada_perdedora(int cant1, int cant5);

void cargar_puntos(int vec[],int vect[],int tam);

#endif // FUNCIONESPUNTOS_H_INCLUDED
