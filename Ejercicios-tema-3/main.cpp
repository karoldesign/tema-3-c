//
//  main.cpp
//  Ejercicios-tema-3
//
//  Created by Carolina Chamorro on 01/10/2019.
//  Copyright © 2019 Carolina Chamorro. All rights reserved.
//

#include <iostream>
using namespace std;

int ejercicio1(){
    cout << "Explicación: Cada tipo tiene un tamaño distinto. En un char caben valores de 0 a 255, int 4, Double 8 y Short in 2.";
    return 0;
}

typedef enum {
    noPresentado,
    suspenso,
    aprobado,
    notable,
    sobresaliente,
    matriculaHonor
} tCalificacion;

tCalificacion getCalificacion(int nota){
    if (nota == 0)
        return noPresentado;
    if (nota < 5)
        return suspenso;
    if (nota < 7)
        return aprobado;
    if (nota < 9)
        return notable;
    if (nota < 10)
        return sobresaliente;
    return matriculaHonor;
}

int ejercicio2() {
    int nota1 = 6;
    int nota2 = 8;
    tCalificacion calif1 = getCalificacion(nota1);
    tCalificacion calif2 = getCalificacion(nota2);
    return 0;
}

int ejercicio3(){
    return 0;
}
int ejercicio4(){
    return 0;
}
int ejercicio5(){
    return 0;
}
int ejercicio6(){
    return 0;
}
int ejercicio7(){
    return 0;
}
int ejercicio8(){
    return 0;
}
int ejercicio9(){
    return 0;
}
int ejercicio10(){
    return 0;
}
int ejercicio11(){
    return 0;
}
int ejercicio12(){
    return 0;
}
int ejercicio13(){
    return 0;
}
int ejercicio14(){
    return 0;
}
int ejercicio15(){
    return 0;
}
int ejercicio16(){
    return 0;
}
int ejercicio17(){
    return 0;
}
int ejercicio18(){
    return 0;
}
int ejercicio19(){
    return 0;
}
int ejercicio20(){
    return 0;
}
int ejercicio21(){
    return 0;
}
int ejercicio22(){
    return 0;
}

int main(int argc, const char * argv[]) {
    int ejercicio = 0;
    cout << "¿Qué ejercicio quieres ejecutar?: ";
    cin >> ejercicio;
    
    switch (ejercicio) {
        case 1:
            ejercicio1();
            break;
        case 2:
            ejercicio2();
            break;
        case 3:
            ejercicio3();
            break;
        case 4:
            ejercicio4();
            break;
        case 5:
            ejercicio5();
            break;
        case 6:
            ejercicio6();
            break;
        case 7:
            ejercicio7();
            break;
        case 8:
            ejercicio8();
            break;
        case 9:
            ejercicio9();
            break;
        case 10:
            ejercicio10();
            break;
        case 11:
            ejercicio11();
            break;
        case 12:
            ejercicio12();
            break;
        case 13:
            ejercicio13();
            break;
        case 14:
            ejercicio14();
            break;
        case 15:
            ejercicio15();
            break;
        case 16:
            ejercicio16();
            break;
        case 17:
            ejercicio17();
            break;
        case 18:
            ejercicio18();
            break;
        case 19:
            ejercicio19();
            break;
        case 20:
            ejercicio20();
            break;
        case 21:
            ejercicio21();
            break;
            
        default:
            cout << "No tengo ese ejercicio" << endl;
            break;
    }
    return 0;
}
