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

///Funcion que dibuja el dado (Dimension)
void DibujarDado(int posX, int posY){

         for(int x=0 ; x < 7; x++)

            {

                for(int y = 0; y < 3 ; y++){

                esperar(0);
                rlutil:: locate(x+posX,y+posY);
                rlutil::setBackgroundColor(15);
                cout<<" ";

                }

            }
    }

///Funcion del color
void Color(int x){

    rlutil::setColor(x);

    }

///Funcion MSLEEP
void esperar(int tiempo){

    rlutil::msleep(tiempo);
    }

///Funcion LOCATE
void cordenadas(int c,int t){
    rlutil::locate(c,t);
    }

///Funcion del color de fondo
void ColordeFondo(int c){

    rlutil::setBackgroundColor(c);

    }

///Funcion que dibuja TODOS los dados
void dibujar_dados(int vec[]){

    dibujar_dado_1(vec);

   dibujar_dado_2(vec);

   dibujar_dado_3(vec);

    dibujar_dado_4(vec);

   dibujar_dado_5(vec);

    dibujar_dado_6(vec);
}

///Dado 1
void dibujar_dado_1(int vec[]){
    switch(vec[0]){
    case 1:
     esperar(150);
     DibujarDado(30,7);
     cordenadas(33,8);
     ColordeFondo(15);
     Color(0);
     cout<<(char)254;
     Color(15);
     ColordeFondo(0);
        break;

    case 2:
    esperar(150);
    DibujarDado(30,7);
    cordenadas(31,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(35,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);


        break;
    case 3:
    esperar(150);
    DibujarDado(30,7);
    cordenadas(31,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(33,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(35,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;

    Color(15);
    ColordeFondo(0);


        break;
    case 4:
    esperar(150);
    DibujarDado(30,7);
    cordenadas(31,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(35,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(31,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    cordenadas(35,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);
        break;
    case 5:
    esperar(150);
    DibujarDado(30,7);
    cordenadas(31,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(35,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(31,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    cordenadas(35,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);
    cordenadas(33,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    Color(15);
    ColordeFondo(0);


    ColordeFondo(0);
    Color(15);
        break;
    case 6:
    esperar(150);
    DibujarDado(30,7);
    cordenadas(31,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(35,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(31,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(35,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(31,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(35,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;


    Color(15);
    ColordeFondo(0);


        break;
    }

}

///Dado 2
void dibujar_dado_2(int vec[]){
   switch(vec[1]){
   case 1:
    esperar(150);
     DibujarDado(42,7);
     cordenadas(45,8);
     ColordeFondo(15);
     Color(0);
     cout<<(char)254;
     Color(15);
     ColordeFondo(0);
        break;

    case 2:
    esperar(150);
    DibujarDado(42,7);
    cordenadas(43,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(47,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);


        break;
    case 3:
    esperar(150);
    DibujarDado(42,7);
    cordenadas(43,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(45,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(47,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;

    Color(15);
    ColordeFondo(0);


        break;
    case 4:
    esperar(150);
    DibujarDado(42,7);
    cordenadas(43,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(47,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(43,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    cordenadas(47,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);
        break;
    case 5:
    esperar(150);
    DibujarDado(42,7);
    cordenadas(43,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(47,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(43,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    cordenadas(47,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);
    cordenadas(45,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    Color(15);
    ColordeFondo(0);


    ColordeFondo(0);
    Color(15);
        break;
    case 6:
    esperar(150);
    DibujarDado(42,7);
    cordenadas(43,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(47,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(43,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(47,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(43,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(47,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;


    Color(15);
    ColordeFondo(0);


        break;
    }
}

///Dado 3
void dibujar_dado_3(int vec[]){
   switch(vec[2]){
   case 1:
    esperar(150);
     DibujarDado(54,7);
     cordenadas(57,8);
     ColordeFondo(15);
     Color(0);
     cout<<(char)254;
     Color(15);
     ColordeFondo(0);
        break;

    case 2:
    esperar(150);
    DibujarDado(54,7);
    cordenadas(55,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(59,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);


        break;
    case 3:
    esperar(150);
    DibujarDado(54,7);
    cordenadas(55,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(57,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(59,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;

    Color(15);
    ColordeFondo(0);


        break;
    case 4:
    esperar(150);
    DibujarDado(54,7);
    cordenadas(55,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(59,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(55,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    cordenadas(59,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);
        break;
    case 5:
    esperar(150);
    DibujarDado(54,7);
    cordenadas(55,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(59,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(55,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    cordenadas(59,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);
    cordenadas(57,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    Color(15);
    ColordeFondo(0);


    ColordeFondo(0);
    Color(15);
        break;
    case 6:
    esperar(150);
    DibujarDado(54,7);
    cordenadas(55,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(59,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(55,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(59,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(55,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(59,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;


    Color(15);
    ColordeFondo(0);


        break;
    }
}

///Dado 4
 void dibujar_dado_4(int vec[]){
   switch(vec[3]){
   case 1:
     esperar(150);
     DibujarDado(66,7);
     cordenadas(69,8);
     ColordeFondo(15);
     Color(0);
     cout<<(char)254;
     Color(15);
     ColordeFondo(0);
        break;

    case 2:
    esperar(150);
    DibujarDado(66,7);
    cordenadas(67,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(71,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);


        break;
    case 3:
    esperar(150);
    DibujarDado(66,7);
    cordenadas(67,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(69,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(71,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;

    Color(15);
    ColordeFondo(0);


        break;
    case 4:
    esperar(150);
    DibujarDado(66,7);
    cordenadas(67,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(71,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(67,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    cordenadas(71,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);
        break;
    case 5:
    esperar(150);
    DibujarDado(66,7);
    cordenadas(67,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(71,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(67,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    cordenadas(71,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);
    cordenadas(69,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    Color(15);
    ColordeFondo(0);


    ColordeFondo(0);
    Color(15);
        break;
    case 6:
    esperar(150);
    DibujarDado(66,7);
    cordenadas(67,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(71,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(67,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(71,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(67,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(71,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;


    Color(15);
    ColordeFondo(0);


        break;
    }
}

///Dado 5
void dibujar_dado_5(int vec[]){
   switch(vec[4]){
   case 1:
     esperar(150);
     DibujarDado(78,7);
     cordenadas(81,8);
     ColordeFondo(15);
     Color(0);
     cout<<(char)254;
     Color(15);
     ColordeFondo(0);
        break;

    case 2:
    esperar(150);
    DibujarDado(78,7);
    cordenadas(79,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(83,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);


        break;
    case 3:
    esperar(150);
    DibujarDado(78,7);
    cordenadas(79,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(81,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(83,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;

    Color(15);
    ColordeFondo(0);


        break;
    case 4:
    esperar(150);
    DibujarDado(78,7);
    cordenadas(79,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(83,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(79,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    cordenadas(83,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);
        break;
    case 5:
    esperar(150);
    DibujarDado(78,7);
    cordenadas(79,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(83,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(79,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    cordenadas(83,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);
    cordenadas(81,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    Color(15);
    ColordeFondo(0);


    ColordeFondo(0);
    Color(15);
        break;
    case 6:
    esperar(150);
    DibujarDado(78,7);
    cordenadas(79,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(83,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(79,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(83,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(79,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(83,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;


    Color(15);
    ColordeFondo(0);


        break;
    }
}

///Dado 6
void dibujar_dado_6(int vec[]){
   switch(vec[5]){
   case 1:
     esperar(150);
     DibujarDado(90,7);
     cordenadas(93,8);
     ColordeFondo(15);
     Color(0);
     cout<<(char)254;
     Color(15);
     ColordeFondo(0);
        break;

    case 2:
    esperar(150);
    DibujarDado(90,7);
    cordenadas(91,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(95,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);


        break;
    case 3:
    esperar(150);
    DibujarDado(90,7);
    cordenadas(91,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(93,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(95,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;

    Color(15);
    ColordeFondo(0);


        break;
    case 4:
    esperar(150);
    DibujarDado(90,7);
    cordenadas(91,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(95,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(91,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    cordenadas(95,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);
        break;
    case 5:
    esperar(150);
    DibujarDado(90,7);
    cordenadas(91,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(95,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)220;
    cordenadas(91,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    cordenadas(95,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)223;
    Color(15);
    ColordeFondo(0);
    cordenadas(93,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    Color(15);
    ColordeFondo(0);


    ColordeFondo(0);
    Color(15);
        break;
    case 6:
    esperar(150);
    DibujarDado(90,7);
    cordenadas(91,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(95,7);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(91,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(95,9);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(91,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;
    cordenadas(95,8);
    ColordeFondo(15);
    Color(0);
    cout<<(char)254;


    Color(15);
    ColordeFondo(0);


        break;
    }
}

///PANTALLA DE CARGA
void dados_interfaz(){

    cordenadas(65,10);

     cordenadas(65,10);

     Color(5);
     DibujarDado(30,15);
     cordenadas(33,16);
     ColordeFondo(15);       ///DADO NUMERO 1
     Color(0);
     cout<< (char)254;
     ColordeFondo(0);

///--------------------------------------------------------------------------

     cordenadas(65,10);



     DibujarDado(45,15);
     cordenadas(50,17);
     ColordeFondo(15);
     cout<<(char)223;       ///DADO NUMERO 2
     Color(0);
     ColordeFondo(0);

     cordenadas(46,15);
     ColordeFondo(15);
     Color(0);
     cout<<(char)220;
     ColordeFondo(0);

///--------------------------------------------------------------------------

     cordenadas(65,10);

     Color(7);

     DibujarDado(60,15);
     cordenadas(63,16);
     ColordeFondo(15);
     Color(0);
     cout<<(char)254;       ///DADO NUMERO 3
     cordenadas(61,17);
     ColordeFondo(15);
     Color(0);
     cout<<(char)223;

     cordenadas(65,15);
     ColordeFondo(15);
     Color(0);
     cout<<(char)220;
     ColordeFondo(0);

     ///--------------------------------------------------------------------------


     DibujarDado(75,15);
     cordenadas(76,15);
     ColordeFondo(15);
     Color(0);
     cout<<(char)220;
     cordenadas(80,15);
     ColordeFondo(15);
     Color(6);              ///DADO NUMERO 4
     Color(0);
     cout<<(char)220;
     cordenadas(76,17);
     ColordeFondo(15);
     Color(0);
     cout<<(char)223;
     cordenadas(80,17);
     ColordeFondo(15);
     Color(0);
     cout<<(char)223;
     ColordeFondo(0);

     cordenadas(65,10);

     ///-------------------------------------------------------------------------
     DibujarDado(90,15);
     cordenadas(91,15);
     ColordeFondo(15);
     Color(0);
     cout<<(char)220;
     cordenadas(95,15);
     ColordeFondo(15);
     Color(0);
     cout<<(char)220;
     cordenadas(93,16);
     ColordeFondo(15);      ///DADO NUMERO 5
     Color(0);
     cout<<(char)254;
     ColordeFondo(15);
     cordenadas(91,17);
     ColordeFondo(15);
     Color(0);
     cout<<(char)223;
     cordenadas(95,17);
     ColordeFondo(15);
     Color(0);
     cout<<(char)223;

  ///----------------------------------------------------------------

     DibujarDado(105,15);
     cordenadas(106,15);
     ColordeFondo(15);
     Color(0);
     cout<<(char)254;
     cordenadas(106,16);
     ColordeFondo(15);
     Color(0);
     cout<<(char)254;
     cordenadas(106,17);
     ColordeFondo(15);
     Color(0);
     cout<<(char)254;
     cordenadas(110,15);
     ColordeFondo(15);
     Color(0);
     cout<<(char)254;
     cordenadas(110,16);
     ColordeFondo(15);
     Color(0);
     cout<<(char)254;
     cordenadas(110,17);
     ColordeFondo(15);
     Color(0);
     cout<<(char)254;
     Color(0);


    ColordeFondo(0);
    rlutil::trows();




}
