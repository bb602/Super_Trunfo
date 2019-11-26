#include <iostream>
#include <string>
#include <stack>
#include <ctime>
#include <algorithm>
#include <chrono>
#include <thread>

#include "Aviao.h"
#include "Carro.h"
#include "Dinossauro.h"
#include "Heroi.h"
#include "Cartas.h"
#include "CartasAviao.h"
#include "CartasDinossauro.h"
#include "CartasHeroi.h"
#include "CartasCarro.h"

const int num_cartas = 32;
int player_atual = 1;

std::stack<Aviao> stack_1;
std::stack<Aviao> stack_2;
std::stack<Carro> stack_1c;
std::stack<Carro> stack_2c;
std::stack<Dinossauro> stack_1d;
std::stack<Dinossauro> stack_2d;
std::stack<Heroi> stack_1h;
std::stack<Heroi> stack_2h;

Aviao carta[num_cartas];
Carro carta_c[num_cartas];
Dinossauro carta_d[num_cartas];
Heroi carta_h[num_cartas];


void cartas_aviao() {
    carta[0].set_nome("Cessna Citation X");
    carta[0].set_tipo("A1");
    carta[0].set_peso(16193);
    carta[0].set_velocidade(945);
    carta[0].set_altitude_voo(13636);
    carta[0].set_comprimento(22.01);
    carta[0].set_altura(5.76);
    carta[0].set_super_trunfo(false);

    carta[1].set_nome("Canadair Global Express");
    carta[1].set_tipo("A2");
    carta[1].set_peso(41275);
    carta[1].set_velocidade(880);
    carta[1].set_altitude_voo(15500);
    carta[1].set_comprimento(30.20);
    carta[1].set_altura(7.50);
    carta[1].set_super_trunfo(false);

    carta[2].set_nome("Bombardier CRJ 700");
    carta[2].set_tipo("A3");
    carta[2].set_peso(32885);
    carta[2].set_velocidade(785);
    carta[2].set_altitude_voo(10600);
    carta[2].set_comprimento(32.41);
    carta[2].set_altura(7.32);
    carta[2].set_super_trunfo(false);

    carta[3].set_nome("Boeing 757-300");
    carta[3].set_tipo("A4");
    carta[3].set_peso(122472);
    carta[3].set_velocidade(800);
    carta[3].set_altitude_voo(11200);
    carta[3].set_comprimento(54.50);
    carta[3].set_altura(13.60);
    carta[3].set_super_trunfo(false);

    carta[4].set_nome("Airbus A340-600");
    carta[4].set_tipo("A5");
    carta[4].set_peso(365000);
    carta[4].set_velocidade(857);
    carta[4].set_altitude_voo(11820);
    carta[4].set_comprimento(63.45);
    carta[4].set_altura(17.80);
    carta[4].set_super_trunfo(false);

    carta[5].set_nome("DC-8_73F");
    carta[5].set_tipo("A6");
    carta[5].set_peso(161000);
    carta[5].set_velocidade(880);
    carta[5].set_altitude_voo(11600);
    carta[5].set_comprimento(57.10);
    carta[5].set_altura(13.10);
    carta[5].set_super_trunfo(false);

    carta[6].set_nome("Airbus A300-600AT");
    carta[6].set_tipo("A7");
    carta[6].set_peso(150000);
    carta[6].set_velocidade(780);
    carta[6].set_altitude_voo(10000);
    carta[6].set_comprimento(56.16);
    carta[6].set_altura(17.25);
    carta[6].set_super_trunfo(false);

    carta[7].set_nome("Dassault 'Rafale'");
    carta[7].set_tipo("A8");
    carta[7].set_peso(22500);
    carta[7].set_velocidade(2350);
    carta[7].set_altitude_voo(16775);
    carta[7].set_comprimento(15.27);
    carta[7].set_altura(5.34);
    carta[7].set_super_trunfo(false);

    carta[8].set_nome("Swearingen SJ 30");
    carta[8].set_tipo("B1");
    carta[8].set_peso(5580);
    carta[8].set_velocidade(825);
    carta[8].set_altitude_voo(13100);
    carta[8].set_comprimento(12.09);
    carta[8].set_altura(3.94);
    carta[8].set_super_trunfo(false);

    carta[9].set_nome("Gulfstream G 1159-V");
    carta[9].set_tipo("B2");
    carta[9].set_peso(40370);
    carta[9].set_velocidade(830);
    carta[9].set_altitude_voo(15500);
    carta[9].set_comprimento(29.40);
    carta[9].set_altura(7.70);
    carta[9].set_super_trunfo(false);

    carta[10].set_nome("British Aerospace 146-200");
    carta[10].set_tipo("B3");
    carta[10].set_peso(42185);
    carta[10].set_velocidade(730);
    carta[10].set_altitude_voo(9600);
    carta[10].set_comprimento(28.55);
    carta[10].set_altura(8.61);
    carta[10].set_super_trunfo(false);

    carta[11].set_nome("Airbus A319-100");
    carta[11].set_tipo("B4");
    carta[11].set_peso(64000);
    carta[11].set_velocidade(803);
    carta[11].set_altitude_voo(11820);
    carta[11].set_comprimento(33.84);
    carta[11].set_altura(11.76);
    carta[11].set_super_trunfo(false);

    carta[12].set_nome("Boeing 747-400");
    carta[12].set_tipo("B5");
    carta[12].set_peso(396900);
    carta[12].set_velocidade(920);
    carta[12].set_altitude_voo(10600);
    carta[12].set_comprimento(70.70);
    carta[12].set_altura(19.30);
    carta[12].set_super_trunfo(false);

    carta[13].set_nome("Airbus A310 200F");
    carta[13].set_tipo("B6");
    carta[13].set_peso(142000);
    carta[13].set_velocidade(840);
    carta[13].set_altitude_voo(11200);
    carta[13].set_comprimento(46.66);
    carta[13].set_altura(15.81);
    carta[13].set_super_trunfo(false);
    
    carta[14].set_nome("Ilyushin IL-76MF");
    carta[14].set_tipo("B7");
    carta[14].set_peso(210000);
    carta[14].set_velocidade(780);
    carta[14].set_altitude_voo(13100);
    carta[14].set_comprimento(53.19);
    carta[14].set_altura(14.45);
    carta[14].set_super_trunfo(false);

    carta[15].set_nome("Sukhoi S-37");
    carta[15].set_tipo("B8");
    carta[15].set_peso(17700);
    carta[15].set_velocidade(2350);
    carta[15].set_altitude_voo(17900);
    carta[15].set_comprimento(21.90);
    carta[15].set_altura(6.40);
    carta[15].set_super_trunfo(false);

    carta[16].set_nome("IAI 1124 'Westwind'");
    carta[16].set_tipo("C1");
    carta[16].set_peso(10375);
    carta[16].set_velocidade(858);
    carta[16].set_altitude_voo(12500);
    carta[16].set_comprimento(15.93);
    carta[16].set_altura(4.81);
    carta[16].set_super_trunfo(false);

    carta[17].set_nome("Dassault Falcon 2000");
    carta[17].set_tipo("C2");
    carta[17].set_peso(16250);
    carta[17].set_velocidade(878);
    carta[17].set_altitude_voo(15500);
    carta[17].set_comprimento(20.23);
    carta[17].set_altura(6.98);
    carta[17].set_super_trunfo(false);

    carta[18].set_nome("Bombardier CRJ 900");
    carta[18].set_tipo("C3");
    carta[18].set_peso(360000);
    carta[18].set_velocidade(790);
    carta[18].set_altitude_voo(10600);
    carta[18].set_comprimento(36.27);
    carta[18].set_altura(7.29);
    carta[18].set_super_trunfo(false);

    carta[19].set_nome("Yakoklev YAK-42");
    carta[19].set_tipo("C4");
    carta[19].set_peso(56500);
    carta[19].set_velocidade(750);
    carta[19].set_altitude_voo(9050);
    carta[19].set_comprimento(36.38);
    carta[19].set_altura(9.83);
    carta[19].set_super_trunfo(false);

    carta[20].set_nome("Concorde");
    carta[20].set_tipo("C5");
    carta[20].set_peso(185065);
    carta[20].set_velocidade(2170);
    carta[20].set_altitude_voo(15550);
    carta[20].set_comprimento(62.17);
    carta[20].set_altura(12.19);
    carta[20].set_super_trunfo(true);

    carta[21].set_nome("Boeing 757-200PF");
    carta[21].set_tipo("C6");
    carta[21].set_peso(115650);
    carta[21].set_velocidade(860);
    carta[21].set_altitude_voo(11600);
    carta[21].set_comprimento(47.30);
    carta[21].set_altura(13.60);
    carta[21].set_super_trunfo(false);

    carta[22].set_nome("Boeing 747-100");
    carta[22].set_tipo("C7");
    carta[22].set_peso(340200);
    carta[22].set_velocidade(920);
    carta[22].set_altitude_voo(10600);
    carta[22].set_comprimento(70.70);
    carta[22].set_altura(19.30);
    carta[22].set_super_trunfo(false);

    carta[23].set_nome("AMX International");
    carta[23].set_tipo("C8");
    carta[23].set_peso(13000);
    carta[23].set_velocidade(849);
    carta[23].set_altitude_voo(12900);
    carta[23].set_comprimento(13.23);
    carta[23].set_altura(3.75);
    carta[23].set_super_trunfo(false);

    carta[24].set_nome("Beech Beechjet 400");
    carta[24].set_tipo("D1");
    carta[24].set_peso(7309);
    carta[24].set_velocidade(850);
    carta[24].set_altitude_voo(11800);
    carta[24].set_comprimento(14.80);
    carta[24].set_altura(4.50);
    carta[24].set_super_trunfo(false);

    carta[25].set_nome("Yakoklev YAK-40");
    carta[25].set_tipo("D2");
    carta[25].set_peso(16000);
    carta[25].set_velocidade(550);
    carta[25].set_altitude_voo(10000);
    carta[25].set_comprimento(20.36);
    carta[25].set_altura(6.50);
    carta[25].set_super_trunfo(false);

    carta[26].set_nome("Fairchild 329 Jet");
    carta[26].set_tipo("D3");
    carta[26].set_peso(15200);
    carta[26].set_velocidade(720);
    carta[26].set_altitude_voo(7000);
    carta[26].set_comprimento(21.28);
    carta[26].set_altura(7.20);
    carta[26].set_super_trunfo(false);

    carta[27].set_nome("Airbus A330-300");
    carta[27].set_tipo("D4");
    carta[27].set_peso(230000);
    carta[27].set_velocidade(846);
    carta[27].set_altitude_voo(11820);
    carta[27].set_comprimento(63.70);
    carta[27].set_altura(16.84);
    carta[27].set_super_trunfo(false);

    carta[28].set_nome("Airbus A3XX-200");
    carta[28].set_tipo("D5");
    carta[28].set_peso(583000);
    carta[28].set_velocidade(850);
    carta[28].set_altitude_voo(11820);
    carta[28].set_comprimento(78.90);
    carta[28].set_altura(24.10);
    carta[28].set_super_trunfo(false);

    carta[29].set_nome("Boeing 767-300F (ER)");
    carta[29].set_tipo("D6");
    carta[29].set_peso(186850);
    carta[29].set_velocidade(860);
    carta[29].set_altitude_voo(10600);
    carta[29].set_comprimento(55.00);
    carta[29].set_altura(15.90);
    carta[29].set_super_trunfo(false);

    carta[30].set_nome("Antonov An-225");
    carta[30].set_tipo("D7");
    carta[30].set_peso(600000);
    carta[30].set_velocidade(820);
    carta[30].set_altitude_voo(10000);
    carta[30].set_comprimento(84.00);
    carta[30].set_altura(18.10);
    carta[30].set_super_trunfo(false);

    carta[31].set_nome("Saab JA39 'Gripen'");
    carta[31].set_tipo("D8");
    carta[31].set_peso(13000);
    carta[31].set_velocidade(1700);
    carta[31].set_altitude_voo(18000);
    carta[31].set_comprimento(14.10);
    carta[31].set_altura(4.70);
    carta[31].set_super_trunfo(false);
}

void cartas_carro(){
    carta_c[0].set_nome("Maserati 'Assetto Corsa'");
    carta_c[0].set_tipo("A1");
    carta_c[0].set_cilindradas(3217);
    carta_c[0].set_potencia(369);
    carta_c[0].set_velocidade(280);
    carta_c[0].set_peso(1590);
    carta_c[0].set_comprimento(4.51);
    carta_c[0].set_super_trunfo(false);

    carta_c[1].set_nome("Rolls-Royce Park Ward");
    carta_c[1].set_tipo("A2");
    carta_c[1].set_cilindradas(5379);
    carta_c[1].set_potencia(326);
    carta_c[1].set_velocidade(225);
    carta_c[1].set_peso(2480);
    carta_c[1].set_comprimento(5.65);
    carta_c[1].set_super_trunfo(false);

    carta_c[2].set_nome("Lexus RX 300");
    carta_c[2].set_tipo("A3");
    carta_c[2].set_cilindradas(2995);
    carta_c[2].set_potencia(201);
    carta_c[2].set_velocidade(180);
    carta_c[2].set_peso(1865);
    carta_c[2].set_comprimento(4.58);
    carta_c[2].set_super_trunfo(false);

    carta_c[3].set_nome("Bugatti EB 16.4 Veyron");
    carta_c[3].set_tipo("A4");
    carta_c[3].set_cilindradas(7993);
    carta_c[3].set_potencia(1001);
    carta_c[3].set_velocidade(404);
    carta_c[3].set_peso(1380);
    carta_c[3].set_comprimento(4.38);
    carta_c[3].set_super_trunfo(false);

    carta_c[4].set_nome("VW D1");
    carta_c[4].set_tipo("A5");
    carta_c[4].set_cilindradas(6000);
    carta_c[4].set_potencia(450);
    carta_c[4].set_velocidade(250);
    carta_c[4].set_peso(1750);
    carta_c[4].set_comprimento(4.95);
    carta_c[4].set_super_trunfo(false);

    carta_c[5].set_nome("Binz XL");
    carta_c[5].set_tipo("A6");
    carta_c[5].set_cilindradas(4266);
    carta_c[5].set_potencia(279);
    carta_c[5].set_velocidade(230);
    carta_c[5].set_peso(2180);
    carta_c[5].set_comprimento(5.79);
    carta_c[5].set_super_trunfo(false);

    carta_c[6].set_nome("Pagani Zonda C12 S");
    carta_c[6].set_tipo("A7");
    carta_c[6].set_cilindradas(7010);
    carta_c[6].set_potencia(550);
    carta_c[6].set_velocidade(350);
    carta_c[6].set_peso(1250);
    carta_c[6].set_comprimento(4.40);
    carta_c[6].set_super_trunfo(false);

    carta_c[7].set_nome("Lexus LS 430");
    carta_c[7].set_tipo("A8");
    carta_c[7].set_cilindradas(4293);
    carta_c[7].set_potencia(282);
    carta_c[7].set_velocidade(250);
    carta_c[7].set_peso(1995);
    carta_c[7].set_comprimento(5.00);
    carta_c[7].set_super_trunfo(false);

    carta_c[8].set_nome("Jaguar XKR");
    carta_c[8].set_tipo("B1");
    carta_c[8].set_cilindradas(3996);
    carta_c[8].set_potencia(363);
    carta_c[8].set_velocidade(250);
    carta_c[8].set_peso(1715);
    carta_c[8].set_comprimento(4.76);
    carta_c[8].set_super_trunfo(false);

    carta_c[9].set_nome("Mercedes S 63 AMG");
    carta_c[9].set_tipo("B2");
    carta_c[9].set_cilindradas(6258);
    carta_c[9].set_potencia(444);
    carta_c[9].set_velocidade(250);
    carta_c[9].set_peso(2035);
    carta_c[9].set_comprimento(5.16);
    carta_c[9].set_super_trunfo(false);

    carta_c[10].set_nome("Mercedes ML 55 AMG");
    carta_c[10].set_tipo("B3");
    carta_c[10].set_cilindradas(5439);
    carta_c[10].set_potencia(347);
    carta_c[10].set_velocidade(235);
    carta_c[10].set_peso(2300);
    carta_c[10].set_comprimento(4.64);
    carta_c[10].set_super_trunfo(false);

    carta_c[11].set_nome("Ferrari 500 Maranello");
    carta_c[11].set_tipo("B4");
    carta_c[11].set_cilindradas(5474);
    carta_c[11].set_potencia(485);
    carta_c[11].set_velocidade(320);
    carta_c[11].set_peso(1690);
    carta_c[11].set_comprimento(4.55);
    carta_c[11].set_super_trunfo(false);

    carta_c[12].set_nome("ItalDesing Scighera");
    carta_c[12].set_tipo("B5");
    carta_c[12].set_cilindradas(3000);
    carta_c[12].set_potencia(400);
    carta_c[12].set_velocidade(310);
    carta_c[12].set_peso(1450);
    carta_c[12].set_comprimento(4.32);
    carta_c[12].set_super_trunfo(false);

    carta_c[13].set_nome("Hooper Rolls-Royce Emperor");
    carta_c[13].set_tipo("B6");
    carta_c[13].set_cilindradas(6748);
    carta_c[13].set_potencia(325);
    carta_c[13].set_velocidade(215);
    carta_c[13].set_peso(2440);
    carta_c[13].set_comprimento(5.82);
    carta_c[13].set_super_trunfo(false);

    carta_c[14].set_nome("Morgan Aero 8");
    carta_c[14].set_tipo("B7");
    carta_c[14].set_cilindradas(4398);
    carta_c[14].set_potencia(286);
    carta_c[14].set_velocidade(258);
    carta_c[14].set_peso(1000);
    carta_c[14].set_comprimento(4.09);
    carta_c[14].set_super_trunfo(false);

    carta_c[15].set_nome("BMW 745i");
    carta_c[15].set_tipo("B8");
    carta_c[15].set_cilindradas(4398);
    carta_c[15].set_potencia(333);
    carta_c[15].set_velocidade(250);
    carta_c[15].set_peso(1945);
    carta_c[15].set_comprimento(5.00);
    carta_c[15].set_super_trunfo(false);

    carta_c[16].set_nome("Porsche 911 GT2");
    carta_c[16].set_tipo("C1");
    carta_c[16].set_cilindradas(3600);
    carta_c[16].set_potencia(462);
    carta_c[16].set_velocidade(315);
    carta_c[16].set_peso(1451);
    carta_c[16].set_comprimento(4.45);
    carta_c[16].set_super_trunfo(false);

    carta_c[17].set_nome("Daimler Super V8");
    carta_c[17].set_tipo("C2");
    carta_c[17].set_cilindradas(3996);
    carta_c[17].set_potencia(363);
    carta_c[17].set_velocidade(250);
    carta_c[17].set_peso(1820);
    carta_c[17].set_comprimento(5.15);
    carta_c[17].set_super_trunfo(false);

    carta_c[18].set_nome("Range Rover");
    carta_c[18].set_tipo("C3");
    carta_c[18].set_cilindradas(4553);
    carta_c[18].set_potencia(218);
    carta_c[18].set_velocidade(196);
    carta_c[18].set_peso(2120);
    carta_c[18].set_comprimento(4.71);
    carta_c[18].set_super_trunfo(false);

    carta_c[19].set_nome("B. Engineering Edonis");
    carta_c[19].set_tipo("C4");
    carta_c[19].set_cilindradas(3760);
    carta_c[19].set_potencia(680);
    carta_c[19].set_velocidade(365);
    carta_c[19].set_peso(1300);
    carta_c[19].set_comprimento(4.35);
    carta_c[19].set_super_trunfo(false);

    carta_c[20].set_nome("Cadillac Imaj");
    carta_c[20].set_tipo("C5");
    carta_c[20].set_cilindradas(4200);
    carta_c[20].set_potencia(431);
    carta_c[20].set_velocidade(300);
    carta_c[20].set_peso(1850);
    carta_c[20].set_comprimento(5.10);
    carta_c[20].set_super_trunfo(false);

    carta_c[21].set_nome("American Custom Lincoln");
    carta_c[21].set_tipo("C6");
    carta_c[21].set_cilindradas(5409);
    carta_c[21].set_potencia(380);
    carta_c[21].set_velocidade(200);
    carta_c[21].set_peso(2870);
    carta_c[21].set_comprimento(6.40);
    carta_c[21].set_super_trunfo(false);

    carta_c[22].set_nome("Mega Monte Carlo");
    carta_c[22].set_tipo("C7");
    carta_c[22].set_cilindradas(5991);
    carta_c[22].set_potencia(395);
    carta_c[22].set_velocidade(500);
    carta_c[22].set_peso(1500);
    carta_c[22].set_comprimento(4.45);
    carta_c[22].set_super_trunfo(false);

    carta_c[23].set_nome("Cadillac Deville DTS");
    carta_c[23].set_tipo("C8");
    carta_c[23].set_cilindradas(4565);
    carta_c[23].set_potencia(305);
    carta_c[23].set_velocidade(240);
    carta_c[23].set_peso(1843);
    carta_c[23].set_comprimento(5.26);
    carta_c[23].set_super_trunfo(false);

    carta_c[24].set_nome("Aston Martin Vanquish");
    carta_c[24].set_tipo("D1");
    carta_c[24].set_cilindradas(5935);
    carta_c[24].set_potencia(460);
    carta_c[24].set_velocidade(306);
    carta_c[24].set_peso(1863);
    carta_c[24].set_comprimento(4.67);
    carta_c[24].set_super_trunfo(true);

    carta_c[25].set_nome("Bentley Continental T");
    carta_c[25].set_tipo("D2");
    carta_c[25].set_cilindradas(6750);
    carta_c[25].set_potencia(426);
    carta_c[25].set_velocidade(270);
    carta_c[25].set_peso(2450);
    carta_c[25].set_comprimento(5.22);
    carta_c[25].set_super_trunfo(false);

    carta_c[26].set_nome("BMW X5");
    carta_c[26].set_tipo("D3");
    carta_c[26].set_cilindradas(4398);
    carta_c[26].set_potencia(286);
    carta_c[26].set_velocidade(207);
    carta_c[26].set_peso(2170);
    carta_c[26].set_comprimento(4.67);
    carta_c[26].set_super_trunfo(false);

    carta_c[27].set_nome("Lamborghini Diablo");
    carta_c[27].set_tipo("D4");
    carta_c[27].set_cilindradas(5992);
    carta_c[27].set_potencia(550);
    carta_c[27].set_velocidade(330);
    carta_c[27].set_peso(1625);
    carta_c[27].set_comprimento(4.47);
    carta_c[27].set_super_trunfo(false);

    carta_c[28].set_nome("Chrysler Chronos");
    carta_c[28].set_tipo("D5");
    carta_c[28].set_cilindradas(5980);
    carta_c[28].set_potencia(350);
    carta_c[28].set_velocidade(280);
    carta_c[28].set_peso(1950);
    carta_c[28].set_comprimento(5.22);
    carta_c[28].set_super_trunfo(false);

    carta_c[29].set_nome("Maybach Langversion");
    carta_c[29].set_tipo("D6");
    carta_c[29].set_cilindradas(5600);
    carta_c[29].set_potencia(470);
    carta_c[29].set_velocidade(250);
    carta_c[29].set_peso(2450);
    carta_c[29].set_comprimento(6.10);
    carta_c[29].set_super_trunfo(false);

    carta_c[30].set_nome("Lotec Sirius");
    carta_c[30].set_tipo("D7");
    carta_c[30].set_cilindradas(5987);
    carta_c[30].set_potencia(1200);
    carta_c[30].set_velocidade(400);
    carta_c[30].set_peso(1380);
    carta_c[30].set_comprimento(4.12);
    carta_c[30].set_super_trunfo(false);

    carta_c[31].set_nome("Audi S8");
    carta_c[31].set_tipo("D8");
    carta_c[31].set_cilindradas(4172);
    carta_c[31].set_potencia(360);
    carta_c[31].set_velocidade(250);
    carta_c[31].set_peso(1730);
    carta_c[31].set_comprimento(5.03);
    carta_c[31].set_super_trunfo(false);
}

void cartas_dinossauro(){
    carta_d[0].set_nome("Herrerassauro");
    carta_d[0].set_tipo("A1");
    carta_d[0].set_altura(1.50);
    carta_d[0].set_peso(4.50);
    carta_d[0].set_comprimento(300);
    carta_d[0].set_viveu_ha(231);
    carta_d[0].set_super_trunfo(false);

    carta_d[1].set_nome("Pterodactilo");
    carta_d[1].set_tipo("A2");
    carta_d[1].set_altura(0.50);
    carta_d[1].set_peso(1.00);
    carta_d[1].set_comprimento(1);
    carta_d[1].set_viveu_ha(150);
    carta_d[1].set_super_trunfo(false);

    carta_d[2].set_nome("Plateossauro");
    carta_d[2].set_tipo("A3");
    carta_d[2].set_altura(2.00);
    carta_d[2].set_peso(9.00);
    carta_d[2].set_comprimento(4000);
    carta_d[2].set_viveu_ha(221);
    carta_d[2].set_super_trunfo(false);

    carta_d[3].set_nome("Ultrassauro");
    carta_d[3].set_tipo("A4");
    carta_d[3].set_altura(22.00);
    carta_d[3].set_peso(38.00);
    carta_d[3].set_comprimento(90000);
    carta_d[3].set_viveu_ha(154);
    carta_d[3].set_super_trunfo(false);

    carta_d[4].set_nome("Coelophisis");
    carta_d[4].set_tipo("A5");
    carta_d[4].set_altura(1.80);
    carta_d[4].set_peso(3.00);
    carta_d[4].set_comprimento(30);
    carta_d[4].set_viveu_ha(227);
    carta_d[4].set_super_trunfo(false);

    carta_d[5].set_nome("Othnielia");
    carta_d[5].set_tipo("A6");
    carta_d[5].set_altura(1.10);
    carta_d[5].set_peso(1.50);
    carta_d[5].set_comprimento(40);
    carta_d[5].set_viveu_ha(146);
    carta_d[5].set_super_trunfo(false);

    carta_d[6].set_nome("Eoraptor");
    carta_d[6].set_tipo("A7");
    carta_d[6].set_altura(0.80);
    carta_d[6].set_peso(1.00);
    carta_d[6].set_comprimento(10);
    carta_d[6].set_viveu_ha(231);
    carta_d[6].set_super_trunfo(false);

    carta_d[7].set_nome("Oftalmossauro");
    carta_d[7].set_tipo("A8");
    carta_d[7].set_altura(1.30);
    carta_d[7].set_peso(5.00);
    carta_d[7].set_comprimento(3000);
    carta_d[7].set_viveu_ha(165);
    carta_d[7].set_super_trunfo(false);

    carta_d[8].set_nome("Procompsognato");
    carta_d[8].set_tipo("B1");
    carta_d[8].set_altura(0.30);
    carta_d[8].set_peso(1.20);
    carta_d[8].set_comprimento(1);
    carta_d[8].set_viveu_ha(222);
    carta_d[8].set_super_trunfo(false);

    carta_d[9].set_nome("Velociraptor");
    carta_d[9].set_tipo("B2");
    carta_d[9].set_altura(1.00);
    carta_d[9].set_peso(1.80);
    carta_d[9].set_comprimento(15);
    carta_d[9].set_viveu_ha(80);
    carta_d[9].set_super_trunfo(false);

    carta_d[10].set_nome("Peteinossauro");
    carta_d[10].set_tipo("B3");
    carta_d[10].set_altura(0.30);
    carta_d[10].set_peso(0.60);
    carta_d[10].set_comprimento(0.20);
    carta_d[10].set_viveu_ha(210);
    carta_d[10].set_super_trunfo(false);

    carta_d[11].set_nome("Tiranossauro Rex");
    carta_d[11].set_tipo("B4");
    carta_d[11].set_altura(5.60);
    carta_d[11].set_peso(14.0);
    carta_d[11].set_comprimento(7000);
    carta_d[11].set_viveu_ha(68);
    carta_d[11].set_super_trunfo(true);

    carta_d[12].set_nome("Melanorossauro");
    carta_d[12].set_tipo("B5");
    carta_d[12].set_altura(12.00);
    carta_d[12].set_peso(15.00);
    carta_d[12].set_comprimento(8000);
    carta_d[12].set_viveu_ha(228);
    carta_d[12].set_super_trunfo(false);

    carta_d[13].set_nome("Carcharodontossauro");
    carta_d[13].set_tipo("B6");
    carta_d[13].set_altura(5.80);
    carta_d[13].set_peso(14.00);
    carta_d[13].set_comprimento(8000);
    carta_d[13].set_viveu_ha(113);
    carta_d[13].set_super_trunfo(false);

    carta_d[14].set_nome("Nothossauro");
    carta_d[14].set_tipo("B7");
    carta_d[14].set_altura(8.00);
    carta_d[14].set_peso(9.00);
    carta_d[14].set_comprimento(400);
    carta_d[14].set_viveu_ha(220);
    carta_d[14].set_super_trunfo(false);

    carta_d[15].set_nome("Psitacossauro");
    carta_d[15].set_tipo("B8");
    carta_d[15].set_altura(0.70);
    carta_d[15].set_peso(2.00);
    carta_d[15].set_comprimento(25);
    carta_d[15].set_viveu_ha(125);
    carta_d[15].set_super_trunfo(false);

    carta_d[16].set_nome("Patagossauro");
    carta_d[16].set_tipo("C1");
    carta_d[16].set_altura(8.00);
    carta_d[16].set_peso(18.00);
    carta_d[16].set_comprimento(16000);
    carta_d[16].set_viveu_ha(169);
    carta_d[16].set_super_trunfo(false);

    carta_d[17].set_nome("Triceratops");
    carta_d[17].set_tipo("C2");
    carta_d[17].set_altura(6.00);
    carta_d[17].set_peso(9.00);
    carta_d[17].set_comprimento(6000);
    carta_d[17].set_viveu_ha(68);
    carta_d[17].set_super_trunfo(false);

    carta_d[18].set_nome("Estegossauro");
    carta_d[18].set_tipo("C3");
    carta_d[18].set_altura(4.00);
    carta_d[18].set_peso(9.00);
    carta_d[18].set_comprimento(2000);
    carta_d[18].set_viveu_ha(156);
    carta_d[18].set_super_trunfo(false);

    carta_d[19].set_nome("Carnotauro");
    carta_d[19].set_tipo("C4");
    carta_d[19].set_altura(3.00);
    carta_d[19].set_peso(7.50);
    carta_d[19].set_comprimento(1000);
    carta_d[19].set_viveu_ha(113);
    carta_d[19].set_super_trunfo(false);

    carta_d[20].set_nome("Brachiossauro");
    carta_d[20].set_tipo("C5");
    carta_d[20].set_altura(15.00);
    carta_d[20].set_peso(28.00);
    carta_d[20].set_comprimento(50000);
    carta_d[20].set_viveu_ha(156);
    carta_d[20].set_super_trunfo(false);

    carta_d[21].set_nome("Barionix");
    carta_d[21].set_tipo("C6");
    carta_d[21].set_altura(8.00);
    carta_d[21].set_peso(12.00);
    carta_d[21].set_comprimento(2000);
    carta_d[21].set_viveu_ha(125);
    carta_d[21].set_super_trunfo(false);

    carta_d[22].set_nome("Diplodoco");
    carta_d[22].set_tipo("C7");
    carta_d[22].set_altura(5.0);
    carta_d[22].set_peso(27.0);
    carta_d[22].set_comprimento(20000);
    carta_d[22].set_viveu_ha(156);
    carta_d[22].set_super_trunfo(false);

    carta_d[23].set_nome("Oviraptor");
    carta_d[23].set_tipo("C8");
    carta_d[23].set_altura(1.30);
    carta_d[23].set_peso(2.50);
    carta_d[23].set_comprimento(35);
    carta_d[23].set_viveu_ha(80);
    carta_d[23].set_super_trunfo(false);

    carta_d[24].set_nome("Ceratossauro");
    carta_d[24].set_tipo("D1");
    carta_d[24].set_altura(2.00);
    carta_d[24].set_peso(6.00);
    carta_d[24].set_comprimento(1000);
    carta_d[24].set_viveu_ha(156);
    carta_d[24].set_super_trunfo(false);

    carta_d[25].set_nome("Baptornis");
    carta_d[25].set_tipo("D2");
    carta_d[25].set_altura(0.80);
    carta_d[25].set_peso(1.00);
    carta_d[25].set_comprimento(7);
    carta_d[25].set_viveu_ha(83);
    carta_d[25].set_super_trunfo(false);

    carta_d[26].set_nome("Alosauro");
    carta_d[26].set_tipo("D3");
    carta_d[26].set_altura(5.20);
    carta_d[26].set_peso(14.00);
    carta_d[26].set_comprimento(3600);
    carta_d[26].set_viveu_ha(156);
    carta_d[26].set_super_trunfo(false);

    carta_d[27].set_nome("Iberomesornis");
    carta_d[27].set_tipo("D4");
    carta_d[27].set_altura(0.20);
    carta_d[27].set_peso(0.10);
    carta_d[27].set_comprimento(0.03);
    carta_d[27].set_viveu_ha(125);
    carta_d[27].set_super_trunfo(false);

    carta_d[28].set_nome("Dilofossauro");
    carta_d[28].set_tipo("D5");
    carta_d[28].set_altura(2.50);
    carta_d[28].set_peso(7.00);
    carta_d[28].set_comprimento(450);
    carta_d[28].set_viveu_ha(206);
    carta_d[28].set_super_trunfo(false);

    carta_d[29].set_nome("Hylaeossauro");
    carta_d[29].set_tipo("D6");
    carta_d[29].set_altura(1.80);
    carta_d[29].set_peso(5.00);
    carta_d[29].set_comprimento(1500);
    carta_d[29].set_viveu_ha(130);
    carta_d[29].set_super_trunfo(false);

    carta_d[30].set_nome("Compsognato");
    carta_d[30].set_tipo("D7");
    carta_d[30].set_altura(0.70);
    carta_d[30].set_peso(1.00);
    carta_d[30].set_comprimento(2);
    carta_d[30].set_viveu_ha(156);
    carta_d[30].set_super_trunfo(false);

    carta_d[31].set_nome("Globidens");
    carta_d[31].set_tipo("D8");
    carta_d[31].set_altura(1.10);
    carta_d[31].set_peso(6.00);
    carta_d[31].set_comprimento(400);
    carta_d[31].set_viveu_ha(150);
    carta_d[31].set_super_trunfo(false);
}

void cartas_heroi(){
    carta_h[0].set_nome("Abominavel");
    carta_h[0].set_tipo("A1");
    carta_h[0].set_velocidade(3);
    carta_h[0].set_inteligencia(3);
    carta_h[0].set_agilidade(1);
    carta_h[0].set_forca(6);
    carta_h[0].set_habilidade(3);
    carta_h[0].set_super_trunfo(false);

    carta_h[1].set_nome("Capitao America");
    carta_h[1].set_tipo("A2");
    carta_h[1].set_velocidade(2);
    carta_h[1].set_inteligencia(3);
    carta_h[1].set_agilidade(2);
    carta_h[1].set_forca(3);
    carta_h[1].set_habilidade(6);
    carta_h[1].set_super_trunfo(false);

    carta_h[2].set_nome("Thor");
    carta_h[2].set_tipo("A3");
    carta_h[2].set_velocidade(5);
    carta_h[2].set_inteligencia(2);
    carta_h[2].set_agilidade(3);
    carta_h[2].set_forca(6);
    carta_h[2].set_habilidade(3);
    carta_h[2].set_super_trunfo(false);

    carta_h[3].set_nome("Hulk");
    carta_h[3].set_tipo("A4");
    carta_h[3].set_velocidade(5);
    carta_h[3].set_inteligencia(2);
    carta_h[3].set_agilidade(3);
    carta_h[3].set_forca(6);
    carta_h[3].set_habilidade(3);
    carta_h[3].set_super_trunfo(false);

    carta_h[4].set_nome("Nick Fury");
    carta_h[4].set_tipo("A5");
    carta_h[4].set_velocidade(2);
    carta_h[4].set_inteligencia(3);
    carta_h[4].set_agilidade(6);
    carta_h[4].set_forca(1);
    carta_h[4].set_habilidade(4);
    carta_h[4].set_super_trunfo(false);

    carta_h[5].set_nome("Viuva Negra");
    carta_h[5].set_tipo("A6");
    carta_h[5].set_velocidade(2);
    carta_h[5].set_inteligencia(3);
    carta_h[5].set_agilidade(4);
    carta_h[5].set_forca(1);
    carta_h[5].set_habilidade(6);
    carta_h[5].set_super_trunfo(false);

    carta_h[6].set_nome("Odin");
    carta_h[6].set_tipo("A7");
    carta_h[6].set_velocidade(2);
    carta_h[6].set_inteligencia(6);
    carta_h[6].set_agilidade(6);
    carta_h[6].set_forca(5);
    carta_h[6].set_habilidade(1);
    carta_h[6].set_super_trunfo(false);

    carta_h[7].set_nome("Sif");
    carta_h[7].set_tipo("A8");
    carta_h[7].set_velocidade(2);
    carta_h[7].set_inteligencia(3);
    carta_h[7].set_agilidade(3);
    carta_h[7].set_forca(4);
    carta_h[7].set_habilidade(4);
    carta_h[7].set_super_trunfo(false);

    carta_h[8].set_nome("Gaviao Arqueiro");
    carta_h[8].set_tipo("B1");
    carta_h[8].set_velocidade(1);
    carta_h[8].set_inteligencia(2);
    carta_h[8].set_agilidade(5);
    carta_h[8].set_forca(1);
    carta_h[8].set_habilidade(6);
    carta_h[8].set_super_trunfo(false);

    carta_h[9].set_nome("Agente Hill");
    carta_h[9].set_tipo("B2");
    carta_h[9].set_velocidade(1);
    carta_h[9].set_inteligencia(3);
    carta_h[9].set_agilidade(5);
    carta_h[9].set_forca(1);
    carta_h[9].set_habilidade(4);
    carta_h[9].set_super_trunfo(false);

    carta_h[10].set_nome("Agente Coulson");
    carta_h[10].set_tipo("B3");
    carta_h[10].set_velocidade(1);
    carta_h[10].set_inteligencia(2);
    carta_h[10].set_agilidade(5);
    carta_h[10].set_forca(1);
    carta_h[10].set_habilidade(3);
    carta_h[10].set_super_trunfo(false);

    carta_h[11].set_nome("Tony Stark");
    carta_h[11].set_tipo("B4");
    carta_h[11].set_velocidade(1);
    carta_h[11].set_inteligencia(6);
    carta_h[11].set_agilidade(5);
    carta_h[11].set_forca(1);
    carta_h[11].set_habilidade(1);
    carta_h[11].set_super_trunfo(false);

    carta_h[12].set_nome("Bruce Banner");
    carta_h[12].set_tipo("B5");
    carta_h[12].set_velocidade(1);
    carta_h[12].set_inteligencia(6);
    carta_h[12].set_agilidade(3);
    carta_h[12].set_forca(1);
    carta_h[12].set_habilidade(1);
    carta_h[12].set_super_trunfo(false);

    carta_h[13].set_nome("Loki");
    carta_h[13].set_tipo("B6");
    carta_h[13].set_velocidade(4);
    carta_h[13].set_inteligencia(5);
    carta_h[13].set_agilidade(5);
    carta_h[13].set_forca(5);
    carta_h[13].set_habilidade(4);
    carta_h[13].set_super_trunfo(false);

    carta_h[14].set_nome("Bucky Barnes");
    carta_h[14].set_tipo("B7");
    carta_h[14].set_velocidade(2);
    carta_h[14].set_inteligencia(3);
    carta_h[14].set_agilidade(3);
    carta_h[14].set_forca(1);
    carta_h[14].set_habilidade(3);
    carta_h[14].set_super_trunfo(false);

    carta_h[15].set_nome("Destruidor");
    carta_h[15].set_tipo("B8");
    carta_h[15].set_velocidade(4);
    carta_h[15].set_inteligencia(1);
    carta_h[15].set_agilidade(3);
    carta_h[15].set_forca(6);
    carta_h[15].set_habilidade(3);
    carta_h[15].set_super_trunfo(false);

    carta_h[16].set_nome("Chitauri");
    carta_h[16].set_tipo("C1");
    carta_h[16].set_velocidade(1);
    carta_h[16].set_inteligencia(1);
    carta_h[16].set_agilidade(3);
    carta_h[16].set_forca(2);
    carta_h[16].set_habilidade(2);
    carta_h[16].set_super_trunfo(false);

    carta_h[17].set_nome("Leviathan");
    carta_h[17].set_tipo("C2");
    carta_h[17].set_velocidade(5);
    carta_h[17].set_inteligencia(1);
    carta_h[17].set_agilidade(5);
    carta_h[17].set_forca(5);
    carta_h[17].set_habilidade(1);
    carta_h[17].set_super_trunfo(false);

    carta_h[18].set_nome("Caveira Vermelha");
    carta_h[18].set_tipo("C3");
    carta_h[18].set_velocidade(2);
    carta_h[18].set_inteligencia(3);
    carta_h[18].set_agilidade(4);
    carta_h[18].set_forca(3);
    carta_h[18].set_habilidade(4);
    carta_h[18].set_super_trunfo(false);

    carta_h[19].set_nome("Soldados Hidra");
    carta_h[19].set_tipo("C4");
    carta_h[19].set_velocidade(1);
    carta_h[19].set_inteligencia(2);
    carta_h[19].set_agilidade(4);
    carta_h[19].set_forca(2);
    carta_h[19].set_habilidade(2);
    carta_h[19].set_super_trunfo(false);

    carta_h[20].set_nome("Chicote Negro");
    carta_h[20].set_tipo("C5");
    carta_h[20].set_velocidade(2);
    carta_h[20].set_inteligencia(6);
    carta_h[20].set_agilidade(4);
    carta_h[20].set_forca(2);
    carta_h[20].set_habilidade(3);
    carta_h[20].set_super_trunfo(false);

    carta_h[21].set_nome("Homem de Ferro");
    carta_h[21].set_tipo("C6");
    carta_h[21].set_velocidade(6);
    carta_h[21].set_inteligencia(6);
    carta_h[21].set_agilidade(5);
    carta_h[21].set_forca(5);
    carta_h[21].set_habilidade(2);
    carta_h[21].set_super_trunfo(true);

    carta_h[22].set_nome("Dum Dum Dugan");
    carta_h[22].set_tipo("C7");
    carta_h[22].set_velocidade(2);
    carta_h[22].set_inteligencia(2);
    carta_h[22].set_agilidade(2);
    carta_h[22].set_forca(1);
    carta_h[22].set_habilidade(3);
    carta_h[22].set_super_trunfo(false);

    carta_h[23].set_nome("Homem de Ferro (Mark V)");
    carta_h[23].set_tipo("C8");
    carta_h[23].set_velocidade(4);
    carta_h[23].set_inteligencia(6);
    carta_h[23].set_agilidade(4);
    carta_h[23].set_forca(5);
    carta_h[23].set_habilidade(2);
    carta_h[23].set_super_trunfo(false);

    carta_h[24].set_nome("Gigante de Gelo");
    carta_h[24].set_tipo("D1");
    carta_h[24].set_velocidade(3);
    carta_h[24].set_inteligencia(2);
    carta_h[24].set_agilidade(2);
    carta_h[24].set_forca(4);
    carta_h[24].set_habilidade(3);
    carta_h[24].set_super_trunfo(false);

    carta_h[25].set_nome("Monge de Ferro");
    carta_h[25].set_tipo("D2");
    carta_h[25].set_velocidade(4);
    carta_h[25].set_inteligencia(4);
    carta_h[25].set_agilidade(5);
    carta_h[25].set_forca(5);
    carta_h[25].set_habilidade(2);
    carta_h[25].set_super_trunfo(false);

    carta_h[26].set_nome("Heimdall");
    carta_h[26].set_tipo("D3");
    carta_h[26].set_velocidade(3);
    carta_h[26].set_inteligencia(2);
    carta_h[26].set_agilidade(3);
    carta_h[26].set_forca(4);
    carta_h[26].set_habilidade(3);
    carta_h[26].set_super_trunfo(false);

    carta_h[27].set_nome("Emil Blonsk");
    carta_h[27].set_tipo("D4");
    carta_h[27].set_velocidade(3);
    carta_h[27].set_inteligencia(3);
    carta_h[27].set_agilidade(2);
    carta_h[27].set_forca(2);
    carta_h[27].set_habilidade(5);
    carta_h[27].set_super_trunfo(false);

    carta_h[28].set_nome("Howard Stark");
    carta_h[28].set_tipo("D5");
    carta_h[28].set_velocidade(1);
    carta_h[28].set_inteligencia(6);
    carta_h[28].set_agilidade(4);
    carta_h[28].set_forca(1);
    carta_h[28].set_habilidade(2);
    carta_h[28].set_super_trunfo(false);

    carta_h[29].set_nome("Maquina de Combate");
    carta_h[29].set_tipo("D6");
    carta_h[29].set_velocidade(5);
    carta_h[29].set_inteligencia(3);
    carta_h[29].set_agilidade(5);
    carta_h[29].set_forca(5);
    carta_h[29].set_habilidade(2);
    carta_h[29].set_super_trunfo(false);

    carta_h[30].set_nome("Feiticeira Escarlate");
    carta_h[30].set_tipo("D7");
    carta_h[30].set_velocidade(2);
    carta_h[30].set_inteligencia(5);
    carta_h[30].set_agilidade(1);
    carta_h[30].set_forca(2);
    carta_h[30].set_habilidade(6);
    carta_h[30].set_super_trunfo(false);

    carta_h[31].set_nome("Homem Formiga");
    carta_h[31].set_tipo("D8");
    carta_h[31].set_velocidade(4);
    carta_h[31].set_inteligencia(5);
    carta_h[31].set_agilidade(5);
    carta_h[31].set_forca(2);
    carta_h[31].set_habilidade(3);
    carta_h[31].set_super_trunfo(false);
}

void embaralhar_cartas() {
    srand(time(0));
    std::random_shuffle(&carta[0], &carta[31]);
    std::cout << ">>> Cartas Embaralhadas" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void embaralhar_cartasC() {
    srand(time(0));
    std::random_shuffle(&carta_c[0], &carta_c[31]);
    std::cout << ">>> Cartas Embaralhadas" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void embaralhar_cartasD() {
    srand(time(0));
    std::random_shuffle(&carta_d[0], &carta_d[31]);
    std::cout << ">>> Cartas Embaralhadas" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void embaralhar_cartasH() {
    srand(time(0));
    std::random_shuffle(&carta_h[0], &carta_h[31]);
    std::cout << ">>> Cartas Embaralhadas" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void inicializar_pilhas() {
    for (int i = 0; i < num_cartas / 2; i++){
        stack_1.push(carta[i]);
    }
    for (int i = num_cartas / 2; i < num_cartas; i++){
        stack_2.push(carta[i]);
    }

    std::cout << ">>> Pilhas de Cartas Montadas" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void inicializar_pilhas_c() {
    for (int i = 0; i < num_cartas / 2; i++){
        stack_1c.push(carta_c[i]);
    }
    for (int i = num_cartas / 2; i < num_cartas; i++){
        stack_2c.push(carta_c[i]);
    }

    std::cout << ">>> Pilhas de Cartas Montadas" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void inicializar_pilhas_d() {
    for (int i = 0; i < num_cartas / 2; i++){
        stack_1d.push(carta_d[i]);
    }
    for (int i = num_cartas / 2; i < num_cartas; i++){
        stack_2d.push(carta_d[i]);
    }

    std::cout << ">>> Pilhas de Cartas Montadas" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void inicializar_pilhas_h() {
    for (int i = 0; i < num_cartas / 2; i++){
        stack_1h.push(carta_h[i]);
    }
    for (int i = num_cartas / 2; i < num_cartas; i++){
        stack_2h.push(carta_h[i]);
    }

    std::cout << ">>> Pilhas de Cartas Montadas" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void jogar() {
    int rodada = 1;
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));

    while(!stack_1.empty() && !stack_2.empty()) {

        system("clear");
        std::cout << std::endl << ">>> Placar <<<" << std::endl;
        std::cout << "P1 - " << stack_1.size() << " Cartas" << " x " << stack_2.size() << " Cartas - " << "P2"<< std::endl;
        std::cout << "Rodada: " << rodada++ << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));

        if (player_atual == 1)
            jogada_player(&stack_1, &stack_2);
        else
            jogada_player(&stack_2, &stack_1);

        std::this_thread::sleep_for(std::chrono::milliseconds(5500));
    }

    if (stack_1.empty())
        std::cout << std::endl << "FIM DE JOGO - PLAYER 2 VENCEU!!!" << std::endl << std::endl;
    else
        std::cout << std::endl << "FIM DE JOGO - PLAYER 1 VENCEU!!!" << std::endl << std::endl;

    std::cout << "Total de Rodadas: " << rodada;
}

void jogarh() {
    int rodada = 1;
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));

    while(!stack_1h.empty() && !stack_2h.empty()) {

        system("clear");
        std::cout << std::endl << ">>> Placar <<<" << std::endl;
        std::cout << "P1 - " << stack_1h.size() << " Cartas" << " x " << stack_2h.size() << " Cartas - " << "P2"<< std::endl;
        std::cout << "Rodada: " << rodada++ << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));

        if (player_atual == 1)
            jogada_playerH(&stack_1h, &stack_2h);
        else
            jogada_playerH(&stack_2h, &stack_1h);

        std::this_thread::sleep_for(std::chrono::milliseconds(5500));
    }

    if (stack_1h.empty())
        std::cout << std::endl << "FIM DE JOGO - PLAYER 2 VENCEU!!!" << std::endl << std::endl;
    else
        std::cout << std::endl << "FIM DE JOGO - PLAYER 1 VENCEU!!!" << std::endl << std::endl;

    std::cout << "Total de Rodadas: " << rodada;
}

void jogarc() {
    int rodada = 1;
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));

    while(!stack_1c.empty() && !stack_2c.empty()) {

        system("clear");
        std::cout << std::endl << ">>> Placar <<<" << std::endl;
        std::cout << "P1 - " << stack_1c.size() << " Cartas" << " x " << stack_2c.size() << " Cartas - " << "P2"<< std::endl;
        std::cout << "Rodada: " << rodada++ << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));

        if (player_atual == 1)
            jogada_playerC(&stack_1c, &stack_2c);
        else
            jogada_playerC(&stack_2c, &stack_1c);

        std::this_thread::sleep_for(std::chrono::milliseconds(5500));
    }

    if (stack_1c.empty())
        std::cout << std::endl << "FIM DE JOGO - PLAYER 2 VENCEU!!!" << std::endl << std::endl;
    else
        std::cout << std::endl << "FIM DE JOGO - PLAYER 1 VENCEU!!!" << std::endl << std::endl;

    std::cout << "Total de Rodadas: " << rodada;
}

void jogard() {
    int rodada = 1;
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));

    while(!stack_1d.empty() && !stack_2d.empty()) {

        system("clear");
        std::cout << std::endl << ">>> Placar <<<" << std::endl;
        std::cout << "P1 - " << stack_1d.size() << " Cartas" << " x " << stack_2d.size() << " Cartas - " << "P2"<< std::endl;
        std::cout << "Rodada: " << rodada++ << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));

        if (player_atual == 1)
            jogada_playerD(&stack_1d, &stack_2d);
        else
            jogada_playerD(&stack_2d, &stack_1d);

        std::this_thread::sleep_for(std::chrono::milliseconds(5500));
    }

    if (stack_1d.empty())
        std::cout << std::endl << "FIM DE JOGO - PLAYER 2 VENCEU!!!" << std::endl << std::endl;
    else
        std::cout << std::endl << "FIM DE JOGO - PLAYER 1 VENCEU!!!" << std::endl << std::endl;

    std::cout << "Total de Rodadas: " << rodada;
}

int main() {

    int x = 0;
    std::cout << "Escolha o seu baralho: " << std::endl;
    std::cout << "1 - Baralho Aviao" << std::endl;
    std::cout << "2 - Baralho Carro" << std::endl;
    std::cout << "3 - Baralho Dinossauro" << std::endl;
    std::cout << "4 - Baralho Heroi" << std::endl;
    std::cin >> x;

    switch(x){
    case 1:
        std::cout << "Super Trunfo Aviao!" << std::endl;

        cartas_aviao();
        embaralhar_cartas();
        inicializar_pilhas();
        jogar();

        break;
    case 2:
        std::cout << "Super Trunfo Carro!" << std::endl;
        cartas_carro();
        embaralhar_cartasC();
        inicializar_pilhas_c();
        jogarc();


        break;
    case 3:
        std::cout << "Super Trunfo Dinossauro!" << std::endl;
        cartas_dinossauro();
        embaralhar_cartasD();
        inicializar_pilhas_d();
        jogard();

        break;
    case 4:
        std::cout << "Super Trunfo Heroi!" << std::endl;
        
        cartas_heroi();
        embaralhar_cartasH();
        inicializar_pilhas_h();
        jogarh();

        break;
    
    default:
        std::cout << "Opcao invalida!" << std::endl;
        break;
    }
    
	return 0;
}
