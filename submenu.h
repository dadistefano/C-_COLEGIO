#ifndef SUBMENU_H_INCLUDED
#define SUBMENU_H_INCLUDED

using namespace std;

void Entrada()
{
      system("cls");
      cout<<"______________________________________________ TP NRO 01 INTEGRADOR _______"<<endl;
      cout<<""<<endl;
      gotoxy(30,5);
      cout<<" BIENVENIDOS "<<endl;
      cout<<""<<endl;
      gotoxy(1,10);
      cout<<" INTEGRANTE: DIEGO DI STEFANO"<<endl;
      gotoxy(1,12);
      cout<<" MATERIA: LABORATORIO 2"<<endl;
      gotoxy(1,13);
      cout<<" CARRERA: TSP"<<endl;
      cout<<""<<endl;
      cout<<""<<endl;
      cout<<""<<endl;
      cout<<""<<endl;
      cout<<""<<endl;
      cout<<"___________________________________________________________________________"<<endl;
      system("pause");
}


void MenuPrincipal()
{
      system("cls");
      cout<<"______________________________________________ TP NRO 01 INTEGRADOR _______"<<endl;
      gotoxy(5,3);
      cout<<"MENU"<<endl;
      gotoxy(15,6);
      cout<<"   1). ALTA DE MATERIA"<<endl;
      gotoxy(15,7);
      cout<<"   2). LISTA DE MATERIAS"<<endl;
      gotoxy(15,8);
      cout<<"   3). ALTA ALUMNO"<<endl;
      gotoxy(15,9);
      cout<<"   4). LISTADO DE ALUMNOS"<<endl;
      gotoxy(15,10);
      cout<<"   5). ASIGNACION DE ALUMNOS A MATERIAS"<<endl;
      gotoxy(15,11);
      cout<<"   6). LISTADO DE ALUMNOS POR MATERIA"<<endl;
      gotoxy(15,12);
      cout<<"   7). MODIFICAR DATOS DEL ALUMNO"<<endl;
      gotoxy(15,13);
      cout<<"   8). DAR DE BAJA UN ALUMNO A UNA MATERIA"<<endl;
      gotoxy(15,14);
      cout<<"   9). ACERCA DE TP INTEGRADOR"<<endl;
      gotoxy(15,15);
      cout<<"   0). SALIR"<<endl;
      gotoxy(1,18);

      cout<<"___________________________________________________________________________"<<endl;

}

void Salida()
{
      system("cls");
      cout<<"______________________________________________ TP NRO 01 INTEGRADOR _______"<<endl;
      cout<<"  "<<endl;
      gotoxy(15,5);
      cout<<" GRACIAS POR INGRESAR, VUELVA PRONTO......... "<<endl;
      cout<<"  "<<endl;
      gotoxy(1,10);
      cout<<" INTEGRANTE: DIEGO DI STEFANO"<<endl;
      gotoxy(1,12);
      cout<<" MATERIA: LABORATORIO 2"<<endl;
      gotoxy(1,13);
      cout<<" CARRERA: TSP"<<endl;
      cout<<"   "<<endl;
      cout<<"   "<<endl;
      cout<<"   "<<endl;
      cout<<"   "<<endl;
      cout<<"   "<<endl;
      cout<<"___________________________________________________________________________"<<endl;
      system("pause");
}

void mostraracercade()
{
    system("cls");
    cout<<"______________________________________________ TP NRO 01 INTEGRADOR _______"<<endl;
    cout<<"Competencias"<<endl;
    cout<<"Para desarrollar el TP, deberas tener conocimientos previos de los siguientes temas:"<<endl;
    cout<<" * Programacion basica en lenguaje C++."<<endl;
    cout<<" * Programacion modular y estructurada"<<endl;
    cout<<" * Teoria de punteros."<<endl;
    cout<<" * Disenio y utilizacion de funciones"<<endl;
    cout<<"Al finalizar la tarea deberas ser capaz de:"<<endl;
    cout<<" * Diseniar y administrar estructuras"<<endl;
    cout<<" * Diseniar y administrar archivos binarios"<<endl;
    cout<<" * Realizar un sistema de informacion de mediana complejidad."<<endl;
    cout<<" "<<endl;
    cout<<"Consignas"<<endl;
    cout<<" * Lee atentamente todas las consignas antes de iniciar la tarea."<<endl;
    cout<<" * El programa debe ser desarrollado en C++ utilizando como entorno de desarrollo el IDE"<<endl;
    cout<<"Code::Blocks, con el compilador GNU gcc."<<endl;
    cout<<" * El programa debe ser desarrollado en su totalidad en modo consola (modo texto)."<<endl;
    cout<<"El paradigma de programacion es Programacion Modular y Estructurada"<<endl;
    cout<<" * NOTA: Todo el desarrollo debe estar basado en funciones, las que se agruparan segun"<<endl;
    cout<<"sus caracteristicas en archivos de tipo .h, los que seran incluidos en el archivo que"<<endl;
    cout<<"contiene a la funcion main()."<<endl;
    cout<<" "<<endl;
    cout<<"La interfaz del usuario debe presentar las siguientes caracteristicas:"<<endl;
    cout<<" * El programa comenzar con una pantalla de presentacion y terminar con pantalla de despedida."<<endl;
    cout<<" * El control del programa debe realizarse a traves de un sistema de menus de varios niveles."<<endl;
    cout<<" * Debe existir la posibilidad de acceder en cualquier momento de la ejecucion a un"<<endl;
    cout<<" * sistema de ayuda en linea (pantallas explicativas, ejemplos, ayudas contextuales, etc.)."<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"Copyright © 1991-2019 Diego Di Stefano. All rights reserved."<<endl;


}






#endif // SUBMENU_H_INCLUDED
