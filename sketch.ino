#define BUZZER_PIN 8

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);

  // Escolha o som que deseja reproduzir:
  //Sound1(BUZZER_PIN);          // Som 1
  //Sound2(BUZZER_PIN);          // Som 2
  //Sound3(BUZZER_PIN);          // Som 3
  //Sound4(BUZZER_PIN);          // Som 4
  bigwinSound(BUZZER_PIN);     // Som de bigwin
  //Sound6(BUZZER_PIN);   // Som 6
  //Sound7(BUZZER_PIN); // Som 7
  //Sound8(BUZZER_PIN);    // Som 8
  //Sound9(BUZZER_PIN); // Som 9
  //Sound10(BUZZER_PIN);    // Som 10
  //Sound11(BUZZER_PIN);
  //Sound12(BUZZER_PIN);
  //Sound13(BUZZER_PIN);
  //Sound14(BUZZER_PIN);
  //Sound15(BUZZER_PIN);
}

void Sound1(int buzzerPin) {
  int melody[] = {523, 659, 784, 659, 523}; // Notas da vitória
  int noteDurations[] = {300, 300, 300, 300, 500}; // Duração das notas
  for (int i = 0; i < 5; i++) {
    tone(buzzerPin, melody[i], noteDurations[i]);
    delay(noteDurations[i]);
  }
  noTone(buzzerPin);
}

void Sound2(int buzzerPin) {
  int melody[] = {784, 659, 523}; // Notas descendentes
  int noteDurations[] = {300, 300, 400};
  for (int i = 0; i < 3; i++) {
    tone(buzzerPin, melody[i], noteDurations[i]);
    delay(noteDurations[i]);
  }
  noTone(buzzerPin);
}

void Sound3(int buzzerPin) {
  tone(buzzerPin, 600, 100); // Nota inicial
  delay(150);
  tone(buzzerPin, 800, 100); // Nota final
  delay(100);
  noTone(buzzerPin);
}

void Sound4(int buzzerPin) {
  tone(buzzerPin, 800, 200); // Frequência fixa
  delay(200);
  noTone(buzzerPin);
}

void bigwinSound(int buzzerPin) {
  for (int i = 100; i <= 1000; i += 50) {
    tone(buzzerPin, i, 50); // Frequência aumenta
    delay(50);
  }
  noTone(buzzerPin); // Para o som
}

void Sound6(int buzzerPin) {
  int melody[] = {800, 600, 500, 400, 700, 500};
  int noteDurations[] = {100, 80, 120, 90, 110, 100};
  for (int i = 0; i < 6; i++) {
    tone(buzzerPin, melody[i], noteDurations[i]);
    delay(noteDurations[i]);
  }
  noTone(buzzerPin);
}

void Sound7(int buzzerPin) {
  int melody[] = {1000, 1200, 1500, 1200, 1000};
  int noteDurations[] = {150, 100, 200, 150, 100};
  for (int i = 0; i < 5; i++) {
    tone(buzzerPin, melody[i], noteDurations[i]);
    delay(noteDurations[i]);
  }
  noTone(buzzerPin);
}

void Sound8(int buzzerPin) {
  int melody[] = {1000, 1100, 1200, 1100, 1000};
  int noteDurations[] = {300, 200, 400, 300, 250};
  for (int i = 0; i < 5; i++) {
    tone(buzzerPin, melody[i], noteDurations[i]);
    delay(noteDurations[i]);
  }
  noTone(buzzerPin);
}

void Sound9(int buzzerPin) {
  int melody[] = {400, 500, 600, 500, 400};
  int noteDurations[] = {200, 150, 200, 150, 200};
  for (int i = 0; i < 5; i++) {
    tone(buzzerPin, melody[i], noteDurations[i]);
    delay(noteDurations[i]);
  }
  noTone(buzzerPin);
}

void Sound10(int buzzerPin) {
  int melody[] = {1000, 1200, 1500, 1200, 1000};
  int noteDurations[] = {100, 80, 100, 80, 100};
  for (int i = 0; i < 5; i++) {
    tone(buzzerPin, melody[i], noteDurations[i]);
    delay(noteDurations[i] + 30);
  }
  noTone(buzzerPin);
}

void Sound11(int buzzerPin) {
  int melody[] = {300, 400, 500, 600, 700};
  int noteDurations[] = {150, 150, 150, 150, 300};
  for (int i = 0; i < 5; i++) {
    tone(buzzerPin, melody[i], noteDurations[i]);
    delay(noteDurations[i]);
  }
  noTone(buzzerPin);
}

void Sound12(int buzzerPin) {
  int melody[] = {1000, 800, 600, 400, 200};
  int noteDurations[] = {100, 200, 150, 200, 250};
  for (int i = 0; i < 5; i++) {
    tone(buzzerPin, melody[i], noteDurations[i]);
    delay(noteDurations[i]);
  }
  noTone(buzzerPin);
}

void Sound13(int buzzerPin) {
  int melody[] = {500, 700, 900, 1100, 900, 700};
  int noteDurations[] = {120, 120, 120, 120, 120, 180};
  for (int i = 0; i < 6; i++) {
    tone(buzzerPin, melody[i], noteDurations[i]);
    delay(noteDurations[i] + 20);
  }
  noTone(buzzerPin);
}

void Sound14(int buzzerPin) {
  for (int i = 0; i < 3; i++) {
    tone(buzzerPin, 1000, 100); // Nota curta
    delay(100);
    tone(buzzerPin, 800, 100);  // Nota curta descendente
    delay(100);
  }
  noTone(buzzerPin);
}

void Sound15(int buzzerPin) {
  for (int freq = 400; freq <= 1200; freq += 200) {
    tone(buzzerPin, freq, 100); // Frequência crescente
    delay(150);
  }
  for (int freq = 1200; freq >= 400; freq -= 200) {
    tone(buzzerPin, freq, 100); // Frequência decrescente
    delay(150);
  }
  noTone(buzzerPin);
}

// Função simulada para `tone()` e `noTone()`
void tone(int buzzerPin, int frequency, int duration) {
  int period = 1000000 / frequency; // Período em microssegundos
  int pulse = period / 2;          // Pulso é metade do período
  unsigned long start = millis();

  while (millis() - start < duration) {
    digitalWrite(buzzerPin, HIGH);
    delayMicroseconds(pulse);
    digitalWrite(buzzerPin, LOW);
    delayMicroseconds(pulse);
  }
}

void noTone(int buzzerPin) {
  digitalWrite(buzzerPin, LOW); // Desliga o buzzer
}

void loop() {
  // Não precisa de código no loop para esta simulação
}

