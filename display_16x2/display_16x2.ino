#include <LiquidCrystal.h> //Inclui a biblioteca do LCD
 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //Configura os pinos do Arduino para se comunicar com o LCD
 
int temp = 900; //Inicia uma variável inteira(temp), para escrever no LCD a contagem do tempo
 
void setup()
{

lcd.begin(16, 2); //Inicia o LCD com dimensões 16x2(Colunas x Linhas)
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("Hey Man!"); //Escreve no LCD "Olá Garagista!"
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("Countdown"); //Escreve no LCD "LabdeGaragem"
 
}
 
void loop()
{

lcd.setCursor(13, 1); //Posiciona o cursor na décima quarta coluna(13) e na segunda linha(1) do LCD
lcd.print(temp); //Escreve o valor atual da variável de contagem no LCD
delay(1000); //Aguarda 1 segundo
temp--; //Incrementa variável de contagem
 
}

