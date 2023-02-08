#define PIN_SIGNAL 1 //A1

int HistoryValue = 0;
char printBuffer[128];

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    int value = analogRead(PIN_SIGNAL); // get adc value

    if(((HistoryValue>=value) && ((HistoryValue - value) > 10)) || ((HistoryValue<value) && ((value - HistoryValue) > 10)))
    {
      sprintf(printBuffer,"ADC%d level is %d\n",PIN_SIGNAL, value);
      Serial.print(printBuffer);
      HistoryValue = value;
    }

  delay(1000);
}
