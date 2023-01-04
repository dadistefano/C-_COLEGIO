#ifndef VALIDACIONES_H_INCLUDED
#define VALIDACIONES_H_INCLUDED

using namespace std;
//***************ARCHIVO ALUMNOS*********************/////
bool validarleg(int leg)
{
    Alumnos alum;
    bool guardar=false;
    FILE *p;
    p= fopen(RUTA_ALUMNO,"rb");
    if(p!=NULL)
    {
            while(fread(&alum,sizeof(Alumnos),1,p))
            {
                if(alum.cod_leg==leg)
                {
                    guardar=true;
                    cout<<"LEGAJO CORRECTO"<<endl;
                    break;
                }
            }
            if(!guardar)
            {
             cout<<"NRO DE LEGAJO INCORRECTO!!! "<<endl;
             }
    fclose(p);
    }
    else
    {
        cout<<"Error al acceder al archivo"<<endl;
        system("pause");
    }
    return guardar;
}

//***************ARCHIVO MATERIA*********************/////
bool validarid(int id)
{
    Materias ma;
    bool guardar=false;
    FILE *p;
    p= fopen(RUTA_MATERIA,"rb");
    if(p!=NULL)
    {
            while(fread(&ma,sizeof(Materias),1,p))
            {
                if(ma.cod_mat==id)
                {
                    guardar=true;
                    cout<<"ID MATERIA CORRECTO"<<endl;
                    break;
                }

            }
            if(!guardar)
            {
             cout<<"NRO DE ID MATERIA INCORRECTO!!! "<<endl;
             }
    fclose(p);
    }
    else
    {
        cout<<"Error al acceder al archivo"<<endl;
        system("pause");
    }
    return guardar;
}

//***************ARCHIVO ALUMNOXMATERIA*********************/////

bool validacionIDALUMNO(int leg)
{
    Alumno_x_mat alum;
    bool guardar=false;
    FILE *p;
    p= fopen(RUTA_MAT_ALUM,"rb");
    if(p!=NULL)
    {
            while(fread(&alum,sizeof(Alumnos),1,p))
            {
                if(alum.id_legajo==leg)
                {
                    guardar=true;
                    cout<<"LEGAJO CORRECTO"<<endl;
                    break;
                }
            }
            if(!guardar)
            {
             cout<<"NRO DE LEGAJO INCORRECTO!!! "<<endl;
             }
    fclose(p);
    }
    else
    {
        cout<<"Error al acceder al archivo"<<endl;
        system("pause");
    }
    return guardar;
}

bool validacionIDMATERIA(int mat)
{
    Alumno_x_mat alum;
    bool guardar=false;
    FILE *p;
    p= fopen(RUTA_MAT_ALUM,"rb");
    if(p!=NULL)
    {
            while(fread(&alum,sizeof(Alumnos),1,p))
            {
                if(alum.id_materia==mat)
                {
                    guardar=true;
                    cout<<"ID MATERIA CORRECTO"<<endl;
                    break;
                }
            }
            if(!guardar)
            {
             cout<<"NRO DE ID MATERIA INCORRECTO!!! "<<endl;
             }
    fclose(p);
    }
    else
    {
        cout<<"Error al acceder al archivo"<<endl;
        system("pause");
    }
    return guardar;
}


















#endif // VALIDACIONES_H_INCLUDED
