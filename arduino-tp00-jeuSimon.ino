int level = 1;

int buttons[] = {2, 4, 6};
int leds[] = {10, 12, 8};

int values[100] {0};


void setup() {
    Serial.begin(115200);
    randomSeed(analogRead(0));

    for(int button : buttons)
    {
        pinMode(button, INPUT);
    }

    for(int led : leds)
    {
        pinMode(led, OUTPUT);
    }

    for(int i = 0; i < 100; i++)
    {
        values[i] = random(3);
    }

}


void display()
{
    for(int i = 0; i < level; i++)
    {
        Serial.println("Afficher : " + String(i) + " " + String(leds[values[i]]));
        digitalWrite(leds[values[i]], HIGH);
        delay(1000);
        digitalWrite(leds[values[i]], LOW);
        delay(100);
    }
}

void complete()
{
    for(int i = 0; i < 3; i++)
    {
        for(int led : leds)
        {
            digitalWrite(led, HIGH);
        }
        delay(400);
        for(int led : leds)
        {
            digitalWrite(led, LOW);
        }
        delay(100);
    }
}

void loop() {
    display();
    for(int i = 0; i < level; i++)
    {
        Serial.println("Waiting for input" + String(buttons[values[i]]));
        while(digitalRead(buttons[values[i]]) == 0)
        {
            delay(10);
        }

        Serial.println("clicked");

        while(digitalRead(buttons[values[i]]) == 1)
        {
            delay(10);
        }

    }
    level = level + 1;
    Serial.println("Serie terminé");
    complete();
}
