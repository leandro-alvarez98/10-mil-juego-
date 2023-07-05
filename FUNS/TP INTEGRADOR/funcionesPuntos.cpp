#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <string.h>
#include "rlutil.h"
#include "funcionesPuntos.h"
#include "repertorioVisual.h"
#include "unJugador.h"
#include "dosJugadores.h"
#include "dibujar_dados.h"

using namespace std;

///Funcion comprobar_limite
bool comprobar_limite(int total){
    if(total>10000){
    return true;
    }
    return false;
}

///Funcion tirar dados
void tirar_dados(int dados[],int tam){
 srand(time(0));///Tira dados

    Color(10);
    for (int i=0; i<=5; i++){
        dados[i]=1+(rand()%6);
        }


        /*
    for (int i=0; i<=5; i++){
        dados[i]=1;
        }
    */
    /*
    dados[0]=1;
    dados[1]=2;
    dados[2]=3;
    dados[3]=4;
    dados[4]=5;
    dados[5]=6;
    */

}

///Funcion mostrar dados
void mostrar_dados (int dados[],int tamanio){

 rlutil::locate(0,11);
 for (int i=0; i<=5; i++){ ///Los muestra
    cout<<" DADO N# "<<i+1<<" valor "<<dados[i]<<endl;
    }
}

///FUNCION es_uno
bool es_uno(int num){

	if (num==1){
		return true;
	}
	return false;
}

///FUNCION contar_unos
int contar_unos(int vec[],int tam){

	int cantidad=0;

	 for (int i=0; i<tam; i++){
	 	if (es_uno(vec[i])) {
	 		cantidad++;
		 }

	 }
	 return cantidad;
}

///FUNCION jugada_de_uno
int jugada_de_uno(int cantidad){
    int puntos=0;
    switch(cantidad){
    case 1:
        puntos=100*cantidad;
        break;
    case 2:
        puntos=100*cantidad;
        break;
    case 3:
        puntos=1000;
        break;
    case 4:
        puntos=2000;
        break;
    case 5:
        puntos=2000;
        break;
    }
    return puntos;
}

///Funcion sexteto
bool sexteto(int cantidad){
    if(cantidad==6){

        return true;
    }
    return false;
}

///Funcion es_cinco
bool es_cinco (int num){

    if (num==5){
        return true;
    }
    return false;
}

///Funcion contar_cincos
int contar_cincos (int vec[],int  tam){
    int cant5=0;

    for(int i=0;i<tam;i++){

        if(es_cinco(vec[i])){
        cant5++;
        }
    }
 if (cant5 <2){
    return cant5;
    }else {
    return 0;
    }
}

///Funcion es_escalera (comprueba si una tirada de dados NO es una escalera
bool  es_escalera(int vec[],int tam){
    bool escalera=true;

for (int i=1;i<tam;i++){
    if (vec[i]<= vec[i-1]){
        escalera=false;
    }
}
return escalera;
}

///Funcion puntos (Analiza el vector con los puntos en busca del mayor valor)
 int puntos (int vec[],int tamanio){

     int may=0;

        for (int i=0;i<4;i++){
             if (vec[i]>may){
             may=vec[i];
            }

        }

     return may;
    }

///Funcion Trio
int repetidos(int vec[],int tamanio){
        int rep=1,n,r=0,r2=0;


     for (int i=0;i<5;i++){
            n=vec[i];
            rep=1;

         for (int j=i+1;j<6;j++){
            if(n==vec[j]&& n!=0){
            rep++;
            vec[j]=0;
            }
            }
            if((rep==3)&&(r==0)){
            r=vec[i];
            }
            else if((rep==3)&&(r2==0)){
            r2=vec[i];
            }

            }


            if(r>r2){
            return r;
            }
            else {
            if(r2>r){
            return r2;
            }

        }

        return 0;
    }

///Funcion jugada_perdedora
bool jugada_perdedora(int cant1, int cant5){

        if(cant1==0&&cant5==0){
            return 0;
        }

        return false;

    }

///Funcion cargar_puntos
void cargar_puntos(int vec[],int vect[],int tam){
        if (es_escalera(vect,6)){
            vec[0]=1500;
        }
        else{
        vec[0]=0;
        }
        vec[1]=jugada_de_uno(contar_unos(vect,6));

        vec[2]=contar_cincos(vect, 6)*50;

        vec[3]=(repetidos(vect,6))*100;


    }
