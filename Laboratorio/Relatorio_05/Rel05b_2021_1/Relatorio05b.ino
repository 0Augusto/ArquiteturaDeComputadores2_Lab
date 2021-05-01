//ARQ2 - Relatório 5b
//Pinos dos leds
int red = 13;
int yellow = 12;
int green = 11;
int blue = 10;
String op;
String vetorMemoria[100];
int c;
int aux;
char x[4];
char y[4];
char s[4];

void setup() {

  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {

  vetorMemoria[0] = "0"; //Posição dos resultados
  vetorMemoria[1] = "0"; //Posição com valor de x
  vetorMemoria[2] = "0"; //Posição com valor de y
  op = "...";

  c = 3;
  while(c < 100) {

      vetorMemoria[c] = "0";
      c++;
  }
  
  c = 3;
  do{ //Preenche o vetor

    if(Serial.available() > 0) {

       op = Serial.readString();
       if(!op.equals("fim")) {
       
        vetorMemoria[c] = op;
        c++;
       }
    }
  }while(c < 100 && !op.equals("fim"));

  Serial.println("Iniciando execucao");
  aux = 3;
  while(aux < c) {

    vetorMemoria[1] = vetorMemoria[aux].charAt(0);
    switch(vetorMemoria[aux].charAt(0)) {

       case '0' : x[0] = '0';
                  x[1] = '0';
                  x[2] = '0';
                  x[3] = '0';
                  break;
       case '1' : x[0] = '1';
                  x[1] = '0';
                  x[2] = '0';
                  x[3] = '0';
                  break;
       case '2' : x[0] = '0';
                  x[1] = '1';
                  x[2] = '0';
                  x[3] = '0';
                  break;
       case '3' : x[0] = '1';
                  x[1] = '1';
                  x[2] = '0';
                  x[3] = '0';
                  break;
       case '4' : x[0] = '0';
                  x[1] = '0';
                  x[2] = '1';
                  x[3] = '0';
                  break;
       case '5' : x[0] = '1';
                  x[1] = '0';
                  x[2] = '1';
                  x[3] = '0';
                  break;
       case '6' : x[0] = '0';
                  x[1] = '1';
                  x[2] = '1';
                  x[3] = '0';
                  break;
       case '7' : x[0] = '1';
                  x[1] = '1';
                  x[2] = '1';
                  x[3] = '0';
                  break;
       case '8' : x[0] = '0';
                  x[1] = '0';
                  x[2] = '0';
                  x[3] = '1';
                  break;
       case '9' : x[0] = '1';
                  x[1] = '0';
                  x[2] = '0';
                  x[3] = '1';
                  break;
       case 'A' : x[0] = '0';
                  x[1] = '1';
                  x[2] = '0';
                  x[3] = '1';
                  break;
       case 'B' : x[0] = '1';
                  x[1] = '1';
                  x[2] = '0';
                  x[3] = '1';
                  break;
       case 'C' : x[0] = '0';
                  x[1] = '0';
                  x[2] = '1';
                  x[3] = '1';
                  break;
       case 'D' : x[0] = '1';
                  x[1] = '0';
                  x[2] = '1';
                  x[3] = '1';
                  break;
       case 'E' : x[0] = '0';
                  x[1] = '1';
                  x[2] = '1';
                  x[3] = '1';
                  break;
       case 'F' : x[0] = '1';
                  x[1] = '1';
                  x[2] = '1';
                  x[3] = '1';
                  break;
    }

    vetorMemoria[2] = vetorMemoria[aux].charAt(1);
    switch(vetorMemoria[aux].charAt(1)) {

       case '0' : y[0] = '0';
                  y[1] = '0';
                  y[2] = '0';
                  y[3] = '0';
                  break;
       case '1' : y[0] = '1';
                  y[1] = '0';
                  y[2] = '0';
                  y[3] = '0';
                  break;
       case '2' : y[0] = '0';
                  y[1] = '1';
                  y[2] = '0';
                  y[3] = '0';
                  break;
       case '3' : y[0] = '1';
                  y[1] = '1';
                  y[2] = '0';
                  y[3] = '0';
                  break;
       case '4' : y[0] = '0';
                  y[1] = '0';
                  y[2] = '1';
                  y[3] = '0';
                  break;
       case '5' : y[0] = '1';
                  y[1] = '0';
                  y[2] = '1';
                  y[3] = '0';
                  break;
       case '6' : y[0] = '0';
                  y[1] = '1';
                  y[2] = '1';
                  y[3] = '0';
                  break;
       case '7' : y[0] = '1';
                  y[1] = '1';
                  y[2] = '1';
                  y[3] = '0';
                  break;
       case '8' : y[0] = '0';
                  y[1] = '0';
                  y[2] = '0';
                  y[3] = '1';
                  break;
       case '9' : y[0] = '1';
                  y[1] = '0';
                  y[2] = '0';
                  y[3] = '1';
                  break;
       case 'A' : y[0] = '0';
                  y[1] = '1';
                  y[2] = '0';
                  y[3] = '1';
                  break;
       case 'B' : y[0] = '1';
                  y[1] = '1';
                  y[2] = '0';
                  y[3] = '1';
                  break;
       case 'C' : y[0] = '0';
                  y[1] = '0';
                  y[2] = '1';
                  y[3] = '1';
                  break;
       case 'D' : y[0] = '1';
                  y[1] = '0';
                  y[2] = '1';
                  y[3] = '1';
                  break;
       case 'E' : y[0] = '0';
                  y[1] = '1';
                  y[2] = '1';
                  y[3] = '1';
                  break;
       case 'F' : y[0] = '1';
                  y[1] = '1';
                  y[2] = '1';
                  y[3] = '1';
                  break;
    }

    switch(vetorMemoria[aux].charAt(2)) {

       case '0' : s[0] = (x[0] == '0') ? '1':'0';
                  s[1] = (x[1] == '0') ? '1':'0';
                  s[2] = (x[2] == '0') ? '1':'0';
                  s[3] = (x[3] == '0') ? '1':'0';
                  break;
       case '1' : s[0] = (x[0] == '1' || y[0] == '1') ? '0':'1';
                  s[1] = (x[1] == '1' || y[1] == '1') ? '0':'1';;
                  s[2] = (x[2] == '1' || y[2] == '1') ? '0':'1';;
                  s[3] = (x[3] == '1' || y[3] == '1') ? '0':'1';;
                  break;
       case '2' : s[0] = (x[0] == '0' && y[0] == '1') ? '1':'0';
                  s[1] = (x[1] == '0' && y[1] == '1') ? '1':'0';
                  s[2] = (x[2] == '0' && y[2] == '1') ? '1':'0';
                  s[3] = (x[3] == '0' && y[3] == '1') ? '1':'0';
                  break;
       case '3' : s[0] = '0';
                  s[1] = '0';
                  s[2] = '0';
                  s[3] = '0';
                  break;
       case '4' : s[0] = (x[0] == '1' && y[0] == '1') ? '0':'1';
                  s[1] = (x[1] == '1' && y[1] == '1') ? '0':'1';
                  s[2] = (x[2] == '1' && y[2] == '1') ? '0':'1';
                  s[3] = (x[3] == '1' && y[3] == '1') ? '0':'1';
                  break;
       case '5' : s[0] = (y[0] == '0') ? '1':'0';
                  s[1] = (y[1] == '0') ? '1':'0';
                  s[2] = (y[2] == '0') ? '1':'0';
                  s[3] = (y[3] == '0') ? '1':'0';
                  break;
       case '6' : s[0] = (x[0] != y[0]) ? '1':'0';
                  s[1] = (x[1] != y[1]) ? '1':'0';
                  s[2] = (x[2] != y[2]) ? '1':'0';
                  s[3] = (x[3] != y[3]) ? '1':'0';
                  break;
       case '7' : s[0] = (x[0] == '1' && y[0] == '0') ? '1':'0';
                  s[1] = (x[1] == '1' && y[1] == '0') ? '1':'0';
                  s[2] = (x[2] == '1' && y[2] == '0') ? '1':'0';
                  s[3] = (x[3] == '1' && y[3] == '0') ? '1':'0';
                  break;
       case '8' : s[0] = (x[0] == '0' || y[0] == '1') ? '1':'0';
                  s[1] = (x[1] == '0' || y[1] == '1') ? '1':'0';
                  s[2] = (x[2] == '0' || y[2] == '1') ? '1':'0';
                  s[3] = (x[3] == '0' || y[3] == '1') ? '1':'0';
                  break;
       case '9' : s[0] = (x[0] == y[0]) ? '1':'0';
                  s[1] = (x[1] == y[1]) ? '1':'0';
                  s[2] = (x[2] == y[2]) ? '1':'0';
                  s[3] = (x[3] == y[3]) ? '1':'0';
                  break;
       case 'A' : s[0] = y[0];
                  s[1] = y[1];
                  s[2] = y[2];
                  s[3] = y[3];
                  break;
       case 'B' : s[0] = (x[0] == '1' && y[0] == '1') ? '1':'0';
                  s[1] = (x[1] == '1' && y[1] == '1') ? '1':'0';
                  s[2] = (x[2] == '1' && y[2] == '1') ? '1':'0';
                  s[3] = (x[3] == '1' && y[3] == '1') ? '1':'0';
                  break;
       case 'C' : s[0] = '1';
                  s[1] = '1';
                  s[2] = '1';
                  s[3] = '1';
                  break;
       case 'D' : s[0] = (x[0] == '1' || y[0] == '0') ? '1':'0';
                  s[1] = (x[1] == '1' || y[1] == '0') ? '1':'0';
                  s[2] = (x[2] == '1' || y[2] == '0') ? '1':'0';
                  s[3] = (x[3] == '1' || y[3] == '0') ? '1':'0';
                  break;
       case 'E' : s[0] = (x[0] == '1' || y[0] == '1') ? '1':'0';
                  s[1] = (x[1] == '1' || y[1] == '1') ? '1':'0';
                  s[2] = (x[2] == '1' || y[2] == '1') ? '1':'0';
                  s[3] = (x[3] == '1' || y[3] == '1') ? '1':'0';
                  break;
       case 'F' : s[0] = x[0];
                  s[1] = x[1];
                  s[2] = x[2];
                  s[3] = x[3];
                  break;
    }

    int auxRes = 0;
    if(s[0] == '1') {

      digitalWrite(blue, HIGH);
      auxRes++;
    }
    if(s[1] == '1') {

      digitalWrite(green, HIGH);
      auxRes += 2;
    }
    if(s[2] == '1') {

      digitalWrite(yellow, HIGH);
      auxRes += 4;
    }
    if(s[3] == '1') {

      digitalWrite(red, HIGH);
      auxRes += 8;
    }

    switch(auxRes) {

        case 0 : vetorMemoria[0] = "0"; 
                break;
        case 1 : vetorMemoria[0] = "1";
                break;
        case 2 : vetorMemoria[0] = "2";
                break;
        case 3 : vetorMemoria[0] = "3";
                break;
        case 4 : vetorMemoria[0] = "4";
                break;
        case 5 : vetorMemoria[0] = "5";
                break;
        case 6 : vetorMemoria[0] = "6";
                break;
        case 7 : vetorMemoria[0] = "7";
                break;
        case 8 : vetorMemoria[0] = "8";
                break;
        case 9 : vetorMemoria[0] = "9";
                break;
        case 10 : vetorMemoria[0] = "A";
                break;
        case 11 : vetorMemoria[0] = "B";
                break;
        case 12 : vetorMemoria[0] = "C";
                break;
        case 13 : vetorMemoria[0] = "D";
                break;
        case 14 : vetorMemoria[0] = "E";
                break;
        case 15 : vetorMemoria[0] = "F";
                break;
    }

    Serial.println(' ');
    Serial.print(vetorMemoria[0]);
    Serial.print(' ');
    Serial.print(vetorMemoria[1]);
    Serial.print(' ');
    Serial.print(vetorMemoria[2]);
    Serial.print(' ');
    int a = 3;
    while(a < c) {

       Serial.print(vetorMemoria[a]);
       Serial.print(" ");
       a++;
    }
    Serial.println(" ");
    delay(2000);
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    aux++;
  }
  delay(2500);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
}
