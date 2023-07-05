#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <string.h>
#include "rlutil.h"
#include "funcionesPuntos.h"
#include "repertorioVisual.h"
#include "unJugador.h"
#include "dibujar_dados.h"

using namespace std;

///Funcion menuUnJugador
void menuUnJugador(){
char jugador[30];
        linea2(30,6,60,15);
        rlutil :: locate (53,10);
        cout<<"NOMBRE: ";
        cin.getline(jugador,30,'\n');
        rlutil:: cls();

        rlutil::hidecursor();
        if(jugada(jugador)){
            menu();
        }

}

///FUNCION jugada
bool jugada(char nombre[]){
    Color(10);

        const int tamanio=6;

        bool terminar=false,verdadero;

        int dados[tamanio],rondas=0,lanzamiento,valores[4]={0};

        ///Puntajes
        int puntaje_total=0,puntaje;

        while(rondas<10){
            lanzamiento=0;

            puntaje=0;

            rondas++;

            interfaz(nombre,rondas,puntaje_total,lanzamiento);

            if(seguir_tirando()){

                    do{

                        lanzamiento++;

                        interfaz(nombre,rondas,puntaje_total,lanzamiento);

                        tirar_dados(dados,6);


                        dibujar_dados(dados);

                        ///Obtiene puntaje

                        if(sexteto(contar_unos(dados,6))==true){
                            rlutil::cls();
                            intefaz_ganar(nombre,puntaje_total);
                            return true;
                            }
                            else {

                                cargar_puntos(valores,dados,6);

                                puntaje+=puntos(valores,4);

                                if (puntos(valores,4)==0){ ///Evalua si no suma nada

                                    puntaje=0;

                                    rlutil::locate(10,14);
                                    cout << " NO OBTUVISTE NINGUNA COMBINACION" << endl;
                                }

                            }


                        puntaje_acumulado(puntaje);
                        linea();

                        if (puntaje!=0){ /// No muestra ninguna combinacion si no hay puntos

                     rlutil::locate(2,14);

                     combinacion(puntos(valores,4),valores,4);

                     verdadero=seguir_tirando();
                     }

                     rlutil::cls();///Limpia la pantalla despues de cada lanzamiento o ronda

                    }while((verdadero==true)&&(puntaje!=0));//creo que el terminar ya no sirve mas!!!


                    puntaje_total+=puntaje; ///Acumula puntajes entre rondas

                    if(comprobar_limite(puntaje_total)==true){
                        rlutil::locate(46,13);
                        cout<< "TE PASASTE DE LOS 10 MIL !" << endl;
                        puntaje_total-=puntaje;
                    }
                    if(puntaje_total==10000){
                        intefaz_ganar(nombre,puntaje_total);
                        return true;
                    }

                siguente_ronda(rondas,puntaje_total,puntaje);


            }else {siguente_ronda(rondas,puntaje_total,puntaje);}

        }
        if ((rondas>10)||(puntaje_total!=10000) ||(terminar==false)){
            interfaz_perdedor();
        }
    }
