#include <FastLED.h> 
 
// ============================================================ 
// 100 PROGRAMAS - 13 PUNTOS DE LUZ 
// ============================================================ 
// CONFIGURACION 
// ============================================================ 
 
#define DATA_PIN 6 
#define BUTTON_PIN 2 
 
#define NUM_LEDS 150 
#define BRIGHTNESS 120 
 
#define COLOR_ORDER GRB 
 
CRGB leds[NUM_LEDS]; 
 
 
// ============================================================ 
// VARIABLES 
// ============================================================ 
 
byte modo = 0; 
 
bool ultimoEstadoBoton = HIGH; 
 
unsigned long inicioModo = 0; 
 
uint8_t hue = 0; 
 
uint16_t tiempoEfecto = 0; 
 
 
// ============================================================ 
// VARIABLES PARA EFECTOS 
// ============================================================ 
 
int posicion = 0; 
int direccion = 1; 
 
bool estado = false; 
 
 
// ============================================================ 
// DECLARACIONES DE PROGRAMAS 
// ============================================================ 
 
void programa01(); 
void programa02(); 
void programa03(); 
void programa04(); 
void programa05(); 
void programa06(); 
void programa07(); 
void programa08(); 
void programa09(); 
void programa10(); 
 
void programa11(); 
void programa12(); 
void programa13(); 
void programa14(); 
void programa15(); 
void programa16(); 
void programa17(); 
void programa18(); 
void programa19(); 
void programa20(); 
 
void programa21(); 
void programa22(); 
void programa23(); 
void programa24(); 
void programa25(); 
void programa26(); 
void programa27(); 
void programa28(); 
void programa29(); 
void programa30(); 
 
void programa31(); 
void programa32(); 
void programa33(); 
void programa34(); 
void programa35(); 
void programa36(); 
void programa37(); 
void programa38(); 
void programa39(); 
void programa40(); 
 
void programa41(); 
void programa42(); 
void programa43(); 
void programa44(); 
void programa45(); 
void programa46(); 
void programa47(); 
void programa48(); 
void programa49(); 
void programa50(); 
 
void programa51(); 
void programa52(); 
void programa53(); 
void programa54(); 
void programa55(); 
void programa56(); 
void programa57(); 
void programa58(); 
void programa59(); 
void programa60(); 
 
void programa61(); 
void programa62(); 
void programa63(); 
void programa64(); 
void programa65(); 
void programa66(); 
void programa67(); 
void programa68(); 
void programa69(); 
void programa70(); 
 
void programa71(); 
void programa72(); 
void programa73(); 
void programa74(); 
void programa75(); 
void programa76(); 
void programa77(); 
void programa78(); 
void programa79(); 
void programa80(); 
 
void programa81(); 
void programa82(); 
void programa83(); 
void programa84(); 
void programa85(); 
void programa86(); 
void programa87(); 
void programa88(); 
void programa89(); 
void programa90(); 
 
void programa91(); 
void programa92(); 
void programa93(); 
void programa94(); 
void programa95(); 
void programa96(); 
void programa97(); 
void programa98(); 
void programa99(); 
void programa100(); 
 
 
// ============================================================ 
// SETUP 
// ============================================================ 
 
void setup() 
{ 
  pinMode( 
    BUTTON_PIN, 
    INPUT_PULLUP 
  ); 
 
  FastLED.addLeds< 
    WS2812B, 
    DATA_PIN, 
    COLOR_ORDER 
  >( 
    leds, 
    NUM_LEDS 
  ); 
 
  FastLED.setBrightness( 
    BRIGHTNESS 
  ); 
 
  FastLED.clear(); 
  FastLED.show(); 
 
  randomSeed( 
    analogRead(A0) 
  ); 
 
  inicioModo = millis(); 
} 
 
 
// ============================================================ 
// LOOP PRINCIPAL 
// ============================================================ 
 
void loop() 
{ 
  leerBoton(); 
 
  switch(modo) 
  { 
    case 0: 
      programa01(); 
      break; 
 
    case 1: 
      programa02(); 
      break; 
 
    case 2: 
      programa03(); 
      break; 
 
    case 3: 
      programa04(); 
      break; 
 
    case 4: 
      programa05(); 
      break; 
 
    case 5: 
      programa06(); 
      break; 
 
    case 6: 
      programa07(); 
      break; 
 
    case 7: 
      programa08(); 
      break; 
 
    case 8: 
      programa09(); 
      break; 
 
    case 9: 
      programa10(); 
      break; 
 
    case 10: 
      programa11(); 
      break; 
 
    case 11: 
      programa12(); 
      break; 
 
    case 12: 
      programa13(); 
      break; 
 
    case 13: 
      programa14(); 
      break; 
 
    case 14: 
      programa15(); 
      break; 
 
    case 15: 
      programa16(); 
      break; 
 
    case 16: 
      programa17(); 
      break; 
 
    case 17: 
      programa18(); 
      break; 
 
    case 18: 
      programa19(); 
      break; 
 
    case 19: 
      programa20(); 
      break; 
 
    case 20: 
      programa21(); 
      break; 
 
    case 21: 
      programa22(); 
      break; 
 
    case 22: 
      programa23(); 
      break; 
 
    case 23: 
      programa24(); 
      break; 
 
    case 24: 
      programa25(); 
      break; 
 
    case 25: 
      programa26(); 
      break; 
 
    case 26: 
      programa27(); 
      break; 
 
    case 27: 
      programa28(); 
      break; 
 
    case 28: 
      programa29(); 
      break; 
 
    case 29: 
      programa30(); 
      break; 
 
    case 30: 
      programa31(); 
      break; 
 
    case 31: 
      programa32(); 
      break; 
 
    case 32: 
      programa33(); 
      break; 
 
    case 33: 
      programa34(); 
      break; 
 
    case 34: 
      programa35(); 
      break; 
 
    case 35: 
      programa36(); 
      break; 
 
    case 36: 
      programa37(); 
      break; 
 
    case 37: 
      programa38(); 
      break; 
 
    case 38: 
      programa39(); 
      break; 
 
    case 39: 
      programa40(); 
      break; 
 
    case 40: 
      programa41(); 
      break; 
 
    case 41: 
      programa42(); 
      break; 
 
    case 42: 
      programa43(); 
      break; 
 
    case 43: 
      programa44(); 
      break; 
 
    case 44: 
      programa45(); 
      break; 
 
    case 45: 
      programa46(); 
      break; 
 
    case 46: 
      programa47(); 
      break; 
 
    case 47: 
      programa48(); 
      break; 
 
    case 48: 
      programa49(); 
      break; 
 
    case 49: 
      programa50(); 
      break; 
 
    case 50: 
      programa51(); 
      break; 
 
    case 51: 
      programa52(); 
      break; 
 
    case 52: 
      programa53(); 
      break; 
 
    case 53: 
      programa54(); 
      break; 
 
    case 54: 
      programa55(); 
      break; 
 
    case 55: 
      programa56(); 
      break; 
 
    case 56: 
      programa57(); 
      break; 
 
    case 57: 
      programa58(); 
      break; 
 
    case 58: 
      programa59(); 
      break; 
 
    case 59: 
      programa60(); 
      break; 
 
    case 60: 
      programa61(); 
      break; 
 
    case 61: 
      programa62(); 
      break; 
 
    case 62: 
      programa63(); 
      break; 
 
    case 63: 
      programa64(); 
      break; 
 
    case 64: 
      programa65(); 
      break; 
 
    case 65: 
      programa66(); 
      break; 
 
    case 66: 
      programa67(); 
      break; 
 
    case 67: 
      programa68(); 
      break; 
 
    case 68: 
      programa69(); 
      break; 
 
    case 69: 
      programa70(); 
      break; 
 
    case 70: 
      programa71(); 
      break; 
 
    case 71: 
      programa72(); 
      break; 
 
    case 72: 
      programa73(); 
      break; 
 
    case 73: 
      programa74(); 
      break; 
 
    case 74: 
      programa75(); 
      break; 
 
    case 75: 
      programa76(); 
      break; 
 
    case 76: 
      programa77(); 
      break; 
 
    case 77: 
      programa78(); 
      break; 
 
    case 78: 
      programa79(); 
      break; 
 
    case 79: 
      programa80(); 
      break; 
 
    case 80: 
      programa81(); 
      break; 
 
    case 81: 
      programa82(); 
      break; 
 
    case 82: 
      programa83(); 
      break; 
 
    case 83: 
      programa84(); 
      break; 
 
    case 84: 
      programa85(); 
      break; 
 
    case 85: 
      programa86(); 
      break; 
 
    case 86: 
      programa87(); 
      break; 
 
    case 87: 
      programa88(); 
      break; 
 
    case 88: 
      programa89(); 
      break; 
 
    case 89: 
      programa90(); 
      break; 
 
    case 90: 
      programa91(); 
      break; 
 
    case 91: 
      programa92(); 
      break; 
 
    case 92: 
      programa93(); 
      break; 
 
    case 93: 
      programa94(); 
      break; 
 
    case 94: 
      programa95(); 
      break; 
 
    case 95: 
      programa96(); 
      break; 
 
    case 96: 
      programa97(); 
      break; 
 
    case 97: 
      programa98(); 
      break; 
 
    case 98: 
      programa99(); 
      break; 
 
    case 99: 
      programa100(); 
      break; 
  } 
} 
 
 
// ============================================================ 
// BOTON 
// ============================================================ 
 
void leerBoton() 
{ 
  bool estadoBoton = 
    digitalRead(BUTTON_PIN); 
 
  if( 
    ultimoEstadoBoton == HIGH && 
    estadoBoton == LOW 
  ) 
  { 
    modo++; 
 
    if(modo > 99) 
    { 
      modo = 0; 
    } 
 
    inicioModo = millis(); 
 
    hue = 0; 
 
    tiempoEfecto = 0; 
 
    posicion = 0; 
 
    direccion = 1; 
 
    estado = false; 
 
    FastLED.clear(); 
    FastLED.show(); 
 
    delay(180); 
  } 
 
  ultimoEstadoBoton = 
    estadoBoton; 
} 
 
 
// ============================================================ 
// PROGRAMAS 1-5 
// COLORES SOLIDOS 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 01 - ROJO PURO 
// ============================================================ 
 
void programa01() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(255, 0, 0) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 02 - ROJO PROFUNDO 
// ============================================================ 
 
void programa02() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(150, 0, 0) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 03 - ROJO CARMESI 
// ============================================================ 
 
void programa03() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(255, 15, 40) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 04 - NARANJA 
// ============================================================ 
 
void programa04() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(255, 70, 0) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 05 - NARANJA QUEMADO 
// ============================================================ 
 
void programa05() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(200, 45, 0) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMAS 6-10 
// COLORES SOLIDOS 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 06 - AMARILLO 
// ============================================================ 
 
void programa06() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(255, 180, 0) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 07 - AMARILLO PURO 
// ============================================================ 
 
void programa07() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(255, 255, 0) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 08 - LIMA 
// ============================================================ 
 
void programa08() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(150, 255, 0) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 09 - VERDE ESMERALDA 
// ============================================================ 
 
void programa09() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(0, 255, 100) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 10 - VERDE PURO 
// ============================================================ 
 
void programa10() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(0, 255, 0) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMAS 11-15 
// COLORES SOLIDOS 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 11 - VERDE TURQUESA 
// ============================================================ 
 
void programa11() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(0, 255, 170) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 12 - TURQUESA 
// ============================================================ 
 
void programa12() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(0, 255, 220) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 13 - CIAN 
// ============================================================ 
 
void programa13() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(0, 255, 255) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 14 - CELESTE 
// ============================================================ 
 
void programa14() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(0, 180, 255) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 15 - AZUL ELECTRICO 
// ============================================================ 
 
void programa15() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(0, 80, 255) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMAS 16-20 
// COLORES SOLIDOS 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 16 - AZUL PROFUNDO 
// ============================================================ 
 
void programa16() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(0, 0, 180) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 17 - AZUL NOCHE 
// ============================================================ 
 
void programa17() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(10, 0, 80) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 18 - VIOLETA 
// ============================================================ 
 
void programa18() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(100, 0, 255) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 19 - PURPURA 
// ============================================================ 
 
void programa19() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(180, 0, 255) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 20 - MAGENTA 
// ============================================================ 
 
void programa20() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(255, 0, 255) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMAS 21-25 
// COLORES SOLIDOS 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 21 - FUCSIA 
// ============================================================ 
 
void programa21() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(255, 0, 120) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 22 - ROSA 
// ============================================================ 
 
void programa22() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(255, 40, 150) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 23 - ROSA FUERTE 
// ============================================================ 
 
void programa23() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(255, 100, 180) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 24 - BLANCO FRIO 
// ============================================================ 
 
void programa24() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(180, 220, 255) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 25 - BLANCO CALIDO 
// ============================================================ 
 
void programa25() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(255, 180, 80) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMAS 26-30 
// COLORES SOLIDOS ESPECIALES 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 26 - AMBAR 
// ============================================================ 
 
void programa26() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(255, 120, 0) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 27 - DORADO 
// ============================================================ 
 
void programa27() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(255, 190, 20) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 28 - COBRE 
// ============================================================ 
 
void programa28() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(190, 70, 20) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 29 - BLANCO PURO 
// ============================================================ 
 
void programa29() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(255, 255, 255) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMA 30 - UV / ULTRAVIOLETA 
// ============================================================ 
 
void programa30() 
{ 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB(80, 0, 160) 
  ); 
 
  FastLED.show(); 
} 
 
 
// ============================================================ 
// PROGRAMAS 31-40 
// MOVIMIENTO Y COLOR 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 31 - ARCOIRIS CIRCULAR 
// ============================================================ 
 
void programa31() 
{ 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    leds[i] = 
      CHSV( 
        hue + (i * 20), 
        255, 
        255 
      ); 
  } 
 
  FastLED.show(); 
 
  hue += 2; 
 
  delay(30); 
} 
 
 
// ============================================================ 
// PROGRAMA 32 - ONDA DE COLOR 
// ============================================================ 
 
void programa32() 
{ 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t brillo = 
      sin8( 
        (i * 35) + hue 
      ); 
 
    leds[i] = 
      CHSV( 
        hue + i * 10, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  hue += 3; 
 
  delay(25); 
} 
 
 
// ============================================================ 
// PROGRAMA 33 - PUNTO VIAJERO 
// ============================================================ 
 
void programa33() 
{ 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    100 
  ); 
 
  leds[posicion] = 
    CHSV( 
      hue, 
      255, 
      255 
    ); 
 
  FastLED.show(); 
 
  posicion += direccion; 
 
  if( 
    posicion >= NUM_LEDS - 1 
  ) 
  { 
    posicion = NUM_LEDS - 1; 
    direccion = -1; 
  } 
 
  if( 
    posicion <= 0 
  ) 
  { 
    posicion = 0; 
    direccion = 1; 
 
    hue += 30; 
  } 
 
  delay(45); 
} 
 
 
// ============================================================ 
// PROGRAMA 34 - PUNTO DOBLE 
// ============================================================ 
 
void programa34() 
{ 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    100 
  ); 
 
  int opuesto = 
    NUM_LEDS - 1 - posicion; 
 
  leds[posicion] = 
    CRGB::White; 
 
  leds[opuesto] = 
    CHSV( 
      hue, 
      255, 
      255 
    ); 
 
  FastLED.show(); 
 
  posicion += direccion; 
 
  if( 
    posicion >= NUM_LEDS 
  ) 
  { 
    posicion = 0; 
    hue += 40; 
  } 
 
  delay(50); 
} 
 
 
// ============================================================ 
// PROGRAMA 35 - REBOTE 
// ============================================================ 
 
void programa35() 
{ 
  FastLED.clear(); 
 
  leds[posicion] = 
    CHSV( 
      hue, 
      255, 
      255 
    ); 
 
  FastLED.show(); 
 
  posicion += direccion; 
 
  if( 
    posicion >= NUM_LEDS - 1 || 
    posicion <= 0 
  ) 
  { 
    direccion = -direccion; 
 
    hue += 35; 
  } 
 
  delay(60); 
} 
 
 
// ============================================================ 
// PROGRAMA 36 - SCANNER MULTICOLOR 
// ============================================================ 
 
void programa36() 
{ 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    70 
  ); 
 
  leds[posicion] = 
    CHSV( 
      hue, 
      255, 
      255 
    ); 
 
  if(posicion > 0) 
  { 
    leds[posicion - 1] = 
      CHSV( 
        hue + 10, 
        255, 
        120 
      ); 
  } 
 
  if(posicion < NUM_LEDS - 1) 
  { 
    leds[posicion + 1] = 
      CHSV( 
        hue + 20, 
        255, 
        120 
      ); 
  } 
 
  FastLED.show(); 
 
  posicion += direccion; 
 
  if( 
    posicion >= NUM_LEDS - 1 || 
    posicion <= 0 
  ) 
  { 
    direccion = -direccion; 
 
    hue += 50; 
  } 
 
  delay(45); 
} 
 
 
// ============================================================ 
// PROGRAMA 37 - COMETA 
// ============================================================ 
 
void programa37() 
{ 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    45 
  ); 
 
  leds[posicion] = 
    CHSV( 
      hue, 
      255, 
      255 
    ); 
 
  if(posicion > 0) 
  { 
    leds[posicion - 1] += 
      CHSV( 
        hue + 15, 
        255, 
        180 
      ); 
  } 
 
  if(posicion > 1) 
  { 
    leds[posicion - 2] += 
      CHSV( 
        hue + 30, 
        255, 
        100 
      ); 
  } 
 
  FastLED.show(); 
 
  posicion += direccion; 
 
  if( 
    posicion >= NUM_LEDS - 1 || 
    posicion <= 0 
  ) 
  { 
    direccion = -direccion; 
 
    hue += 25; 
  } 
 
  delay(45); 
} 
 
 
// ============================================================ 
// PROGRAMA 38 - METEORITO 
// ============================================================ 
 
void programa38() 
{ 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    80 
  ); 
 
  leds[posicion] = 
    CRGB::White; 
 
  if(posicion > 0) 
  { 
    leds[posicion - 1] = 
      CHSV( 
        hue, 
        255, 
        180 
      ); 
  } 
 
  if(posicion > 1) 
  { 
    leds[posicion - 2] = 
      CHSV( 
        hue, 
        255, 
        80 
      ); 
  } 
 
  FastLED.show(); 
 
  posicion += direccion; 
 
  if( 
    posicion >= NUM_LEDS - 1 || 
    posicion <= 0 
  ) 
  { 
    direccion = -direccion; 
    hue += 30; 
  } 
 
  delay(50); 
} 
 
 
// ============================================================ 
// PROGRAMA 39 - PERSECUCION RGB 
// ============================================================ 
 
void programa39() 
{ 
  FastLED.clear(); 
 
  for( 
    int i = 0; 
    i < NUM_LEDS; 
    i++ 
  ) 
  { 
    uint8_t fase = 
      (i * 20 + hue); 
 
    leds[i] = 
      CHSV( 
        fase, 
        255, 
        255 
      ); 
  } 
 
  FastLED.show(); 
 
  hue += 8; 
 
  delay(40); 
} 
 
 
// ============================================================ 
// PROGRAMA 40 - ESPIRAL DE COLOR 
// ============================================================ 
 
void programa40() 
{ 
  for( 
    int i = 0; 
    i < NUM_LEDS; 
    i++ 
  ) 
  { 
    uint8_t tono = 
      hue + 
      (i * 35); 
 
    uint8_t brillo = 
      sin8( 
        hue + 
        i * 45 
      ); 
 
    leds[i] = 
      CHSV( 
        tono, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  hue += 5; 
 
  delay(30); 
} 
 
 
// ============================================================ 
// PROGRAMAS 41-45 
// ENERGIA / FUEGO / PLASMA 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 41 - FUEGO 
// ============================================================ 
 
void programa41() 
{ 
  static byte calor[NUM_LEDS]; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    calor[i] = 
      qsub8( 
        calor[i], 
        random8(8, 35) 
      ); 
  } 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    if(random8() < 100) 
    { 
      calor[i] = 
        qadd8( 
          calor[i], 
          random8(30, 100) 
        ); 
    } 
  } 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t temperatura = 
      calor[i]; 
 
    if(temperatura > 220) 
      temperatura = 220; 
 
    uint8_t brillo = 
      map( 
        temperatura, 
        0, 
        220, 
        0, 
        255 
      ); 
 
    uint8_t tono; 
 
    if(temperatura < 70) 
    { 
      tono = 0; 
    } 
    else if(temperatura < 150) 
    { 
      tono = 8; 
    } 
    else 
    { 
      tono = 18; 
    } 
 
    leds[i] = 
      CHSV( 
        tono, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  delay(40); 
} 
 
 
// ============================================================ 
// PROGRAMA 42 - FUEGO INVERTIDO 
// ============================================================ 
 
void programa42() 
{ 
  static uint16_t t = 0; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t onda = 
      sin8( 
        t - i * 35 
      ); 
 
    uint8_t brillo = 
      map( 
        onda, 
        0, 
        255, 
        30, 
        255 
      ); 
 
    leds[i] = 
      CHSV( 
        5 + onda / 12, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 6; 
 
  delay(25); 
} 
 
 
// ============================================================ 
// PROGRAMA 43 - PLASMA 
// ============================================================ 
 
void programa43() 
{ 
  static uint16_t t = 0; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t onda1 = 
      sin8( 
        i * 40 + t 
      ); 
 
    uint8_t onda2 = 
      sin8( 
        i * 70 - t * 2 
      ); 
 
    uint8_t tono = 
      (onda1 + onda2) / 2; 
 
    uint8_t brillo = 
      sin8( 
        i * 30 + t * 2 
      ); 
 
    leds[i] = 
      CHSV( 
        tono, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 4; 
 
  delay(20); 
} 
 
 
// ============================================================ 
// PROGRAMA 44 - LAVA 
// ============================================================ 
 
void programa44() 
{ 
  static uint16_t t = 0; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t ruido = 
      inoise8( 
        i * 60, 
        t 
      ); 
 
    uint8_t tono = 
      map( 
        ruido, 
        0, 
        255, 
        0, 
        25 
      ); 
 
    leds[i] = 
      CHSV( 
        tono, 
        255, 
        ruido 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 4; 
 
  delay(30); 
} 
 
 
// ============================================================ 
// PROGRAMA 45 - REACTOR 
// ============================================================ 
 
void programa45() 
{ 
  static uint8_t t = 0; 
 
  uint8_t centro = 
    beatsin8( 
      18, 
      40, 
      255 
    ); 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t distancia = 
      abs( 
        i - (NUM_LEDS / 2) 
      ); 
 
    uint8_t brillo = 
      qsub8( 
        centro, 
        distancia * 20 
      ); 
 
    leds[i] = 
      CHSV( 
        160 + t / 4, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 5; 
 
  delay(20); 
} 
 
 
// ============================================================ 
// PROGRAMAS 46-50 
// ELECTRICIDAD / ENERGIA 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 46 - RELAMPAGO 
// ============================================================ 
 
void programa46() 
{ 
  static unsigned long ultimoDestello = 0; 
  static unsigned long proximoDestello = 0; 
 
  unsigned long ahora = millis(); 
 
  if( 
    ahora - ultimoDestello > 
    proximoDestello 
  ) 
  { 
    FastLED.clear(); 
 
    FastLED.show(); 
 
    delay(30); 
 
    // Primer destello 
    fill_solid( 
      leds, 
      NUM_LEDS, 
      CRGB(255, 255, 255) 
    ); 
 
    FastLED.show(); 
 
    delay(50); 
 
    // Oscuridad 
    FastLED.clear(); 
    FastLED.show(); 
 
    delay(40); 
 
    // Segundo destello 
    fill_solid( 
      leds, 
      NUM_LEDS, 
      CRGB(180, 220, 255) 
    ); 
 
    FastLED.show(); 
 
    delay(30); 
 
    FastLED.clear(); 
    FastLED.show(); 
 
    ultimoDestello = millis(); 
 
    proximoDestello = 
      random( 
        700, 
        3500 
      ); 
  } 
 
  delay(10); 
} 
 
 
// ============================================================ 
// PROGRAMA 47 - ELECTRICIDAD 
// ============================================================ 
 
void programa47() 
{ 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    80 
  ); 
 
  if( 
    random8() < 100 
  ) 
  { 
    int punto = 
      random8(NUM_LEDS); 
 
    leds[punto] = 
      CRGB(180, 220, 255); 
 
    if(punto > 0) 
    { 
      leds[punto - 1] = 
        CRGB(40, 100, 255); 
    } 
 
    if(punto < NUM_LEDS - 1) 
    { 
      leds[punto + 1] = 
        CRGB(40, 100, 255); 
    } 
  } 
 
  FastLED.show(); 
 
  delay(30); 
} 
 
 
// ============================================================ 
// PROGRAMA 48 - RADIACION 
// ============================================================ 
 
void programa48() 
{ 
  static uint16_t t = 0; 
 
  for( 
    int i = 0; 
    i < NUM_LEDS; 
    i++ 
  ) 
  { 
    uint8_t onda = 
      sin8( 
        i * 70 + t 
      ); 
 
    uint8_t brillo = 
      map( 
        onda, 
        0, 
        255, 
        30, 
        255 
      ); 
 
    leds[i] = 
      CHSV( 
        65, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 8; 
 
  delay(25); 
} 
 
 
// ============================================================ 
// PROGRAMA 49 - EXPLOSION 
// ============================================================ 
 
void programa49() 
{ 
  static int centro = -1; 
  static int radio = 0; 
  static uint8_t color = 0; 
 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    50 
  ); 
 
  if( 
    centro == -1 
  ) 
  { 
    if( 
      random8() < 35 
    ) 
    { 
      centro = 
        random8(NUM_LEDS); 
 
      radio = 0; 
 
      color = 
        random8(); 
    } 
  } 
  else 
  { 
    if( 
      centro - radio >= 0 
    ) 
    { 
      leds[ 
        centro - radio 
      ] = 
        CHSV( 
          color, 
          255, 
          255 
        ); 
    } 
 
    if( 
      centro + radio < NUM_LEDS 
    ) 
    { 
      leds[ 
        centro + radio 
      ] = 
        CHSV( 
          color, 
          255, 
          255 
        ); 
    } 
 
    radio++; 
 
    if( 
      radio > NUM_LEDS 
    ) 
    { 
      centro = -1; 
    } 
  } 
 
  FastLED.show(); 
 
  delay(40); 
} 
 
 
// ============================================================ 
// PROGRAMA 50 - PULSO NUCLEAR 
// ============================================================ 
 
void programa50() 
{ 
  uint8_t brillo = 
    beatsin8( 
      20, 
      20, 
      255 
    ); 
 
  uint8_t tono = 
    beatsin8( 
      8, 
      80, 
      180 
    ); 
 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CHSV( 
      tono, 
      255, 
      brillo 
    ) 
  ); 
 
  FastLED.show(); 
 
  delay(10); 
} 
 
 
// ============================================================ 
// PROGRAMAS 51-55 
// ESPACIO / PSICODELICOS 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 51 - VORTICE 
// ============================================================ 
 
void programa51() 
{ 
  static uint8_t t = 0; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t onda = 
      sin8( 
        i * 70 + t 
      ); 
 
    uint8_t tono = 
      t + i * 18; 
 
    leds[i] = 
      CHSV( 
        tono, 
        255, 
        onda 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 7; 
 
  delay(25); 
} 
 
 
// ============================================================ 
// PROGRAMA 52 - AGUJERO NEGRO 
// ============================================================ 
 
void programa52() 
{ 
  static uint16_t t = 0; 
 
  int centro = 
    NUM_LEDS / 2; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    int distancia = 
      abs(i - centro); 
 
    uint8_t onda = 
      sin8( 
        t + distancia * 55 
      ); 
 
    uint8_t brillo = 
      map( 
        distancia, 
        0, 
        6, 
        5, 
        220 
      ); 
 
    brillo = 
      scale8( 
        brillo, 
        onda 
      ); 
 
    leds[i] = 
      CHSV( 
        180 + t / 8, 
        255, 
        brillo 
      ); 
  } 
 
  // Centro oscuro 
  leds[centro] = 
    CRGB::Black; 
 
  FastLED.show(); 
 
  t += 5; 
 
  delay(30); 
} 
 
 
// ============================================================ 
// PROGRAMA 53 - PORTAL 
// ============================================================ 
 
void programa53() 
{ 
  static uint8_t t = 0; 
 
  int centro = 
    NUM_LEDS / 2; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    int distancia = 
      abs(i - centro); 
 
    uint8_t brillo = 
      sin8( 
        t + distancia * 45 
      ); 
 
    uint8_t tono = 
      180 + 
      t / 3 + 
      distancia * 8; 
 
    leds[i] = 
      CHSV( 
        tono, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 6; 
 
  delay(25); 
} 
 
 
// ============================================================ 
// PROGRAMA 54 - GALAXIA 
// ============================================================ 
 
void programa54() 
{ 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    30 
  ); 
 
  // Fondo azul/violeta 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    if(random8() < 25) 
    { 
      leds[i] = 
        CHSV( 
          random8(150, 210), 
          180, 
          random8(30, 100) 
        ); 
    } 
  } 
 
  // Estrellas 
  if(random8() < 90) 
  { 
    int estrella = 
      random8(NUM_LEDS); 
 
    leds[estrella] = 
      CRGB::White; 
  } 
 
  FastLED.show(); 
 
  delay(45); 
} 
 
 
// ============================================================ 
// PROGRAMA 55 - ESTRELLA FUGAZ 
// ============================================================ 
 
void programa55() 
{ 
  static int pos = -1; 
 
  static uint8_t color = 0; 
 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    70 
  ); 
 
  if(pos == -1) 
  { 
    if(random8() < 40) 
    { 
      pos = 0; 
 
      color = 
        random8( 
          150, 
          230 
        ); 
    } 
  } 
  else 
  { 
    leds[pos] = 
      CHSV( 
        color, 
        180, 
        255 
      ); 
 
    if(pos > 0) 
    { 
      leds[pos - 1] = 
        CHSV( 
          color, 
          200, 
          130 
        ); 
    } 
 
    if(pos > 1) 
    { 
      leds[pos - 2] = 
        CHSV( 
          color, 
          220, 
          60 
        ); 
    } 
 
    pos++; 
 
    if( 
      pos >= NUM_LEDS 
    ) 
    { 
      pos = -1; 
    } 
  } 
 
  FastLED.show(); 
 
  delay(45); 
} 
 
 
// ============================================================ 
// PROGRAMAS 56-60 
// SCANNERS / RADAR / EFECTOS DE BARRIDO 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 56 - CYLON MULTICOLOR 
// ============================================================ 
 
void programa56() 
{ 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    70 
  ); 
 
  leds[posicion] = 
    CHSV( 
      hue, 
      255, 
      255 
    ); 
 
  FastLED.show(); 
 
  posicion += direccion; 
 
  if( 
    posicion >= NUM_LEDS - 1 || 
    posicion <= 0 
  ) 
  { 
    direccion = -direccion; 
    hue += 35; 
  } 
 
  delay(40); 
} 
 
 
// ============================================================ 
// PROGRAMA 57 - DOBLE CYLON 
// ============================================================ 
 
void programa57() 
{ 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    80 
  ); 
 
  int opuesto = 
    NUM_LEDS - 1 - posicion; 
 
  leds[posicion] = 
    CHSV( 
      hue, 
      255, 
      255 
    ); 
 
  leds[opuesto] = 
    CHSV( 
      hue + 120, 
      255, 
      255 
    ); 
 
  FastLED.show(); 
 
  posicion += direccion; 
 
  if( 
    posicion >= NUM_LEDS - 1 || 
    posicion <= 0 
  ) 
  { 
    direccion = -direccion; 
    hue += 25; 
  } 
 
  delay(45); 
} 
 
 
// ============================================================ 
// PROGRAMA 58 - RADAR 
// ============================================================ 
 
void programa58() 
{ 
  static uint8_t t = 0; 
 
  FastLED.clear(); 
 
  int pos = 
    beatsin8( 
      15, 
      0, 
      NUM_LEDS - 1 
    ); 
 
  for( 
    int i = 0; 
    i < NUM_LEDS; 
    i++ 
  ) 
  { 
    int distancia = 
      abs(i - pos); 
 
    if(distancia == 0) 
    { 
      leds[i] = 
        CRGB::Green; 
    } 
 
    else if(distancia == 1) 
    { 
      leds[i] = 
        CRGB(0, 120, 20); 
    } 
 
    else if(distancia == 2) 
    { 
      leds[i] = 
        CRGB(0, 40, 10); 
    } 
  } 
 
  FastLED.show(); 
 
  t++; 
 
  delay(30); 
} 
 
 
// ============================================================ 
// PROGRAMA 59 - SCANNER CIRCULAR 
// ============================================================ 
 
void programa59() 
{ 
  static uint8_t t = 0; 
 
  FastLED.clear(); 
 
  int centro = 
    NUM_LEDS / 2; 
 
  int desplazamiento = 
    sin8(t) / 32; 
 
  for( 
    int i = 0; 
    i < NUM_LEDS; 
    i++ 
  ) 
  { 
    int distancia = 
      abs(i - centro); 
 
    uint8_t brillo = 
      sin8( 
        t + distancia * 60 
      ); 
 
    leds[i] = 
      CHSV( 
        hue + distancia * 20, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 8; 
  hue += 2; 
 
  delay(30); 
} 
 
 
// ============================================================ 
// PROGRAMA 60 - OJO DEMONIACO 
// ============================================================ 
 
void programa60() 
{ 
  static uint8_t t = 0; 
 
  int centro = 
    NUM_LEDS / 2; 
 
  for( 
    int i = 0; 
    i < NUM_LEDS; 
    i++ 
  ) 
  { 
    int distancia = 
      abs(i - centro); 
 
    uint8_t brillo; 
 
    if(distancia == 0) 
    { 
      brillo = 
        beatsin8( 
          18, 
          150, 
          255 
        ); 
    } 
    else 
    { 
      brillo = 
        qsub8( 
          180, 
          distancia * 28 
        ); 
 
      brillo = 
        scale8( 
          brillo, 
          sin8( 
            t + i * 30 
          ) 
        ); 
    } 
 
    leds[i] = 
      CHSV( 
        0, 
        255, 
        brillo 
      ); 
  } 
 
  // Pupila negra 
  leds[centro] = 
    CHSV( 
      0, 
      255, 
      beatsin8( 
        18, 
        180, 
        255 
      ) 
    ); 
 
  FastLED.show(); 
 
  t += 5; 
 
  delay(25); 
} 
 
 
// ============================================================ 
// PROGRAMAS 61-65 
// GLITCH / RAVE / CAOS 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 61 - GLITCH 
// ============================================================ 
 
void programa61() 
{ 
  static uint8_t t = 0; 
 
  if(random8() < 100) 
  { 
    for(int i = 0; i < NUM_LEDS; i++) 
    { 
      leds[i] = 
        CHSV( 
          random8(), 
          255, 
          random8(80, 255) 
        ); 
    } 
  } 
  else 
  { 
    for(int i = 0; i < NUM_LEDS; i++) 
    { 
      leds[i] = 
        CRGB::Black; 
    } 
 
    int cantidad = 
      random8(1, 5); 
 
    for(int i = 0; i < cantidad; i++) 
    { 
      leds[random8(NUM_LEDS)] = 
        CHSV( 
          random8(), 
          255, 
          255 
        ); 
    } 
  } 
 
  FastLED.show(); 
 
  t += 13; 
 
  delay(random8(30, 100)); 
} 
 
 
// ============================================================ 
// PROGRAMA 62 - ESTROBOSCOPICO RGB 
// ============================================================ 
 
void programa62() 
{ 
  static byte color = 0; 
 
  if(color == 0) 
  { 
    fill_solid( 
      leds, 
      NUM_LEDS, 
      CRGB::Red 
    ); 
  } 
 
  else if(color == 1) 
  { 
    fill_solid( 
      leds, 
      NUM_LEDS, 
      CRGB::Blue 
    ); 
  } 
 
  else 
  { 
    fill_solid( 
      leds, 
      NUM_LEDS, 
      CRGB::Green 
    ); 
  } 
 
  FastLED.show(); 
 
  delay(45); 
 
  FastLED.clear(); 
 
  FastLED.show(); 
 
  delay(35); 
 
  color++; 
 
  if(color > 2) 
  { 
    color = 0; 
  } 
} 
 
 
// ============================================================ 
// PROGRAMA 63 - RAVE 
// ============================================================ 
 
void programa63() 
{ 
  static uint8_t t = 0; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t brillo = 
      beatsin8( 
        30, 
        80, 
        255, 
        0, 
        i * 15 
      ); 
 
    leds[i] = 
      CHSV( 
        t + i * 25, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 12; 
 
  delay(20); 
} 
 
 
// ============================================================ 
// PROGRAMA 64 - DISCOTECA 
// ============================================================ 
 
void programa64() 
{ 
  static unsigned long ultimoCambio = 0; 
 
  if( 
    millis() - ultimoCambio > 
    random(60, 180) 
  ) 
  { 
    for(int i = 0; i < NUM_LEDS; i++) 
    { 
      leds[i] = 
        CHSV( 
          random8(), 
          255, 
          random8(100, 255) 
        ); 
    } 
 
    FastLED.show(); 
 
    ultimoCambio = 
      millis(); 
  } 
 
  delay(10); 
} 
 
 
// ============================================================ 
// PROGRAMA 65 - CAOS DE COLORES 
// ============================================================ 
 
void programa65() 
{ 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    35 
  ); 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    if(random8() < 45) 
    { 
      leds[i] = 
        CHSV( 
          random8(), 
          255, 
          random8(120, 255) 
        ); 
    } 
  } 
 
  FastLED.show(); 
 
  delay(35); 
} 
 
 
// ============================================================ 
// PROGRAMAS 66-70 
// FUEGOS / TORMENTA / ENERGIA 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 66 - FUEGOS ARTIFICIALES 
// ============================================================ 
 
void programa66() 
{ 
  static int centro = -1; 
  static byte radio = 0; 
  static uint8_t color = 0; 
 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    35 
  ); 
 
  if(centro == -1) 
  { 
    if(random8() < 45) 
    { 
      centro = 
        random8(NUM_LEDS); 
 
      radio = 0; 
 
      color = 
        random8(); 
    } 
  } 
  else 
  { 
    int izquierda = 
      centro - radio; 
 
    int derecha = 
      centro + radio; 
 
    if(izquierda >= 0) 
    { 
      leds[izquierda] = 
        CHSV( 
          color, 
          255, 
          255 
        ); 
    } 
 
    if(derecha < NUM_LEDS) 
    { 
      leds[derecha] = 
        CHSV( 
          color, 
          255, 
          255 
        ); 
    } 
 
    radio++; 
 
    if(radio > NUM_LEDS) 
    { 
      centro = -1; 
    } 
  } 
 
  FastLED.show(); 
 
  delay(55); 
} 
 
 
// ============================================================ 
// PROGRAMA 67 - CHISPAS ELECTRICAS 
// ============================================================ 
 
void programa67() 
{ 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    90 
  ); 
 
  if(random8() < 130) 
  { 
    int punto = 
      random8(NUM_LEDS); 
 
    leds[punto] = 
      CRGB(255, 255, 255); 
 
    if(punto > 0) 
    { 
      leds[punto - 1] = 
        CRGB(80, 160, 255); 
    } 
 
    if(punto < NUM_LEDS - 1) 
    { 
      leds[punto + 1] = 
        CRGB(80, 160, 255); 
    } 
  } 
 
  FastLED.show(); 
 
  delay(25); 
} 
 
 
// ============================================================ 
// PROGRAMA 68 - TORMENTA 
// ============================================================ 
 
void programa68() 
{ 
  static unsigned long ultimo = 0; 
 
  unsigned long ahora = 
    millis(); 
 
  if( 
    ahora - ultimo > 
    random(500, 3000) 
  ) 
  { 
    FastLED.clear(); 
 
    FastLED.show(); 
 
    delay(40); 
 
    fill_solid( 
      leds, 
      NUM_LEDS, 
      CRGB::White 
    ); 
 
    FastLED.show(); 
 
    delay(35); 
 
    FastLED.clear(); 
 
    FastLED.show(); 
 
    delay(60); 
 
    fill_solid( 
      leds, 
      NUM_LEDS, 
      CRGB(100, 150, 255) 
    ); 
 
    FastLED.show(); 
 
    delay(25); 
 
    FastLED.clear(); 
 
    FastLED.show(); 
 
    ultimo = 
      millis(); 
  } 
 
  delay(10); 
} 
 
 
// ============================================================ 
// PROGRAMA 69 - BOMBA DE ENERGIA 
// ============================================================ 
 
void programa69() 
{ 
  static uint8_t t = 0; 
 
  uint8_t pulso = 
    beatsin8( 
      22, 
      20, 
      255 
    ); 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    int distancia = 
      abs( 
        i - NUM_LEDS / 2 
      ); 
 
    uint8_t brillo = 
      qsub8( 
        pulso, 
        distancia * 25 
      ); 
 
    leds[i] = 
      CHSV( 
        160 + t / 5, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 10; 
 
  delay(15); 
} 
 
 
// ============================================================ 
// PROGRAMA 70 - SUPERNOVA 
// ============================================================ 
 
void programa70() 
{ 
  static uint8_t t = 0; 
 
  int centro = 
    NUM_LEDS / 2; 
 
  uint8_t energia = 
    beatsin8( 
      15, 
      30, 
      255 
    ); 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    int distancia = 
      abs(i - centro); 
 
    uint8_t brillo = 
      qsub8( 
        energia, 
        distancia * 20 
      ); 
 
    leds[i] = 
      CHSV( 
        180 + t / 3, 
        180, 
        brillo 
      ); 
  } 
 
  // Núcleo de la supernova 
  leds[centro] = 
    CRGB( 
      energia, 
      energia, 
      255 
    ); 
 
  FastLED.show(); 
 
  t += 8; 
 
  delay(20); 
} 
 
 
// ============================================================ 
// PROGRAMAS 71-75 
// EFECTOS EXTRAÑOS / FANTASIA 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 71 - FANTASMA 
// ============================================================ 
 
void programa71() 
{ 
  static uint8_t t = 0; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t brillo = 
      sin8( 
        t + i * 25 
      ); 
 
    brillo = 
      map( 
        brillo, 
        0, 
        255, 
        5, 
        180 
      ); 
 
    leds[i] = 
      CHSV( 
        150, 
        35, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 3; 
 
  delay(30); 
} 
 
 
// ============================================================ 
// PROGRAMA 72 - HIELO MAGICO 
// ============================================================ 
 
void programa72() 
{ 
  static uint16_t t = 0; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t brillo = 
      sin8( 
        t + i * 45 
      ); 
 
    uint8_t tono = 
      140 + 
      sin8( 
        t * 2 + i * 20 
      ) / 8; 
 
    leds[i] = 
      CHSV( 
        tono, 
        100, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 4; 
 
  delay(25); 
} 
 
 
// ============================================================ 
// PROGRAMA 73 - FUEGO AZUL 
// ============================================================ 
 
void programa73() 
{ 
  static byte calor[NUM_LEDS]; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    calor[i] = 
      qsub8( 
        calor[i], 
        random8(8, 30) 
      ); 
  } 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    if(random8() < 100) 
    { 
      calor[i] = 
        qadd8( 
          calor[i], 
          random8(30, 110) 
        ); 
    } 
  } 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t brillo = 
      calor[i]; 
 
    leds[i] = 
      CHSV( 
        155, 
        220, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  delay(40); 
} 
 
 
// ============================================================ 
// PROGRAMA 74 - ARCO ELECTRICO 
// ============================================================ 
 
void programa74() 
{ 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    110 
  ); 
 
  int posicionArco = 
    random8(NUM_LEDS); 
 
  if(random8() < 120) 
  { 
    leds[posicionArco] = 
      CRGB::White; 
 
    if(posicionArco > 0) 
    { 
      leds[posicionArco - 1] = 
        CRGB(60, 140, 255); 
    } 
 
    if(posicionArco < NUM_LEDS - 1) 
    { 
      leds[posicionArco + 1] = 
        CRGB(60, 140, 255); 
    } 
 
    if( 
      posicionArco > 1 && 
      random8() < 100 
    ) 
    { 
      leds[posicionArco - 2] = 
        CRGB(20, 60, 180); 
    } 
 
    if( 
      posicionArco < NUM_LEDS - 2 && 
      random8() < 100 
    ) 
    { 
      leds[posicionArco + 2] = 
        CRGB(20, 60, 180); 
    } 
  } 
 
  FastLED.show(); 
 
  delay(25); 
} 
 
 
// ============================================================ 
// PROGRAMA 75 - AGUJERO DE GUSANO 
// ============================================================ 
 
void programa75() 
{ 
  static uint16_t t = 0; 
 
  int centro = 
    NUM_LEDS / 2; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    int distancia = 
      abs(i - centro); 
 
    uint8_t onda = 
      sin8( 
        t + distancia * 65 
      ); 
 
    uint8_t brillo = 
      map( 
        onda, 
        0, 
        255, 
        10, 
        255 
      ); 
 
    leds[i] = 
      CHSV( 
        190 + t / 4, 
        255, 
        brillo 
      ); 
  } 
 
  // Núcleo oscuro 
  if(random8() < 180) 
  { 
    leds[centro] = 
      CRGB::Black; 
  } 
 
  FastLED.show(); 
 
  t += 8; 
 
  delay(25); 
} 
 
 
// ============================================================ 
// PROGRAMAS 76-80 
// DIGITAL / MATRIX / PSICODELICOS 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 76 - MATRIX 
// ============================================================ 
 
void programa76() 
{ 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    60 
  ); 
 
  if(random8() < 120) 
  { 
    int posicionMatrix = 
      random8(NUM_LEDS); 
 
    leds[posicionMatrix] = 
      CRGB( 
        0, 
        255, 
        random8(20, 80) 
      ); 
  } 
 
  FastLED.show(); 
 
  delay(35); 
} 
 
 
// ============================================================ 
// PROGRAMA 77 - CODIGO DIGITAL 
// ============================================================ 
 
void programa77() 
{ 
  static uint8_t t = 0; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t patron = 
      sin8( 
        t + i * 80 
      ); 
 
    if(patron > 210) 
    { 
      leds[i] = 
        CRGB( 
          20, 
          255, 
          30 
        ); 
    } 
    else if(patron > 130) 
    { 
      leds[i] = 
        CRGB( 
          0, 
          100, 
          20 
        ); 
    } 
    else 
    { 
      leds[i] = 
        CRGB::Black; 
    } 
  } 
 
  FastLED.show(); 
 
  t += 12; 
 
  delay(30); 
} 
 
 
// ============================================================ 
// PROGRAMA 78 - FUEGO VERDE 
// ============================================================ 
 
void programa78() 
{ 
  static byte calor[NUM_LEDS]; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    calor[i] = 
      qsub8( 
        calor[i], 
        random8(10, 35) 
      ); 
  } 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    if(random8() < 100) 
    { 
      calor[i] = 
        qadd8( 
          calor[i], 
          random8(30, 120) 
        ); 
    } 
  } 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t brillo = 
      calor[i]; 
 
    leds[i] = 
      CHSV( 
        80, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  delay(40); 
} 
 
 
// ============================================================ 
// PROGRAMA 79 - VENENO 
// ============================================================ 
 
void programa79() 
{ 
  static uint8_t t = 0; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t onda = 
      sin8( 
        t + i * 45 
      ); 
 
    uint8_t brillo = 
      map( 
        onda, 
        0, 
        255, 
        20, 
        255 
      ); 
 
    leds[i] = 
      CHSV( 
        75 + onda / 10, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 6; 
 
  delay(25); 
} 
 
 
// ============================================================ 
// PROGRAMA 80 - ARCOIRIS FRACTURADO 
// ============================================================ 
 
void programa80() 
{ 
  static uint8_t t = 0; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t salto; 
 
    if(i % 2 == 0) 
    { 
      salto = i * 35; 
    } 
    else 
    { 
      salto = 255 - i * 35; 
    } 
 
    uint8_t brillo = 
      sin8( 
        t + i * 50 
      ); 
 
    leds[i] = 
      CHSV( 
        t + salto, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 9; 
 
  delay(25); 
} 
 
 
// ============================================================ 
// PROGRAMAS 81-85 
// RESPIRACION / LATIDOS / PULSOS 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 81 - RESPIRACION ARCOIRIS 
// ============================================================ 
 
void programa81() 
{ 
  static uint8_t t = 0; 
 
  uint8_t brillo = 
    beatsin8( 
      10, 
      15, 
      255 
    ); 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    leds[i] = 
      CHSV( 
        t + i * 12, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 2; 
 
  delay(15); 
} 
 
 
// ============================================================ 
// PROGRAMA 82 - RESPIRACION VIOLETA 
// ============================================================ 
 
void programa82() 
{ 
  uint8_t brillo = 
    beatsin8( 
      9, 
      10, 
      255 
    ); 
 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CHSV( 
      190, 
      255, 
      brillo 
    ) 
  ); 
 
  FastLED.show(); 
 
  delay(10); 
} 
 
 
// ============================================================ 
// PROGRAMA 83 - CORAZON 
// ============================================================ 
 
void programa83() 
{ 
  static uint8_t fase = 0; 
 
  uint8_t brillo; 
 
  if(fase < 20) 
  { 
    brillo = 
      map( 
        fase, 
        0, 
        19, 
        30, 
        255 
      ); 
  } 
  else if(fase < 40) 
  { 
    brillo = 
      map( 
        fase, 
        20, 
        39, 
        255, 
        40 
      ); 
  } 
  else if(fase < 55) 
  { 
    brillo = 
      map( 
        fase, 
        40, 
        54, 
        40, 
        220 
      ); 
  } 
  else 
  { 
    brillo = 
      map( 
        fase, 
        55, 
        99, 
        220, 
        25 
      ); 
  } 
 
  fill_solid( 
    leds, 
    NUM_LEDS, 
    CRGB( 
      brillo, 
      0, 
      0 
    ) 
  ); 
 
  FastLED.show(); 
 
  fase++; 
 
  if(fase >= 100) 
  { 
    fase = 0; 
  } 
 
  delay(10); 
} 
 
 
// ============================================================ 
// PROGRAMA 84 - PULSO AZUL 
// ============================================================ 
 
void programa84() 
{ 
  uint8_t brillo = 
    beatsin8( 
      18, 
      5, 
      255 
    ); 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t variacion = 
      sin8( 
        i * 30 
      ); 
 
    uint8_t nivel = 
      scale8( 
        brillo, 
        180 + variacion / 4 
      ); 
 
    leds[i] = 
      CHSV( 
        160, 
        255, 
        nivel 
      ); 
  } 
 
  FastLED.show(); 
 
  delay(10); 
} 
 
 
// ============================================================ 
// PROGRAMA 85 - PULSO DE ENERGIA 
// ============================================================ 
 
void programa85() 
{ 
  static uint8_t t = 0; 
 
  uint8_t pulso = 
    beatsin8( 
      25, 
      20, 
      255 
    ); 
 
  int centro = 
    NUM_LEDS / 2; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    int distancia = 
      abs( 
        i - centro 
      ); 
 
    uint8_t brillo = 
      qsub8( 
        pulso, 
        distancia * 22 
      ); 
 
    leds[i] = 
      CHSV( 
        110 + t, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 4; 
 
  delay(10); 
} 
 
 
// ============================================================ 
// PROGRAMAS 86-90 
// ALARMA / EMERGENCIA / SEÑALES 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 86 - SEMAFORO FUTURISTA 
// ============================================================ 
 
void programa86() 
{ 
  static byte estado = 0; 
  static unsigned long ultimo = 0; 
 
  if(millis() - ultimo >= 900) 
  { 
    ultimo = millis(); 
 
    estado++; 
 
    if(estado > 2) 
    { 
      estado = 0; 
    } 
  } 
 
  if(estado == 0) 
  { 
    fill_solid( 
      leds, 
      NUM_LEDS, 
      CRGB::Red 
    ); 
  } 
  else if(estado == 1) 
  { 
    fill_solid( 
      leds, 
      NUM_LEDS, 
      CRGB::Yellow 
    ); 
  } 
  else 
  { 
    fill_solid( 
      leds, 
      NUM_LEDS, 
      CRGB::Green 
    ); 
  } 
 
  FastLED.show(); 
 
  delay(20); 
} 
 
 
// ============================================================ 
// PROGRAMA 87 - NAVIDAD 
// ============================================================ 
 
void programa87() 
{ 
  static bool estado = false; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    if((i % 2) == 0) 
    { 
      leds[i] = 
        estado 
        ? CRGB::Red 
        : CRGB::Green; 
    } 
    else 
    { 
      leds[i] = 
        estado 
        ? CRGB::Green 
        : CRGB::Red; 
    } 
  } 
 
  estado = !estado; 
 
  FastLED.show(); 
 
  delay(300); 
} 
 
 
// ============================================================ 
// PROGRAMA 88 - ALARMA 
// ============================================================ 
 
void programa88() 
{ 
  static bool estado = false; 
 
  if(estado) 
  { 
    fill_solid( 
      leds, 
      NUM_LEDS, 
      CRGB::Red 
    ); 
  } 
  else 
  { 
    fill_solid( 
      leds, 
      NUM_LEDS, 
      CRGB::Blue 
    ); 
  } 
 
  estado = !estado; 
 
  FastLED.show(); 
 
  delay(130); 
} 
 
 
// ============================================================ 
// PROGRAMA 89 - POLICIA 
// ============================================================ 
 
void programa89() 
{ 
  static bool estado = false; 
 
  int mitad = 
    NUM_LEDS / 2; 
 
  FastLED.clear(); 
 
  if(estado) 
  { 
    for(int i = 0; i < mitad; i++) 
    { 
      leds[i] = 
        CRGB::Red; 
    } 
 
    for(int i = mitad; i < NUM_LEDS; i++) 
    { 
      leds[i] = 
        CRGB::Blue; 
    } 
  } 
  else 
  { 
    for(int i = 0; i < mitad; i++) 
    { 
      leds[i] = 
        CRGB::Blue; 
    } 
 
    for(int i = mitad; i < NUM_LEDS; i++) 
    { 
      leds[i] = 
        CRGB::Red; 
    } 
  } 
 
  estado = !estado; 
 
  FastLED.show(); 
 
  delay(120); 
} 
 
 
// ============================================================ 
// PROGRAMA 90 - AMBULANCIA 
// ============================================================ 
 
void programa90() 
{ 
  static byte estado = 0; 
 
  FastLED.clear(); 
 
  if(estado == 0) 
  { 
    // Todo rojo 
    fill_solid( 
      leds, 
      NUM_LEDS, 
      CRGB::Red 
    ); 
  } 
  else if(estado == 1) 
  { 
    // Todo blanco 
    fill_solid( 
      leds, 
      NUM_LEDS, 
      CRGB::White 
    ); 
  } 
  else if(estado == 2) 
  { 
    // Centro rojo 
    for(int i = 0; i < NUM_LEDS; i++) 
    { 
      leds[i] = 
        CRGB::White; 
    } 
 
    leds[NUM_LEDS / 2] = 
      CRGB::Red; 
  } 
  else 
  { 
    // Todo apagado 
    FastLED.clear(); 
  } 
 
  FastLED.show(); 
 
  estado++; 
 
  if(estado > 3) 
  { 
    estado = 0; 
  } 
 
  delay(100); 
} 
 
 
// ============================================================ 
// PROGRAMAS 91-95 
// EFECTOS ESPECIALES 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 91 - DIMENSION 
// ============================================================ 
 
void programa91() 
{ 
  static uint16_t t = 0; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t onda1 = 
      sin8( 
        t + i * 35 
      ); 
 
    uint8_t onda2 = 
      sin8( 
        t * 2 - i * 60 
      ); 
 
    uint8_t brillo = 
      qadd8( 
        onda1 / 2, 
        onda2 / 2 
      ); 
 
    leds[i] = 
      CHSV( 
        t / 2 + i * 15, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 5; 
 
  delay(25); 
} 
 
 
// ============================================================ 
// PROGRAMA 92 - AGUJERO DE LUZ 
// ============================================================ 
 
void programa92() 
{ 
  static uint8_t t = 0; 
 
  int centro = 
    NUM_LEDS / 2; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    int distancia = 
      abs( 
        i - centro 
      ); 
 
    uint8_t onda = 
      sin8( 
        t + distancia * 55 
      ); 
 
    uint8_t brillo = 
      map( 
        onda, 
        0, 
        255, 
        10, 
        255 
      ); 
 
    leds[i] = 
      CHSV( 
        200 + t / 5, 
        255, 
        brillo 
      ); 
  } 
 
  // Centro oscuro 
  leds[centro] = 
    CRGB::Black; 
 
  FastLED.show(); 
 
  t += 7; 
 
  delay(25); 
} 
 
 
// ============================================================ 
// PROGRAMA 93 - ONDA DE CHOQUE 
// ============================================================ 
 
void programa93() 
{ 
  static int radio = 0; 
 
  static uint8_t color = 0; 
 
  FastLED.clear(); 
 
  int centro = 
    NUM_LEDS / 2; 
 
  int izquierda = 
    centro - radio; 
 
  int derecha = 
    centro + radio; 
 
  if( 
    izquierda >= 0 
  ) 
  { 
    leds[izquierda] = 
      CHSV( 
        color, 
        255, 
        255 
      ); 
  } 
 
  if( 
    derecha < NUM_LEDS 
  ) 
  { 
    leds[derecha] = 
      CHSV( 
        color + 30, 
        255, 
        255 
      ); 
  } 
 
  // Destello central 
  if(radio == 0) 
  { 
    leds[centro] = 
      CRGB::White; 
  } 
 
  FastLED.show(); 
 
  radio++; 
 
  if( 
    radio > NUM_LEDS / 2 + 1 
  ) 
  { 
    radio = 0; 
 
    color += 45; 
  } 
 
  delay(70); 
} 
 
 
// ============================================================ 
// PROGRAMA 94 - ENERGIA VIAJERA 
// ============================================================ 
 
void programa94() 
{ 
  static int pos = 0; 
 
  static int dir = 1; 
 
  static uint8_t color = 0; 
 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    50 
  ); 
 
  leds[pos] = 
    CHSV( 
      color, 
      255, 
      255 
    ); 
 
  if(pos > 0) 
  { 
    leds[pos - 1] = 
      CHSV( 
        color + 20, 
        255, 
        150 
      ); 
  } 
 
  if(pos > 1) 
  { 
    leds[pos - 2] = 
      CHSV( 
        color + 40, 
        255, 
        80 
      ); 
  } 
 
  FastLED.show(); 
 
  pos += dir; 
 
  if( 
    pos >= NUM_LEDS - 1 || 
    pos <= 0 
  ) 
  { 
    dir = -dir; 
 
    color += 50; 
  } 
 
  delay(35); 
} 
 
 
// ============================================================ 
// PROGRAMA 95 - ARCOIRIS HIPNOTICO 
// ============================================================ 
 
void programa95() 
{ 
  static uint16_t t = 0; 
 
  int centro = 
    NUM_LEDS / 2; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    int distancia = 
      abs( 
        i - centro 
      ); 
 
    uint8_t tono = 
      t + 
      distancia * 35; 
 
    uint8_t brillo = 
      sin8( 
        t * 2 + 
        distancia * 55 
      ); 
 
    leds[i] = 
      CHSV( 
        tono, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 5; 
 
  delay(25); 
} 
 
 
// ============================================================ 
// PROGRAMAS 96-100 
// EFECTOS FINALES 
// ============================================================ 
 
 
// ============================================================ 
// PROGRAMA 96 - TORBELLINO 
// ============================================================ 
 
void programa96() 
{ 
  static uint8_t t = 0; 
 
  int centro = 
    NUM_LEDS / 2; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    int distancia = 
      abs(i - centro); 
 
    uint8_t onda = 
      sin8( 
        t + distancia * 70 
      ); 
 
    uint8_t brillo = 
      map( 
        onda, 
        0, 
        255, 
        20, 
        255 
      ); 
 
    leds[i] = 
      CHSV( 
        t + distancia * 25, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 10; 
 
  delay(20); 
} 
 
 
// ============================================================ 
// PROGRAMA 97 - ONDA DIMENSIONAL 
// ============================================================ 
 
void programa97() 
{ 
  static uint16_t t = 0; 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t onda1 = 
      sin8( 
        t + i * 45 
      ); 
 
    uint8_t onda2 = 
      sin8( 
        t * 2 - i * 30 
      ); 
 
    uint8_t brillo = 
      qadd8( 
        onda1 / 2, 
        onda2 / 2 
      ); 
 
    uint8_t tono = 
      t / 2 + 
      onda1 / 3; 
 
    leds[i] = 
      CHSV( 
        tono, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 7; 
 
  delay(20); 
} 
 
 
// ============================================================ 
// PROGRAMA 98 - PULSO ARCOIRIS 
// ============================================================ 
 
void programa98() 
{ 
  static uint8_t t = 0; 
 
  uint8_t pulso = 
    beatsin8( 
      18, 
      10, 
      255 
    ); 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    uint8_t brillo = 
      scale8( 
        pulso, 
        sin8( 
          t + i * 30 
        ) 
      ); 
 
    leds[i] = 
      CHSV( 
        t + i * 20, 
        255, 
        brillo 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 5; 
 
  delay(15); 
} 
 
 
// ============================================================ 
// PROGRAMA 99 - CAOS TOTAL 
// ============================================================ 
 
void programa99() 
{ 
  fadeToBlackBy( 
    leds, 
    NUM_LEDS, 
    45 
  ); 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    if(random8() < 90) 
    { 
      leds[i] = 
        CHSV( 
          random8(), 
          255, 
          random8(100, 255) 
        ); 
    } 
  } 
 
  // Destellos aleatorios 
  if(random8() < 60) 
  { 
    int punto = 
      random8(NUM_LEDS); 
 
    leds[punto] = 
      CRGB::White; 
  } 
 
  FastLED.show(); 
 
  delay( 
    random8( 
      20, 
      70 
    ) 
  ); 
} 
 
 
// ============================================================ 
// PROGRAMA 100 - REACTOR SUPREMO 
// ============================================================ 
 
void programa100() 
{ 
  static uint16_t t = 0; 
 
  int centro = 
    NUM_LEDS / 2; 
 
  uint8_t energia = 
    beatsin8( 
      14, 
      20, 
      255 
    ); 
 
  for(int i = 0; i < NUM_LEDS; i++) 
  { 
    int distancia = 
      abs( 
        i - centro 
      ); 
 
    uint8_t onda = 
      sin8( 
        t + 
        distancia * 55 
      ); 
 
    uint8_t brillo = 
      scale8( 
        energia, 
        onda 
      ); 
 
    brillo = 
      qadd8( 
        brillo, 
        qsub8( 
          255, 
          distancia * 30 
        ) 
      ); 
 
    uint8_t tono = 
      t / 2 + 
      distancia * 18; 
 
    leds[i] = 
      CHSV( 
        tono, 
        255, 
        brillo 
      ); 
  } 
 
  // Núcleo blanco 
  if(energia > 180) 
  { 
    leds[centro] = 
      CRGB( 
        255, 
        255, 
        255 
      ); 
  } 
  else 
  { 
    leds[centro] = 
      CRGB( 
        energia, 
        energia, 
        255 
      ); 
  } 
 
  FastLED.show(); 
 
  t += 8; 
 
  delay(15); 
} 