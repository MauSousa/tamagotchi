#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "acciones.c"
void ninguno(){
	printf("No hago nada\n");
	Sleep(1000);
	escoger();
}

void escoger(){
	int x;
	srand(time(NULL));		
	x = rand()%11;
	
	switch(x){
		case 1:
			comer();break;
		case 2:
			dormir();break;
		case 3:
			juego();break;
		case 4:
			limpio();break;
		case 5:
			enfermo();break;
		case 6:
			television();break;
		case 7:
			musica();break;
		case 8:
			aprender();break;
		case 9:
			urgencias();break;
		default:
			ninguno();
	}
}
