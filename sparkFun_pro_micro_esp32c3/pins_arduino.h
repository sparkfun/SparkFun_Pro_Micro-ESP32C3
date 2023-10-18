#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID            0x1B4F
#define USB_PID            0x0035
#define USB_MANUFACTURER   "SparkFun"
#define USB_PRODUCT        "SparkFun_Pro_Micro-ESP32C3"
#define USB_SERIAL         "" // Empty string for MAC adddress


#define EXTERNAL_NUM_INTERRUPTS 22
#define NUM_DIGITAL_PINS        22
#define NUM_ANALOG_INPUTS       6

#define analogInputToDigitalPin(p)  (((p)<NUM_ANALOG_INPUTS)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<NUM_DIGITAL_PINS)?(p):-1)
#define digitalPinHasPWM(p)         (p < EXTERNAL_NUM_INTERRUPTS)

static const uint8_t LED_BUILTIN = 10;

static const uint8_t TX = 21;
static const uint8_t RX = 20;

static const uint8_t A0 = 0;
static const uint8_t A1 = 1;
static const uint8_t A2 = 2;
static const uint8_t A3 = 3;
static const uint8_t A4 = 4;

static const uint8_t D0 = 0; 
static const uint8_t D1 = 1; 
static const uint8_t D2 = 2; 
static const uint8_t D3 = 3; 
static const uint8_t D4 = 4;
static const uint8_t D5 = 5;
static const uint8_t D6 = 6;
static const uint8_t D7 = 7;
static const uint8_t D8 = 8;
static const uint8_t D9 = 9;
static const uint8_t D10 = 10;

static const uint8_t SDA = 5;
static const uint8_t SCL = 6;

static const uint8_t SS    = 10;
static const uint8_t MOSI  = 1;
static const uint8_t MISO  = 3;
static const uint8_t SCK   = 0;

static const uint8_t I2S_MCLK = 6;    
static const uint8_t I2S_LRCLK = 1;  
static const uint8_t I2S_SCLK = 1;   
static const uint8_t I2S_DOUT = 1;   


#endif /* Pins_Arduino_h */
