
int boiaSuperior = 8;
int boiaInferior = 7;
int releUm = 10;
int releDois = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(releUm, OUTPUT);
  pinMode(releDois, OUTPUT);
  pinMode(boiaSuperior, INPUT);
  pinMode(boiaInferior, INPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(CaixaDAguaVazia() || CaixaEnchendoOuEsvaziando()) {
    LigarReleUm();  
    EncherCaixa();
  } 
  if(CaixaDAguaCheia()) {
    DesligarReleUm();
    EsvaziarCaixa();
  }
}

bool BoiaSuperiorLigada(){
  return digitalRead(boiaSuperior) == HIGH;
}

bool BoiaInferiorLigada(){
  return digitalRead(boiaInferior) == HIGH;
}

bool CaixaDAguaCheia(){
  return BoiaSuperiorLigada() && BoiaInferiorLigada();
}

bool CaixaDAguaVazia(){
  return !BoiaSuperiorLigada() && !BoiaInferiorLigada();
}

void DesligarReleUm() {
  digitalWrite(releUm, LOW);//HIGH);  //Desliga rele 1
}

void LigarReleUm() {
  digitalWrite(releUm, HIGH);//LOW);  //Liga rele 1
}

bool CaixaEnchendoOuEsvaziando() {
  return !BoiaSuperiorLigada() && BoiaInferiorLigada();
}

void EncherCaixa() {
  while(!BoiaSuperiorLigada()) {   
  }
}

void EsvaziarCaixa() {
  while(BoiaInferiorLigada()) {    
  }
}
