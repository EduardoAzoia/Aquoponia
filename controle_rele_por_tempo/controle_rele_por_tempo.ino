int rele_um = 7;
//int rele_dois 8;
const float um_minuto = 60000;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(rele_um, OUTPUT);
//  pinMode(rele_dois, OUTPUT);
}

void loop() {  
  // put your main code here, to run repeatedly:
  ligarReleUm();
  tempoDelay(27);
  desligarReleUm();
  tempoDelay(7); 
}

void desligarReleUm() {
  digitalWrite(rele_um, HIGH);
}

void ligarReleUm() {
  digitalWrite(rele_um, LOW);
}

void tempoDelay(float minutos) {
  float minutos_em_delay = um_minuto*minutos;
  Serial.println(minutos_em_delay);
  delay(minutos_em_delay);
}
