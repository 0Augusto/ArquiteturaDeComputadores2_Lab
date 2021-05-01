int entrada1 = 0;   
int entrada2 = 0;   
int entrada3 = 0;   
int saida;
int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;


void setup() {
        Serial.begin(9600);     
        pinMode(led1,OUTPUT);
        pinMode(led2,OUTPUT);
        pinMode(led3,OUTPUT);
        pinMode(led4,OUTPUT);
        }

void loop() {

                if (Serial.available() > 0) {
                
                entrada1 = Serial.parseInt();
                entrada2 = Serial.parseInt();
                entrada3 = Serial.parseInt();

               if (Serial.read()=='\n')
                {
                  saida = soma(entrada1,entrada2,entrada3);
                
                  Serial.print(saida);
                
                  if (saida == 1)
                     digitalWrite(led1,1);
                  if (saida == 2)
                     digitalWrite(led2,1);
                  if (saida == 3)
                     digitalWrite(led3,1);
                  if (saida == 4)
                     digitalWrite(led4,1);
                  if (saida == 0){
                     digitalWrite(led1,0);
                     digitalWrite(led2,0);
                     digitalWrite(led3,0);
                     digitalWrite(led4,0);
                  }
                }  
      }
}

int soma(int a, int b, int c)
{
  return(a+b+c);
}
