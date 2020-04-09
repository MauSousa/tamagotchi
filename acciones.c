#include <stdio.h>
void comer(){
	int num1;
	system("cls");
	puts("Tengo hambre");
	printf("%cQuieres darle de comer? 1 si, 2 no\n",168);
	scanf("%d",&num1);
	switch(num1){
		case 1: 
			printf("Mmmm delicioso\n");break;
		case 2:
			printf("Tengo hambre!!!!\n");comer();break;
		default:
			printf("Escoge la opcion indicada\n");
			comer();
	}
}

void dormir(){
	int num2;
	system("cls");
	puts("Quiero dormir");
	printf("%cQuieres dormirlo? 1 si, 2 no\n",168);
	scanf("%d",&num2);
	switch(num2){
		case 1: 
			printf("Se durmio, no lo despiertes");break;
		case 2:
			printf("Quiero dormir!!!!\n");dormir();break;
		default:
			printf("Escoge la opcion indicada\n");
			dormir();
	}
}

void juego(){
	int num3;
	system("cls");
	puts("Quiero jugar");
	printf("%cQuieres jugar con el? 1 si, 2 no\n",168);
	scanf("%d",&num3);
	switch(num3){
		case 1: 
			printf("Ya me canse de jugar\n");break;
		case 2:
			printf("Quiero jugar!!!!\n");juego();break;
		default:
			printf("Escoge la opcion indicada\n");
			juego();
	}
}

void limpio(){
	int num4;
	system("cls");
	printf("Quiero ba%carme\n",164);
	printf("%cQuieres ba%carlo? 1 es si, 2 es no\n",168,164);
	scanf("%d",&num4);
	switch(num4){
		case 1: 
			printf("Ya me ba%ce\n",164);break;
		case 2:
			printf("Quiero ba%carme!!!!\n",164);limpio();break;
		default:
			printf("Escoge la opcion indicada\n");
			limpio();
	}
}

void enfermo(){
	int num5;
	system("cls");
	puts("Estoy enfermo\n");
	puts("Llevame al medico\n");
	printf("%cQuieres llevarlo al medico? 1 es si, 2 es no\n",164);
	scanf("%d",&num5);
	switch(num5){
		case 1: 
			printf("Fui al medico y me mando medicina\n");break;
		case 2:
			printf("Me siento mal, levame al medico\n");enfermo();break;
		default:
			printf("Escoge la opcion indicada\n");
			enfermo();	
	}	
}

void television(){
	int num6;
	system("cls");
	puts("Quero ver television\n");
	printf("%cQuieres ver television con el? 1 es si, 2 es no\n",168);
	scanf("%d",&num6);
	switch(num6){
		case 1: 
			printf("Estamos viendo el canal 5\n");break;
		case 2:
			printf("Quiero ver television!!!!\n");television();break;
		default:
			printf("Escoge la opcion indicada\n");
			television();	
	}
}

void musica(){
	int num7;
	system("cls");
	puts("Quiero escuchar musica\n");
	printf("%cQuieres poner musica? 1 es si, 2 es no\n",164);
	scanf("%d",&num7);
	switch(num7){
		case 1: 
			printf("Pink Floyd es una buena banda\n");break;
		case 2:
			printf("Quiero escuchar musica!!!\n");musica();break;
		default:
			printf("Escoge la opcion indicada\n");
			musica();	
	}
}

void muerte(){
	system("cls");
	puts("El tamagotchi se murio\n");
	puts("Fin del juego :(");
	exit(0);
	system("pause");
}

void urgencias(){
	int num8;
	system("cls");
	puts("Estoy muy enfermo\n");
	puts("Llevame aurgencias\n");
	puts("Siento que me muero\n");
	printf("%cQuieres llevarlo a urgencias? 1 es si, 2 es no\n",164);
	scanf("%d",&num8);
	switch(num8){
		case 1: 
			printf("Estoy estable pero en observacion \n");
			puts("La vi cerca");break;
		case 2:
			printf("El tamagotchi entro en coma!\n");muerte();break;
		default:
			printf("Escoge la opcion indicada\n");
			urgencias();	
	}
}

void aprender(){
	int num9;
	system("cls");
	printf("Quiero aprender a colorear\n");
	printf("%cQuieres ense%carle a colorear? 1 es si, 2 es no\n",168,164);
	scanf("%d",&num9);
	switch(num9){
		case 1: 
			printf("Estoy aprediendo a colorear\n");break;
		case 2:
			printf("Quiero aprender a colorear!!!!\n");aprender();break;
		default:
			printf("Escoge la opcion indicada\n");
			aprender();
	}	
}
