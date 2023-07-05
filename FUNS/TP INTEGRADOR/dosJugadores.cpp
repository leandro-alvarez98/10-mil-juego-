#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <string.h>
#include "rlutil.h"
#include "funcionesPuntos.h"
#include "repertorioVisual.h"
#include "dosJugadores.h"
#include "dibujar_dados.h"

using namespace std;

///Funcion modo_dos_jugadores
void modo_dos_jugadores(int record[],char ganador[]){

    Color(10);

        char jugador_uno[30],jugador_dos[30];

        rlutil::locate(40,5);
        cout<<"BIENVENIDO A LA MODALIDAD DOS JUGADORES"<<endl;

        rlutil::locate(40,8);
        cout<<"Ingrese el nombre del jugador numero uno: "<<endl;

        rlutil::locate(40,10);
        cin.getline(jugador_uno,30,'\n');

        rlutil::locate(40,12);
        cout<<"Ingrese el nombre del jugador numero dos: "<<endl;

        rlutil::locate(40,14);
        cin.getline(jugador_dos,30,'\n');

        ///Empieza el Juego

        int rondas=1, puntos_2=0, puntos_1=0;

        int cont=0;





        do{

            if(cont%2==0){

                ///Primer Jugador

                interfaz_turno (jugador_uno,jugador_dos,rondas,puntos_1,puntos_2);

                puntos_1=juego(jugador_uno,puntos_1,rondas);

                cont++;

            }

            if(cont%2!=0){

                ///Segundo Jugador

                interfaz_turno (jugador_dos,jugador_uno,rondas,puntos_2,puntos_1);

                puntos_2=juego(jugador_dos,puntos_2,rondas);

                cont++;
            }

            rondas++;

        }while (rondas<=10 && puntos_1!=10000 && puntos_2!=10000);

        if(puntos_1>puntos_2){

            intefaz_ganar(jugador_uno,puntos_1);

            if(record[0]==0 || rondas < record[0]){
                record[0]=rondas;
                record[1]=puntos_1;
                for (int i=0;i<30;i++){
                    ganador[i]=jugador_uno[i];
                }

            }

            rlutil::cls();
            return ;

        }else if (puntos_2 > puntos_1) {
            intefaz_ganar(jugador_dos,puntos_2);

            if(record[0]==0 || rondas < record[0]){
                record[0]=rondas;
                record[1]=puntos_2;
               for (int i=0;i<30;i++){
                    ganador[i]=jugador_dos[i];
                }
            }

            rlutil::cls();
            return ;


        }else if (puntos_1==puntos_2){

            empate(puntos_1,puntos_2,jugador_uno,jugador_dos);
            rlutil::cls();
            return ;

        }
        rlutil::cls();
    }

///Funcion juego
    int juego(char nombre [],int puntos_total,int rondas){


        int lanzamiento=0;
        int dados[6];
        int valores[4]={0};
        int puntaje=0;
        bool verdadero=true;


        rlutil::cls();


        interfaz(nombre,rondas,puntos_total,lanzamiento);


        if(seguir_tirando()){

            do{

                lanzamiento++;

                interfaz(nombre,rondas,puntos_total,lanzamiento);

                tirar_dados(dados,6);

                dibujar_dados(dados);

                ///Obtiene puntaje

                if(sexteto(contar_unos(dados,6))==true){
                    rlutil::cls();
                    return  puntos_total=10000;
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

            }while((verdadero==true)&&(puntaje!=0));

            puntos_total+=puntaje; ///Acumula puntajes entre rondas

            if(comprobar_limite(puntos_total)==true){
                puntos_total-=puntaje;
            }
            if(puntaje==0){
                cero_puntos(puntaje);
            }

            return puntos_total;

        }
        else {
            no_acumula_puntos(rondas,puntos_total);
            return puntos_total;
        }

        return 0;
    }





