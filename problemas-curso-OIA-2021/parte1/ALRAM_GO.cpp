#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<iostream>



int x=40,y=12;//,dc=38,df=10;
int tecla;

void gotoxy(int x, int y) 
{ 
    HANDLE hCon; 
    COORD dwPos; 
 
    dwPos.X = x; 
    dwPos.Y = y; 
    hCon = GetStdHandle(STD_OUTPUT_HANDLE); 
    SetConsoleCursorPosition(hCon,dwPos); 
}

main()
{
while(tecla!='e')
    {
    //system("CLS");
    
    tecla=getch();
    gotoxy(x,y);
    printf(" ");
    switch (tecla)
        {
        //case'6':
        case 77:
        x++;
        break;
        //case'4':
        case 75:
        x--;
        break;
        //case'2':
        case 80:
        y++;
        break;
        //case'8':
        case 72:
        y--;
        break;
        }
    }
    gotoxy(x,y);
    printf("O");
}
