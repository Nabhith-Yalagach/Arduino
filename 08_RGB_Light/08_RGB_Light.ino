int PIN_RED     = 11;
int PIN_GREEN   = 10;
int PIN_BLUE    =  9;

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);

    pinMode(PIN_RED,   OUTPUT);
    pinMode(PIN_GREEN, OUTPUT);
    pinMode(PIN_BLUE,  OUTPUT);
}

void setColor(int red, int green, int blue) {
    analogWrite(PIN_RED,    red);
    analogWrite(PIN_GREEN,  green);
    analogWrite(PIN_BLUE,   blue);
}

void loop() {
    setColor(50, 0, 0);     // RED Color
    delay(1000);

    setColor(0, 50, 0);     // GREEN Color
    delay(1000);

    setColor(0, 0, 50);     // BLUE Color
    delay(1000);

    setColor(50, 50, 0);    // YELLOW Color
    delay(1000);

    setColor(50, 50, 50);   // WHITE Color
    delay(1000);
}