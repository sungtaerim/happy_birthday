#include <LiquidCrystal.h>
LiquidCrystal lcd(11, 12, 5, 4, 3, 2);
int beep = 7;

byte Heart[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000,
  0b00000
};

byte Chel_1[8] =
{
  0b01110,
  0b01110,
  0b10101,
  0b01110,
  0b00100,
  0b00100,
  0b01010,
  0b10001
};

byte Chel_2[8] =
{
  0b01110,
  0b01110,
  0b00100,
  0b01110,
  0b10101,
  0b00100,
  0b01010,
  0b10001
};

void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, Heart);
  lcd.createChar(1, Chel_1);
  lcd.createChar(2, Chel_2);
}

void loop() {
  v1();
  v2();
  v3();
  v4();
}

void v1() {
  lcd.setCursor(0, 0);
  lcd.print("Happy Birthday");
  tone(beep, 392);
  delay(300);
  tone(beep, 392);
  delay(300);
  tone(beep, 440);
  delay(600);
  tone(beep, 392);
  delay(600);
  lcd.setCursor(0, 1);
  lcd.print("to you!");
  tone(beep, 523);
  delay(600);
  tone(beep, 494);
  delay(1200);
  lcd.clear();
}

void v2() {
  lcd.setCursor(0, 0);
  lcd.print("Happy Birthday");
  tone(beep, 392);
  delay(300);
  tone(beep, 392);
  delay(300);
  tone(beep, 440);
  delay(600);
  tone(beep, 392);
  delay(600);
  lcd.setCursor(0, 1);
  lcd.print("to you!");
  tone(beep, 587);
  delay(600);
  tone(beep, 523);
  delay(1200);
  lcd.clear();
}

void v3() {
  lcd.setCursor(0, 0);
  lcd.print("Happy Birthday,");
  tone(beep, 392);
  delay(300);
  tone(beep, 392);
  delay(300);
  tone(beep, 784);
  delay(600);
  tone(beep, 659);
  delay(600);
  lcd.setCursor(0, 1);
  lcd.print("dear Deny!");
  tone(beep, 523);
  delay(300);
  tone(beep, 523);
  delay(300);
  tone(beep, 494);
  delay(600);
  tone(beep, 440);
  delay(600);
  lcd.clear();
}

void v4() {
  lcd.setCursor(0, 0);
  lcd.print("Happy Birthday");
  tone(beep, 698);
  delay(300);
  tone(beep, 698);
  delay(300);
  tone(beep, 659);
  delay(600);
  tone(beep, 523);
  delay(600);
  lcd.setCursor(0, 1);
  lcd.print("to you!");
  tone(beep, 587);
  delay(600);
  tone(beep, 523);
  delay(1200);
  lcd.clear();
  
  int index = 1;
  lcd.print("Wheee! Hooray!");
  for (int i = 0; i < 16; i++) {
    lcd.setCursor(15, 0);
    if (index == 1) {
      lcd.write(byte(index));
      index = 2;
    } else {
      lcd.write(byte(index));
      index = 1;
    }
    lcd.setCursor(i, 1);
    lcd.write(byte(0));
    delay(200);
  }
  lcd.clear();
}
