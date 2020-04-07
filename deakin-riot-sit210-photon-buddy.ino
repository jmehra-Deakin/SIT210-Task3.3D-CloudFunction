

int led1 = D7;
const int WAVEDELAY = 700;
const int PATDELAY = 2500;

void setup() {
    pinMode(led1, OUTPUT);
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", Blink);
   
}

void loop() {

}

void Blink(const char *event, const char *data)
{
    char eventValue = *data;
    
    if(eventValue == 'p')
    {
        Serial.printf("%c\n",eventValue);
        Pat();
    }
    else
    {
        Serial.printf("%c\n",eventValue);
        Wave();
    }
}

void Wave()
{
     digitalWrite(led1, HIGH);
     delay(WAVEDELAY);
     digitalWrite(led1, LOW);
     delay(500);
     digitalWrite(led1, HIGH);
     delay(WAVEDELAY);
     digitalWrite(led1, LOW);
     delay(500);
     digitalWrite(led1, HIGH);
     delay(WAVEDELAY);
     digitalWrite(led1, LOW);
    
}

void Pat()
{
     digitalWrite(led1, HIGH);
     delay(PATDELAY);
     digitalWrite(led1, LOW);
     
}
