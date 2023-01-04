#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

using namespace std;


int ObtenerCodMateria()
{
    FILE *p;
    p=fopen(RUTA_MATERIA,"ab");
    fseek(p,0,SEEK_END);
    return (ftell(p)/sizeof(Materias))+1;
}
int ObtenerNroLegajo()
{
    FILE *p;
    p=fopen(RUTA_ALUMNO,"ab");
    fseek(p,0,SEEK_END);
    return (ftell(p)/sizeof(Alumnos))+1;
}
//----------------------------------------------------------------

void MostrarMateria(Materias m)
{
    cout<<"CODIGO MATERIA:  "<<m.cod_mat<<endl;
    cout<<"NOMBRE MATERIA:  "<<m.nombre_Mat<<endl;
    cout<<"NOMBRE PROFESOR:  "<<m.nombre_Profesor<<endl;
    cout<<"__________________________________________________"<<endl;
}
void MostrarAlumno(Alumnos a)
{
    cout<<"LEGAJO:  "<<a.cod_leg<<endl;
    cout<<"NOMBRE ALUMNO:  "<<a.nombre<<endl;
    cout<<"FECHA DE NACIMIENTO:  "<<a.F_deNacimiento<<endl;
    cout<<"DNI:  "<<a.dni<<endl;
    cout<<"__________________________________________________"<<endl;
}
void MostrarMatxAlum(Alumno_x_mat ma)
{
    cout<<"NRO LEGAJO:  "<<ma.id_legajo<<endl;
    cout<<"CODIGO MATERIA:  "<<ma.id_materia<<endl;
    cout<<"__________________________________________________"<<endl;
}

void CargarMateria(Materias *m)
{
    cin.ignore();
    m->cod_mat=ObtenerCodMateria();
    cout<<"Ingrese el nombre de la Materia: "<<endl;
    getline(m->nombre_Mat,30);
    cout<<"Ingrese el nombre del Profesor: "<<endl;
    getline(m->nombre_Profesor,30);
    m->estado_mat=true;
    cout<<"_____________________________________________"<<endl;
    cout<<"EL ID DE MATERIA DESIGNADO ES: "<<m->cod_mat<<endl;
    cout<<"_____________________________________________"<<endl;
}
void CargarAlumno(Alumnos *a)
{
    cin.ignore();
    a->cod_leg=ObtenerNroLegajo();
    cout<<"Ingrese el nombre del Alumno: "<<endl;
    cin.getline(a->nombre,30);
    cout<<"Ingrese Fecha de Nacimiento: "<<endl;
    cin.getline(a->F_deNacimiento,10);
    cout<<"Ingrese DNI: "<<endl;
    cin>>a->dni;
    a->estado_alum=true;
    cout<<"_____________________________________________"<<endl;
    cout<<"EL ID DE LEGAJO DESIGNADO ES: "<<a->cod_leg<<endl;
    cout<<"_____________________________________________"<<endl;
}
void CargarAlumnoxMateria(Alumno_x_mat *ma)
{
    cin.ignore();
    cout<<"Ingrese Nro de Legajo: "<<endl;
    cin>>ma->id_legajo;
    cout<<"Ingrese Codigo de materia: "<<endl;
    cin>>ma->id_materia;
    ma->estado_mat_alu=true;
}

bool AltaMateria(Materias mat)
{
    bool guardar=false;
    FILE *p;
    p= fopen(RUTA_MATERIA,"ab");
    if(p!=NULL)
    {
        fwrite(&mat,sizeof(Materias),1,p);
        fclose(p);
        guardar=true;
    }
    return guardar;
}
bool AltaAlumno(Alumnos al)
{
    bool guardar=false;
    FILE *p;
    p= fopen(RUTA_ALUMNO,"ab");
    if(p!=NULL)
    {
        fwrite(&al,sizeof(Alumnos),1,p);
        fclose(p);
        guardar=true;
    }
    return guardar;
}
bool AltaAluXMateria(Alumno_x_mat ma)
{
    bool guardar=false;
    FILE *p;
    p= fopen(RUTA_MAT_ALUM,"ab");
    if(p!=NULL)
    {
        if(validarleg(ma.id_legajo))
        {
            if(validarid(ma.id_materia))
            {
            fwrite(&ma,sizeof(Alumno_x_mat),1,p);
            fclose(p);
            guardar=true;
            }
        }

    }
    return guardar;
}



void cargarmodificacionleg(int le,Alumnos *al)
{
    al->cod_leg=le;
    cout<<"Ingrese el nombre del Alumno: "<<endl;
    cin.getline(al->nombre,30);
    cout<<"Ingrese Fecha de Nacimiento: "<<endl;
    cin.getline(al->F_deNacimiento,10);
    cout<<"Ingrese DNI: "<<endl;
    cin>>al->dni;
    al->estado_alum=true;
}



bool ModificarAlumno(int le)
{
    Alumnos al;
    char op;
    bool guardar=false;
    FILE *p;
    p= fopen(RUTA_ALUMNO,"rb+");
    if(p!=NULL)
    {
        cout<<"Esta seguro que desea modificar este legajo?? S/N "<<endl;
        cin>>op;
        switch(op)
        {
            case 's':
            case 'S':
                {
                    while(fread(&al,sizeof(Alumnos),1,p))
                    {
                        if(al.cod_leg==le)
                        {
                            cargarmodificacionleg(le,&al);
                            fseek(p,ftell(p)-sizeof(Alumnos),SEEK_SET);
                            fwrite(&al,sizeof(Alumnos),1,p);
                            guardar=true;
                            break;
                        }
                    }
                }break;
            case 'n':
            case 'N':
                {
                    break;
                }break;
            default:
                {
                    cout<<"Ingrese la opcion correcta!!! S/N"<<endl;
                    cin>>op;
                }
        }
        fclose(p);
    }
    return guardar;
}
//--------------------------------------------------------------------------


bool bajaAlumnoxmat(int leg, int mat)
{
    Alumno_x_mat regi;
    char op;
    bool guardar=false;
    FILE *p;
    p=fopen(RUTA_MAT_ALUM,"rb+");
    if(p!=NULL)
    {
        cout<<"Esta seguro que desea dar de BAJA este Alumno en esta materia?? S/N "<<endl;
        cin>>op;
        switch(op)
        {
            case 's':
            case 'S':
                {
                while(fread(&regi,sizeof(Alumno_x_mat),1,p))
                {
                    if(regi.id_legajo==leg)
                    {
                        if(regi.id_materia==mat)
                        {
                            regi.estado_mat_alu=false;
                            fseek(p,ftell(p)-sizeof(Alumno_x_mat),SEEK_SET);
                            fwrite(&regi,sizeof(Alumno_x_mat),1,p);
                            guardar=true;
                            break;
                        }
                    }
                }
                }break;
            case 'n':
            case 'N':
                {
                    break;
                }break;
            default:
                {
                    cout<<"Ingrese la opcion correcta!!! S/N"<<endl;
                    cin>>op;
                }
        }
        fclose(p);
    }
    return guardar;
}



//////////-------------------------------------------------

void ListarMaterias()
{
    Materias mate;
    FILE *p;
    p = fopen(RUTA_MATERIA,"rb");
    if(p!=NULL)
    {
        while(fread(&mate,sizeof(Materias),1,p))
        {
            if (mate.estado_mat==true)
            {
                MostrarMateria(mate);
            }
        }
        fclose(p);
    }
}
void ListarAlumnos()
{
    Alumnos al;
    FILE *p;
    p= fopen(RUTA_ALUMNO,"rb");
    if(p!=NULL)
    {
        while(fread(&al,sizeof(Alumnos),1,p))
        {
            if(al.estado_alum==true)
            {
            MostrarAlumno(al);
            }
        }
        fclose(p);
    }
}
void ListarAlumnosXMateria()
{
    Alumno_x_mat ma;
    FILE *p;
    p= fopen(RUTA_MAT_ALUM,"rb");
    if(p!=NULL)
    {
        while(fread(&ma,sizeof(Alumno_x_mat),1,p))
        {
            if(ma.estado_mat_alu==true)
            {
                MostrarMatxAlum(ma);
            }
        }
        fclose(p);
    }
}
////-----------------------------------------

#endif // FUNCIONES_H_INCLUDED
