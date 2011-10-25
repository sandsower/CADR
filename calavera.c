#include <stdio.h>
#include <time.h>
#include <conio.h>
char * Epitafio = "Soon ripe. Soon rotten. Soon gone. But not forgotten.";
void gotoxy(int x, int y);
void recorrer(int i);
void titulo();
void final();
char calavera[50][50];
char tumba[80][80];


int main()
{
    while(1)
    {
    pintar_background();
    gotoxy(10,10);
    titulo();
    
    int i;
    for(i=0;i<20;i++)
    final();
    }
    
}


void recorrer(int i)
{
     int j;
     for (j=0;j<50;j++)
     {
         gotoxy(20+i,20+j);
         printf("%c",calavera[i][j]);
     }
}


void pintar_background()
{
     int i,j;
     for(i=0;i<80;i++)
     for(j=0;j<80;j++)
     printf("%c",tumba[i][j]);
}
void gotoxy(int x, int y)
{
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_H ANDLE), coord);
}



