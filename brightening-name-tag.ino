const int LED_R = PIN_PA7;
const int LED_G = PIN_PA1;
const int LED_B = PIN_PA6;

const int DOT_LENGTH = 200;
const int MAX_R_BRIGHTNESS = 32;
const int MAX_G_BRIGHTNESS = 32;
const int MAX_B_BRIGHTNESS = 0;

void setup()
{
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
}

void all_led_off()
{
  analogWrite(LED_R, 0);
  analogWrite(LED_G, 0);
  analogWrite(LED_B, 0);
}

void emit_dot(int *rgb)
{
  analogWrite(LED_R, rgb[0]);
  analogWrite(LED_G, rgb[1]);
  analogWrite(LED_B, rgb[2]);
  delay(DOT_LENGTH);
  all_led_off();
  delay(DOT_LENGTH);
}

void emit_dash(int *rgb)
{
  analogWrite(LED_R, rgb[0]);
  analogWrite(LED_G, rgb[1]);
  analogWrite(LED_B, rgb[2]);
  delay(DOT_LENGTH * 3);
  all_led_off();
  delay(DOT_LENGTH);
}

void emit_separator()
{
  all_led_off();
  delay(DOT_LENGTH * 3);
}

void loop()
{
  char code[] = ".... ._ _._. _._ .. _. __.  .__. ._  "; // "HACKING PAPA "
  int rgb[] = {random(MAX_R_BRIGHTNESS), random(MAX_G_BRIGHTNESS), random(MAX_B_BRIGHTNESS)};

  for (unsigned int i = 0; i < sizeof(code); i++) {
    switch(code[i]) {
      case '.':
        emit_dot(rgb);
        break;
      case '_':
        emit_dash(rgb);
        break;
      case ' ':
        emit_separator();
        break;
      default:
        break;
    }
  }
}
