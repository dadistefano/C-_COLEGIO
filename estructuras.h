#ifndef ESTRUCTURAS_H_INCLUDED
#define ESTRUCTURAS_H_INCLUDED

using namespace std;

const char RUTA_MATERIA[]="MATERIA.DAT";
const char RUTA_ALUMNO[]="ALUMNO.DAT";
const char RUTA_MAT_ALUM[]="MAT_X_ALUM.DAT";


struct Materias
{
  int cod_mat;
  char nombre_Mat[30];
  char nombre_Profesor[30];
  bool estado_mat;
};

struct Alumnos
{
  int cod_leg;
  char nombre[30];
  char F_deNacimiento[10];
  int dni;
  bool estado_alum;
};

struct Alumno_x_mat
{
    int id_materia;
    int id_legajo;
    bool estado_mat_alu;
};




#endif // ESTRUCTURAS_H_INCLUDED
