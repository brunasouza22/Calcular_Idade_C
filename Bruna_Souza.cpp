#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	system("color E");
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30];
	int ano_nasc, idade;
	
	printf("Digite seu nome: ");
	scanf("%s",nome);
	
	printf("Digite o ano em que você nasceu: ");
	scanf("%d",&ano_nasc);
	
	idade=(2020-ano_nasc);
  	printf("%s você tem %d anos \n",nome,idade);
	
	if(idade<=12){
		printf("Você ainda é uma criança");
	} else if(idade<=17){
		printf("Você é um(a) adolescente!");
	} else{
		printf("Você é adulto(a)) e pode tirar sua CNH!");
	}
	//system("pause");
	return 0;
}
