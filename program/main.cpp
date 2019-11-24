#include "Carro.h"
#include "Aviao.h"
#include "Heroi.h"
#include "Cartas.h"
#include "Dinossauro.h"
#include <iostream>
#include <string>
#include <fstream>

#define num_linhas 224
#define num_cartas 32

using namespace std;

void inicializar_cartas(string*, string*, string*);
void cartas_Aviao(string*);
void cartas_Carro(string*);
void cartas_Heroi(string*);

int main(){

	string Baralho_Aviao[num_linhas];
	string Baralho_Carro[num_linhas];
	string Baralho_Heroi[num_linhas];


	inicializar_cartas(Baralho_Aviao, Baralho_Carro, Baralho_Heroi);

	return 0;
}

void inicializar_cartas(string Baralho_Aviao[], string Baralho_Carro[], string Baralho_Heroi[]){
	ifstream avioes;
	avioes.open("CartasAviao.txt");

	for(int i = 0;i < 224;i++)
		getline(avioes, Baralho_Aviao[i]);

	avioes.close();

	ifstream carros;
	carros.open("CartasCarro.txt");

	for(int i = 0;i < 224;i++)
		getline(carros, Baralho_Carro[i]);

	carros.close();

	ifstream herois;
	herois.open("CartasHerois.txt");

	for(int i = 0;i < 224;i++)
		getline(herois, Baralho_Heroi[i]);

	herois.close();

	cartas_Aviao(Baralho_Aviao);
	cartas_Carro(Baralho_Carro);
	cartas_Heroi(Baralho_Heroi);
}

void cartas_Aviao(string Baralho_Aviao[]){
	Aviao carta1;
	Aviao carta2;
	Aviao carta3;
	Aviao carta4;
	Aviao carta5;
	Aviao carta6;
	Aviao carta7;
	Aviao carta8;
	Aviao carta9;
	Aviao carta10;
	Aviao carta11;
	Aviao carta12;
	Aviao carta13;
	Aviao carta14;
	Aviao carta15;
	Aviao carta16;
	Aviao carta17;
	Aviao carta18;
	Aviao carta19;
	Aviao carta20;
	Aviao carta21;
	Aviao carta22;
	Aviao carta23;
	Aviao carta24;
	Aviao carta25;
	Aviao carta26;
	Aviao carta27;
	Aviao carta28;
	Aviao carta29;
	Aviao carta30;
	Aviao carta31;
	Aviao carta32;

	int i = 0;
	while(i <= 13){
		carta1.set_nome(Baralho_Aviao[i]);
		carta1.set_tipo(Baralho_Aviao[i+1]);
		carta1.set_peso(Baralho_Aviao[i+2]);
		carta1.set_velocidade(Baralho_Aviao[i+3]);
		carta1.set_altitude_voo(Baralho_Aviao[i+4]);
		carta1.set_comprimento(Baralho_Aviao[i+5]);
		carta1.set_altura(Baralho_Aviao[i+6]);
		i++;i++;i++;i++;i++;i++;i++;

		carta2.set_nome(Baralho_Aviao[i]);
		carta2.set_tipo(Baralho_Aviao[i+1]);
		carta2.set_peso(Baralho_Aviao[i+2]);
		carta2.set_velocidade(Baralho_Aviao[i+3]);
		carta2.set_altitude_voo(Baralho_Aviao[i+4]);
		carta2.set_comprimento(Baralho_Aviao[i+5]);
		carta2.set_altura(Baralho_Aviao[i+6]);
		i++;i++;i++;i++;i++;i++;i++;
	}

	carta1.imprime_carta();
	carta2.imprime_carta();

	if(carta1.get_peso() > carta2.get_peso())
		cout << "Jogador 1 venceu" << endl << endl;
	else
		cout << "Jogador 2 venceu" << endl << endl;

}

void cartas_Carro(string Baralho_Carro[]){
	Carro carta1;
	Carro carta2;
	Carro carta3;
	Carro carta4;
	Carro carta5;
	Carro carta6;
	Carro carta7;
	Carro carta8;
	Carro carta9;
	Carro carta10;
	Carro carta11;
	Carro carta12;
	Carro carta13;
	Carro carta14;
	Carro carta15;
	Carro carta16;
	Carro carta17;
	Carro carta18;
	Carro carta19;
	Carro carta20;
	Carro carta21;
	Carro carta22;
	Carro carta23;
	Carro carta24;
	Carro carta25;
	Carro carta26;
	Carro carta27;
	Carro carta28;
	Carro carta29;
	Carro carta30;
	Carro carta31;
	Carro carta32;

	int i = 0;
	while(i <= 13){
		carta1.set_nome(Baralho_Carro[i]);
		carta1.set_tipo(Baralho_Carro[i+1]);
		carta1.set_cilindradas(Baralho_Carro[i+2]);
		carta1.set_potencia(Baralho_Carro[i+3]);
		carta1.set_velocidade(Baralho_Carro[i+4]);
		carta1.set_peso(Baralho_Carro[i+5]);
		carta1.set_comprimento(Baralho_Carro[i+6]);
		i++;i++;i++;i++;i++;i++;i++;

		carta2.set_nome(Baralho_Carro[i]);
		carta2.set_tipo(Baralho_Carro[i+1]);
		carta2.set_cilindradas(Baralho_Carro[i+2]);
		carta2.set_potencia(Baralho_Carro[i+3]);
		carta2.set_velocidade(Baralho_Carro[i+4]);
		carta2.set_peso(Baralho_Carro[i+5]);
		carta2.set_comprimento(Baralho_Carro[i+6]);
		i++;i++;i++;i++;i++;i++;i++;
	}

	carta1.imprime_carta();
	carta2.imprime_carta();

	if(carta1.get_velocidade() > carta2.get_velocidade())
		cout << "Jogador 1 venceu" << endl << endl;
	else
		cout << "Jogador 2 venceu" << endl << endl;
}

void cartas_Heroi(string Baralho_Heroi[]){
	Heroi carta1;
	Heroi carta2;
	Heroi carta3;
	Heroi carta4;
	Heroi carta5;
	Heroi carta6;
	Heroi carta7;
	Heroi carta8;
	Heroi carta9;
	Heroi carta10;
	Heroi carta11;
	Heroi carta12;
	Heroi carta13;
	Heroi carta14;
	Heroi carta15;
	Heroi carta16;
	Heroi carta17;
	Heroi carta18;
	Heroi carta19;
	Heroi carta20;
	Heroi carta21;
	Heroi carta22;
	Heroi carta23;
	Heroi carta24;
	Heroi carta25;
	Heroi carta26;
	Heroi carta27;
	Heroi carta28;
	Heroi carta29;
	Heroi carta30;
	Heroi carta31;
	Heroi carta32;

	int i = 0;
	while(i <= 13){
		carta1.set_nome(Baralho_Heroi[i]);
		carta1.set_tipo(Baralho_Heroi[i+1]);
		carta1.set_velocidade(Baralho_Heroi[i+2]);
		carta1.set_inteligencia(Baralho_Heroi[i+3]);
		carta1.set_agilidade(Baralho_Heroi[i+4]);
		carta1.set_forca(Baralho_Heroi[i+5]);
		carta1.set_habilidade(Baralho_Heroi[i+6]);
		i++;i++;i++;i++;i++;i++;i++;

		carta2.set_nome(Baralho_Heroi[i]);
		carta2.set_tipo(Baralho_Heroi[i+1]);
		carta2.set_velocidade(Baralho_Heroi[i+2]);
		carta2.set_inteligencia(Baralho_Heroi[i+3]);
		carta2.set_agilidade(Baralho_Heroi[i+4]);
		carta2.set_forca(Baralho_Heroi[i+5]);
		carta2.set_habilidade(Baralho_Heroi[i+6]);
		i++;i++;i++;i++;i++;i++;i++;
	}

	carta1.imprime_carta();
	carta2.imprime_carta();

	if(carta1.get_forca() > carta2.get_forca())
		cout << "Jogador 1 venceu" << endl << endl;
	else
		cout << "Jogador 2 venceu" << endl << endl;
}
