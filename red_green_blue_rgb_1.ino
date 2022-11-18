// Declaração dos pinos
const int pinoLEDR = 11;
const int pinoLEDG = 10;
const int pinoLEDB = 9;
const int pinoBotaoR = 7;
const int pinoBotaoG = 6;
const int pinoBotaoB = 5;

// Variáveis para armazenar o estado de cada botão
int leituraBotaoR;
int leituraBotaoG;
int leituraBotaoB;

void setup() {
  // Configura os pinos
  pinMode(pinoLEDR,OUTPUT);
  pinMode(pinoLEDG,OUTPUT);
  pinMode(pinoLEDB,OUTPUT);
  pinMode(pinoBotaoR,INPUT_PULLUP);
  pinMode(pinoBotaoG,INPUT_PULLUP);
  pinMode(pinoBotaoB,INPUT_PULLUP);
}

void loop() {
  // le estado dos botões
  leituraBotaoR = digitalRead(pinoBotaoR);
  leituraBotaoG = digitalRead(pinoBotaoG);
  leituraBotaoB = digitalRead(pinoBotaoB);

  if(leituraBotaoR == LOW) { // verifica se o botão foi pressionado
    analogWrite(pinoLEDR, 255); // aciona a cor com brilho máximo
  } else { // senão
    analogWrite(pinoLEDR, 0); // apaga o LED
  }
  
  if(leituraBotaoG == LOW) {  // verifica se o botão foi pressionado
    analogWrite(pinoLEDG, 255); // aciona a cor com brilho máximo
  } else { // senão
    analogWrite(pinoLEDG, 0); // apaga o LED
  }
  
  if(leituraBotaoB == LOW) {  // verifica se o botão foi pressionado
    analogWrite(pinoLEDB, 255); // aciona a cor com brilho máximo
  } else { // senão
    analogWrite(pinoLEDB, 0); // apaga o LED
  }
  
  delay(100); // aguarda 100 milissegundos para uma nova leitura
}