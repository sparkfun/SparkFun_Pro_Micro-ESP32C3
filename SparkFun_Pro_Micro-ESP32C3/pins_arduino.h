#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID            0x
#define USB_PID            0x
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

static const uint8_t A0 = 1;
static const uint8_t A1 = 1;
static const uint8_t A2 = 1;
static const uint8_t A3 = 1;
static const uint8_t A4 = 1;
static const uint8_t A5 = 1;

static const uint8_t D0 = 1; 
static const uint8_t D1 = 1; 
static const uint8_t D2 = 1; 
static const uint8_t D3 = 1; 
static const uint8_t D4 = 1;
static const uint8_t D5 = 1;
static const uint8_t D6 = 1;
static const uint8_t D7 = 1;
static const uint8_t D8 = 1;
static const uint8_t D9 = 1;

static const uint8_t SDA = 8;
static const uint8_t SCL = 9;

static const uint8_t SS    = 1;
static const uint8_t MOSI  = 1;
static const uint8_t MISO  = 1;
static const uint8_t SCK   = 1;

static const uint8_t I2S_MCLK = 2;    // CLOCK must be an integer multiplier of SCLK
static const uint8_t I2S_LRCLK = 25;  // LRCLK
static const uint8_t I2S_SCLK = 26;   // SCLK - Fs (44100 Hz)
static const uint8_t I2S_DOUT = 22;   // DATA


#endif /* Pins_Arduino_h */
