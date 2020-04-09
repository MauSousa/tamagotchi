#include <stdio.h>
#include <stdlib.h>
#include "num_aleatorio.c"


void pantalla(){
	system("cls");
	printf("****************************************************************\n");
	printf("*                                                              *\n");
	printf("*                                                              *\n");
	printf("*                          BIENVENIDO                          *\n");
	printf("*                                                              *\n");
	printf("*                                                              *\n");
	printf("****************************************************************\n");
}

salir(){
	puts("Adios");
	system("pause");
	exit(0);
}

void regreso(){
	inicio();
	escoger();
}

void inicio(){
	int y;
	system("cls");
	pantalla();
	printf("Este es un juego de Tamagotchi basico en consola\n");
	printf("\%CQuires jugar? 1 es si, 2 es para salir del juego\n",168);
	scanf("%d",&y);
	switch(y){
		case 1: escoger();break;
		case 2: salir();break;
		default: inicio();
	}	
}

void control(){
	while(1){
		inicio();
	}
}

main(){
	control();
	return 0;
}

