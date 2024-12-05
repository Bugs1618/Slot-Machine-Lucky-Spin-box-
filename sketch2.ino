// Configuração dos pinos do LED RGB
const int ledR = 9;  // Pino para o vermelho
const int ledG = 10; // Pino para o verde
const int ledB = 11; // Pino para o azul

void setup() {
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);

  // Escolha a função a executar:
  // piscaVerdeVariasVezes();           // Para piscar verde várias vezes
  // piscaAzulUmaVez();                // Para piscar azul uma vez
  piscaTodasAsCoresRapidamente();    // Para piscar alternadamente todas as cores
}

void loop() {
  // Mantemos vazio, já que estamos testando na setup()
}

// Função para piscar verde rapidamente várias vezes
void piscaVerdeVariasVezes() {
  for (int i = 0; i < 10; i++) { // Piscar 10 vezes
    digitalWrite(ledG, HIGH); // Liga o verde
    delay(100);               // Espera 100ms
    digitalWrite(ledG, LOW);  // Desliga o verde
    delay(100);               // Espera 100ms
  }
}

// Função para piscar azul uma vez
void piscaAzulUmaVez() {
  digitalWrite(ledB, HIGH); // Liga o azul
  delay(200);               // Espera 200ms
  digitalWrite(ledB, LOW);  // Desliga o azul
}

// Função para piscar alternadamente todas as cores rapidamente
void piscaTodasAsCoresRapidamente() {
  for (int i = 0; i < 10; i++) { // Repetir 10 vezes
    digitalWrite(ledR, HIGH); // Liga o vermelho
    digitalWrite(ledG, LOW);  // Desliga o verde
    digitalWrite(ledB, LOW);  // Desliga o azul
    delay(100);               // Espera 100ms

    digitalWrite(ledR, LOW);  // Desliga o vermelho
    digitalWrite(ledG, HIGH); // Liga o verde
    digitalWrite(ledB, LOW);  // Desliga o azul
    delay(100);               // Espera 100ms

    digitalWrite(ledR, LOW);  // Desliga o vermelho
    digitalWrite(ledG, LOW);  // Desliga o verde
    digitalWrite(ledB, HIGH); // Liga o azul
    delay(100);               // Espera 100ms
  }
  
  // Garantir que o LED termine apagado
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledB, LOW);
}
