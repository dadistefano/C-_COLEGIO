#ifndef FUNCIONES_VARIAS_H_INCLUDED
#define FUNCIONES_VARIAS_H_INCLUDED

using namespace std;

void getline(char *cadena,int cantidad)
{
    int contador =0;
    char caracter ='\0';
    while(caracter!=10)
    {
        caracter = std::cin.get();
        if(contador != cantidad && caracter!=10)
        {
            cadena[contador] = caracter;
            contador++;
        }
    }
    cadena[contador]='\0';
}


 void gotoxy(int x,int y)
{
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y= y;
    SetConsoleCursorPosition(hcon,dwPos);
}


#endif // FUNCIONES_VARIAS_H_INCLUDED
