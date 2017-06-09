#define echoPin 9 //defino a entrada 9 digital do arduino como sendo a do echo
#define trigPin 10 // defino a entrada 10 digital do arduino como sendo o trigger
#define LEDverde 4 // defino a entrada 4 digital do arduino como sendo o LEDverde
#define LEDamarelo 5// defino a entrada 5 digital do arduino como sendo o LEDamarelo
#define LEDvermelho 6// defino a entrada 6 digital do arduino como sendo o LEDvermelho


void setup() {

  Serial.begin (9600);
  pinMode(trigPin, OUTPUT); //Defino o pino de trigger como saida
  pinMode(echoPin, INPUT); // Defino o pino de echo como entrada
  pinMode(LEDverde, OUTPUT); // Defino o LEDverde como saida
  pinMode(LEDamarelo, OUTPUT);//Defino o LEDamarelo como saida
  pinMode(LEDvermelho, OUTPUT);//Defino o LEDvermelho como saida
}

void loop() {
  long duracao, distancia;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duracao = pulseIn(echoPin, HIGH);
  distancia = (duracao / 2) / 29.1; // calculo a distancia, baseado no tempo de ida e volta do echo
  digitalWrite(LEDverde, LOW); //inicio o LEDverde com 0
  digitalWrite(LEDamarelo, LOW);// inicio o LEDamarelo com 0
  digitalWrite(LEDvermelho, LOW);// Inicio o LEDvermelho com 0


  if (distancia < 10) { // se a distancia for menor que 10, então ele ira mostrar a palavra "vermelho" e o LEDvermelho vai para 1
    Serial.println("Vermleho!");
    digitalWrite(LEDvermelho, HIGH);

  }

  if ( 10 <= distancia && distancia <= 30) {// se a distancia for menor ou igual a 10 e menor ou igual a 30 , então ele ira mostrar a palavra "amarelo" e o LEDamarelo vai para 1
    Serial.println("Amarelo!");
    digitalWrite(LEDamarelo, HIGH);


  }

  if (distancia > 30) { // se a distancia for maior que 30, então ele mostrara a palavra "verde" e o LEDverde vai para 1
    Serial.println("Verde!");
    digitalWrite(LEDverde, HIGH);


  }
  Serial.print(distancia); // mostrara a distancia
  Serial.println(" cm"); // coloca um  depois da distancia "CM"
  delay(500); //a cada 500 milisegundo ele ira verificar se a distancia
}
