int sensor = A0;
float measure = 0;
void setup() {
  // Comunicación seria a 9600 baudios
  Serial.begin(9600);
}


void loop() {
  
  measure = analogRead(sensor);

  if(1){// Para calibrar sensor de Distancia
      //Serial.print(distancia(measurement));
      Serial.print("mm     ADC: ");    
      Serial.println(measure); 
      delay(2000);
    }

}

float distancia(int n)
{
  long suma=0;
  for(int i=0;i<n;i++)
  {
    suma=suma+analogRead(A0);
  }  
  float adc=suma/n;
  float distancia_cm = 17569.7 * pow(adc, -1.2062);
  return(distancia_cm);
}