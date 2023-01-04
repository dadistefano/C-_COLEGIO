#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <stdio.h>
#include <cstring>
#include <windows.h>
#include "ayuda.h"
#include "funciones_varias.h"
#include "estructuras.h"
#include "validaciones.h"
#include "submenu.h"
#include "funciones.h"

using namespace std;

int main()
{
    bool salir=false;
    int opc;
    Entrada();
    system("cls");
    while(!salir)
    {
        system("cls");
        MenuPrincipal();
        cout<<"OPCION:"<<endl;
        cin>>opc;
        system("cls");
        switch(opc)
        {
          case 1: //***************ALTA MATERIA************************///
              {
                  Materias m;
                  bool vuelta=true;
                  char o;
                  while(vuelta)
                  {
                        CargarMateria(&m);
                        if(AltaMateria(m))
                        {
                            cout<<"MATERIA GUARDADA"<<endl;

                        }
                        else
                        {
                            cout<<"ERROR EN GUARDAR MATERIA"<<endl;
                        }
                        system("Pause");
                        vuelta=false;
                        cout<<" "<<endl;
                        cout<<"DESEA CARGAR OTRA MATERIA O INGRESAR DE VUELTA: S/N:"<<endl;
                        cout<<" "<<endl;
                        cout<<"AYUDA EN LINEA---->      Presiones A:"<<endl;
                        cin>>o;
                        if(o=='s'||o=='S')
                        {
                            vuelta=true;
                            system("cls");
                        }
                        if(o=='a'||o=='A')
                        {
                            ayudamateria();
                        }
                  }
                }break;
          case 2: //****************LISTAR MATERIAS***********************//
              {
                  system("cls");
                  ListarMaterias();
                  system("pause");
              }break;
          case 3: //****************ALTA ALUMNO**************************//
              {
                  Alumnos a;
                  bool vuelta=true;
                  char o;
                  while(vuelta)
                  {
                    CargarAlumno(&a);
                    if(AltaAlumno(a))
                    {
                        cout<<"ALUMNO GUARDADO"<<endl;
                    }
                    else
                    {
                      cout<<"ERROR EN GUARDA EL ALUMNO"<<endl;
                    }
                    system("Pause");
                    vuelta=false;
                    cout<<" "<<endl;
                    cout<<"DESEA CARGAR OTRO ALUMNO O INGRESAR DE VUELTA: S/N:"<<endl;
                    cout<<" "<<endl;
                    cout<<"AYUDA EN LINEA---->    Presiones A:"<<endl;
                    cin>>o;
                    if(o=='s'||o=='S')
                    {
                        vuelta=true;
                        system("cls");
                    }
                     if(o=='a'||o=='A')
                    {
                        ayudaalumno();
                    }
                  }
              }break;
          case 4: //*****************LISTAR ALUMNOS*********************//
              {
                  system("cls");
                  ListarAlumnos();
                  system("Pause");
              }break;
          case 5: //***************ASIGNACION DE ALUMNO POR MATERIA*****//
              {
                  Alumno_x_mat ma;
                  bool vuelta=true;
                  char o;
                  while(vuelta)
                  {
                        CargarAlumnoxMateria(&ma);
                        if(AltaAluXMateria(ma))
                        {
                            cout<<"SU ASIGNACION FUE GUARDADO"<<endl;
                        }
                        else
                        {
                            cout<<"ERROR EN LA ASIGNACION"<<endl;
                        }
                        system("Pause");
                        vuelta=false;
                        cout<<" "<<endl;
                        cout<<"DESEA CARGAR OTRO ASIGNACION O INGRESAR DE VUELTA: S/N:"<<endl;
                        cout<<" "<<endl;
                        cout<<"AYUDA EN LINEA---->      Presiones A:"<<endl;
                        cin>>o;
                        if(o=='s'||o=='S')
                        {
                            vuelta=true;
                            system("cls");
                        }
                        if(o=='a'||o=='A')
                        {
                            ayudaalumxmat();
                        }
                  }
              }break;
          case 6: //****************LISTAR MATERIAS POR ALUMNOS**********///
              {
                  system("cls");
                  ListarAlumnosXMateria();
                  system("Pause");
              }break;
          case 7: //****************MODIFICAR ALUMNO*********************///
              {
                    int leg;
                    char ay;
                    system("cls");
                    cout<<"INGRESE EL LEGAJO DEL ALUMNO QUE DESEA MODIFICAR: "<<endl;
                    cin>>leg;
                    if(validarleg(leg))
                    {
                        if(ModificarAlumno(leg))
                        {
                            cout<<"SU ASIGNACION FUE GUARDADO"<<endl;
                        }
                        else
                        {
                            cout<<"ERROR EN LA ASIGNACION"<<endl;
                        }
                    }
                    else
                    {
                        cout<<"ERROR EN LA VALIDACION DE LEGAJO DE ALUMNO (ARCHIVO ALUMNO.DAT)!!!"<<endl;
                        system("pause");
                    }
                    cout<<"DESEA INGRESAR -AYUDA EN LINEA - MODIFICAR ALUMNO"<<endl;
                    cout<<"----> Presione A"<<endl;
                    cin>>ay;
                    if(ay=='a'||ay=='A')
                    {
                        ayudamodalumno();
                    }
                    system("pause");

                }break;
            case 8: //**************DAR DE BAJA UN ALUMNO DE UNA MATERIA**********///
                {
                    int le,ma;
                    char ayu;
                    cout<<"INGRESE EL LEGAJO DEL ALUMNO: "<<endl;
                    cin>>le;
                    cout<<"INGRESE EL ID DE LA MATERIA QUE DESEA DAR DE BAJA: "<<endl;
                    cin>>ma;
                    if(validacionIDALUMNO(le))
                    {
                        if(validacionIDMATERIA(ma))
                        {
                            if(bajaAlumnoxmat(le,ma))
                            {
                                cout<<"SU ASIGNACION FUE BORRADA DEL ALUMNO CON EXITO"<<endl;
                            }
                            else
                            {
                                cout<<"ERROR AL BORRAR ASIGNACION!!"<<endl;
                            }
                            system("pause");
                        }
                        else
                        {
                            cout<<"ERROR EN LA VALIDACION DE ID MATERIA!! (ARCHIVO ALUMNO X MATERIA.DAT)"<<endl;
                            system("pause");
                        }
                    }
                    else
                    {
                        cout<<"ERROR EN LA VALIDACION DE ID MATERIA!!! (ARCHIVO ALUMNO X MATERIA.DAT)"<<endl;
                        system("pause");
                    }
                    cout<<"DESEA INGRESAR -AYUDA EN LINEA - MODIFICAR ALUMNO"<<endl;
                    cout<<"----> Presione A"<<endl;
                    cin>>ayu;
                    if(ayu=='a'||ayu=='A')
                    {
                        ayudabajamat();
                    }
                    system("pause");
                }break;
            case 9: //**************ACERCA DE.....**********///
                {
                    mostraracercade();
                    system("pause");
                }break;

            case 0: //***********************SALIR*****************************///
              {
                  salir=true;
              }break;
            default:
              {
                  cout<<"INGRESE CORRECTAMENTE LA OPCION"<<endl;
              }break;
          }

    }
    Salida();
    return 0;
}

