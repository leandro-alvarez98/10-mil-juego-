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


    char ganador[30];

    int record[2]={0};

    bool primero=true;

///Funcion menu
void menu(){

///rlutil::trows(15,5);

Color(10);
linea2(52,6,19,0);
bool repite=true;
int y=0;
rlutil::hidecursor();

do{

    Color(10);
    ///Titulo
     cordenadas(58,5);
    cout<<"DIEZ MIL!"<<endl;

    ///Opciones

    cordenadas(53,8);

    cout<<"1- UN JUGADOR"<<endl;
    cordenadas(53,9);

    cout<<"2- DOS JUGADORES"<<endl;
    cordenadas(53,10);

    cout<<"3- MAXIMO PUNTAJE"<<endl;
    cordenadas(53,11);

    cout<<"4- SALIR"<<endl;



    ///Cursor
    cordenadas(51,8+y);

    cout<<(char)175<<endl;


    dados_interfaz();



    ///Movimiento cursor
        Color(10);

    switch(rlutil::getkey()){
    case 14:///Arriba
        cordenadas(51,8+y);
        cout<<" ";
        y--;
        if(y<0){y=3;}
        break;
    case 15:///Abajo
        cordenadas(51,8+y);
        cout<<" ";
        y++;
        if(y>3){y=0;}
        break;

    case 1: ///Enter (DESICION)
        switch(y){
        case 0: ///MODO UN JUGADOR

            rlutil::cls();
            menuUnJugador();
            break;
        case 1:

            rlutil::cls();

            modo_dos_jugadores(record,ganador);

            break;
        case 2:

            rlutil::cls();

            linea2(30,6,60,15);


            cordenadas(53,7);
            cout <<"MAXIMO PUNTAJE "<<endl;

            cordenadas(55,10);
            cout <<"JUGADOR "<<ganador<<endl;
            if(record[0]==0){
            cordenadas(55,13);
            cout << "RONDAS: "<< 0 << endl;
            }else {
            cordenadas(55,13);
            cout << "RONDAS: "<< record[0]-1<< endl;

            }

            cordenadas(55,16);
            cout << "PUNTOS "<< record[1]<< endl;

            rlutil::getkey();
            rlutil::cls();
            break;

         case 3: ///SALIR

            rlutil::cls();
            cordenadas(53,5);
            cout<<"Adios!";
            repite=false;
            break;
        }

        break;

    }
}while(repite);
}

///Funcion interfaz perdedor
void interfaz_perdedor(){
    Color(10);

    rlutil::cls();

    linea2(30,6,60,15);

    cordenadas(39,10);
    cout<<"NO ALCANZASTE LOS 10.000 PUNTOS!!! PERDISTE!";

    cordenadas(39,15);
    cout<<"PRESIONE CUALQUIER TECLA PARA VOLVER AL MENU";


    rlutil::getkey();
    for(int i=0; i<2;i++){
        cordenadas(2,29);
        esperar(800);
        cout<<"VOLVIENDO AL MENU.  "<<endl;
        cordenadas(2,29);
        esperar(800);
        cout<<"VOLVIENDO AL MENU.. "<<endl;
        cordenadas(2,29);
        esperar(800);
        cout<<"VOLVIENDO AL MENU..."<<endl;
    }
    rlutil::cls();



}

///Funcion interfaz_ganar
void intefaz_ganar( char nombre[],int puntos){

    Color(10);
    rlutil::cls();

    linea2(30,6,60,15);


    cordenadas(58,7);
    cout<<nombre<< endl;

    cordenadas(45,10);
    if(puntos==10000){
        cout<<"ALCANZASTE LOS 10.000 PUNTOS!!!";

    }

    cordenadas(57,15);
        cout<<"GANASTE"<<endl;

    cordenadas(36,28);
    cout<<"PRESIONE CUALQUIER TECLA PARA VOLVER AL MENU....";




    rlutil::getkey();
    for(int i=0; i<2;i++){
        Color(10);
        cordenadas(2,29);
        esperar(800);
        cout<<"VOLVIENDO AL MENU.  "<<endl;
        cordenadas(2,29);
        esperar(800);
        cout<<"VOLVIENDO AL MENU.. "<<endl;
        cordenadas(2,29);
        esperar(800);
        cout<<"VOLVIENDO AL MENU... "<<endl;
    }
    rlutil::cls();
}

///Funcion puntaje
void puntaje_acumulado(int puntos){
    Color(10);
    cordenadas(20,3);
    cout << "PUNTAJE TOTAL ACUMULADO DE LA RONDA ACTUAL: "  <<  puntos  << endl;
}

///Funcion linea
void linea (){
Color(10);
    cout<<"------------------------------------------------------------------------------------------------------------------------";
}

void linea2(int x,int y,int ancho,int alto){


///linea3(30,6,60,15);

    Color(10);

for (int i=x;i<=x+ancho;i++){
    esperar(10);
    rlutil::locate(i,y);
    cout << char (205);

    rlutil::locate(i,y+alto);
    cout << char (205);
}



for (int i=y;i<=y+alto;i++){
    esperar(10);
    rlutil::locate(x,i);
    cout << char (186);



    rlutil::locate(x+ancho,i);
    cout << char (186);
}



rlutil::locate(x,y);
cout << char (201);


rlutil::locate(x,y+alto);
cout << char (200);


rlutil::locate(x+ancho,y);
cout << char (187);

rlutil::locate(x+ancho,y+alto);
cout << char (188);


}

///Funcion siguiente ronda
void siguente_ronda(int ronda,int puntos,int puntaje){

 rlutil::cls();

    if (ronda<10){


        if(puntaje==0){

            cordenadas(46,13);
            cout << " NO OBTUVISTE NINGUNA COMBINACION " << endl;

            cordenadas(53,17);
            cout << " SUMAS 0 PUNTOS "<< endl;
        }

        cordenadas(52,10);
        cout << " siguiente ronda N" << ronda+1 << endl;

        linea2(30,6,60,15); //marco de las opciones

        cordenadas(36,28);
        cout<<" Presione cualquier tecla para volver a lanzar....";

        rlutil::getkey();
        rlutil::cls();
    }
}

///Funcion interfaz
void interfaz(char jugador[], int ronda, int puntajetotal, int lanzamiento){
    cordenadas(2,1);
        cout << " NOMBRE " << jugador << endl;

        cordenadas(30,1);
        cout << " RONDA N# " << ronda << endl;

        cordenadas(50,1);
        cout << " PUNTAJE TOTAL: " << puntajetotal<<endl;
        linea();

        cordenadas(2,3);
        cout << " LANZAMIENTO N# " << lanzamiento << endl;
        linea();
    }

///Funcion seguir_tirando
bool seguir_tirando(){
    Color(15);

    int y=0;

    bool repite=true;

    do{
        Color(15);
            ///Titulo
             cordenadas(50,15);
            cout<<"Tirar dados?"<<endl;

            ///Opciones
            cordenadas(54,16);
            cout<<"Si"<<endl;
            cordenadas(54,17);
            cout<<"No"<<endl;
            linea();
            ///Cursor
            cordenadas(53,16+y);
            cout<<(char)175<<endl;

            ///Movimiento
            switch(rlutil::getkey()){

            case 14:///Arriba
                cordenadas(53,16+y);
                cout<<" ";
                y--;
                if(y<0){y=1;}
                break;
            case 15:///Abajo
                cordenadas(53,16+y);
                cout<<" ";
                y++;
                if(y>1){y=0;}
                break;

            case 1: ///SI
                switch(y){

                case 0:
                    return true;

                case 1: ///NO
                    return false;
                }

                break;
                }
        }
    while(repite);
return true;
}

///Funcion combinacion (Envia un mensaje en base a qué combinacion obtuvo el usuario)
void combinacion (int puntos,int vec[],int tam){
        switch (puntos){

         case 1500:
            cout <<"OBTUVISTE UNA ESCALERA LARGA!" << endl;
            cout<<" PUNTOS +1500";
            break;

         case 50:
           cout << "SACASTE UN JUEGO DE CINCO!" << endl;
            cout<<" PUNTOS +50";
            break;

         case 100:
            if(vec[1]==100){
            cout<< "OBTUVISTE UN JUEGO DE UNO (1)!" << endl;
            cout<<" PUNTOS +100";

            }else if(vec[2]==100){
            cout<< "OBTUVISTE UN JUEGO DE DOBLE CINCO!" << endl;
            cout<<" PUNTOS +100";
            }
            break;


         case 200:
            if (vec[3]==200){
            cout << "OBTUVISTE UN TRIO DE 2!" << endl;
            cout<<" PUNTOS +200";

            }else if(vec[1]==200){
            cout << "OBTUVISTE UN JUEGO DE UNOS (2)!" << endl;
            cout<<" PUNTOS +200";

            }
            break;


         case 300:
            cout<< "OBTUVISTE UN TRIOO DE 3!" << endl;
            cout<<" PUNTOS +300";
            break;

         case 400:
            cout<< "OBTUVISTE UN TRIOO  DE 4!" << endl;
            cout<<" PUNTOS +400";
            break;

         case 500:
            cout<< "OBTUVISTE UN TRIOO  DE 5!" << endl;
            cout<<" PUNTOS +500";
            break;

         case 600:
           cout<< "OBTUVISTE UN TRIO DE 6!" << endl;
            cout<<" PUNTOS 600";
            break;

         case 1000:
            cout<< "OBTUVISTE UN TRIOO DE UNOS!" << endl;
            cout<<" PUNTOS +1.000";
            break;

         case 2000:
            cout<< "OBTUVISTE UN TRIOO DE UNOS AMPLIADO!" << endl;
            cout<<" PUNTOS +2.000";
            break;

         case 10000:
            cout<< "OBTUVISTE UN SEXTETOOO!" << endl;
            cout<<" PUNTOS +10.000";
            break;

        }

    }

///FUNCION interfaz_turno
void interfaz_turno(char nombre1[],char nombre2[],int rondas,int puntos1,int puntos2){




       rlutil:: cls();

        linea2(30,6,60,15);

       rlutil::locate(50,10);
       cout << " SIGUIENTE TURNO : "<< nombre1 << endl;


       rlutil::locate(51,15);
       cout << " SIGUIENTE RONDA N " << rondas << endl;


       rlutil::locate(51,23);
       cout << " PUNTAJE " << nombre1 << " " << puntos1 << "puntos" << endl;
       rlutil::locate(51,25);
       cout << " PUNTAJE " << nombre2 << " " << puntos2 << "puntos" << endl;


        rlutil::locate(36,28);
        cout<<" PRESIONE CUALQUIER TECLA PARA VOLVER A LANZAR....";

       rlutil::getkey();


    }

/// Funcion en caso de que no se acumulen puntos (1)
void  no_acumula_puntos(int rondas, int puntos_total){

    rlutil::cls();

    if (puntos_total==0){

        cordenadas(46,13);
        cout << " NO OBTUVISTE NINGUNA COMBINACION " << endl;

        cordenadas(53,17);
        cout << "SUMAS 0 PUNTOS "<< endl;

        linea2(30,6,60,15);

        cordenadas(36,28);
        cout<<" PRESIONE CUALQUIER TECLA PARA VOLVER A LANZAR....";

        rlutil::getkey();

        rlutil::cls();
    }
}

///Funcion Empate
void empate(int puntos1,int puntos2,char jugador1[],char jugador2[]){

 rlutil::cls();
 linea2(30,6,60,15);

    cordenadas (55,10);
    cout<<"EMPATARON"<< endl;

    cordenadas (43,15);
    cout << "jugador " << jugador1 <<" OBTUVO " <<puntos1<<" PUNTOS "<<endl;

    cordenadas (43,17);
    cout << "jugador " << jugador2 <<" OBTUVO " <<puntos2<<" PUNTOS "<<endl;


    rlutil::getkey();
}

/// Funcion en caso de que no se acumulen puntos (2)
void cero_puntos(int puntos){

    cordenadas(46,13);
    cout << " NO OBTUVISTE NINGUNA COMBINACION " << endl;
    cordenadas(53,17);
    cout << "SUMAS 0 PUNTOS "<< endl;

    linea2(30,6,60,15);

    cordenadas(36,28);
    cout<<"PRESIONE CUALQUIER TECLA PARA VOLVER A LANZAR....";

    rlutil::getkey();
    rlutil::cls();

}


