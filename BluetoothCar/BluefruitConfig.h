// COMMON SETTINGS
// ----------------------------------------------------------------------------------------------
// These settings are used in both SW UART, HW UART and SPI mode
// ----------------------------------------------------------------------------------------------
#define BUFSIZE                        128   // Size of the read buffer for incoming data
#define VERBOSE_MODE                   true  // If set to 'true' enables debug output
#define BLE_READPACKET_TIMEOUT         150   // Timeout in ms waiting to read a response


// SOFTWARE UART SETTINGS
// ----------------------------------------------------------------------------------------------
// The following macros declare the pins that will be used for 'SW' serial.
// You should use this option if you are connecting the UART Friend to an UNO
// ----------------------------------------------------------------------------------------------
#define BLUEFRUIT_SWUART_RXD_PIN       2   // Required for software serial!
#define BLUEFRUIT_SWUART_TXD_PIN       7   // Required for software serial!
#define BLUEFRUIT_UART_CTS_PIN         4   // Required for software serial!
#define BLUEFRUIT_UART_RTS_PIN         5   // Optional, set to -1 if unused


// HARDWARE UART SETTINGS
// ----------------------------------------------------------------------------------------------
// The following macros declare the HW serial port you are using. Uncomment
// this line if you are connecting the BLE to Leonardo/Micro or Flora
// ----------------------------------------------------------------------------------------------
#ifdef Serial1    // this makes it not complain on compilation if there's no Serial1
  #define BLUEFRUIT_HWSERIAL_NAME      Serial1
#endif


// SHARED UART SETTINGS
// ----------------------------------------------------------------------------------------------
// The following sets the optional Mode pin, its recommended but not required
// ----------------------------------------------------------------------------------------------
#define BLUEFRUIT_UART_MODE_PIN        12    // Set to -1 if unused

// SERVO SETTINGS
#define SERVO_PIN                     6
#define DEFAULT_ANGLE                 90

// DISTANCE SENSOR SETTINGS
#define TRIG_PIN                      10
#define ECHO_PIN                      11

// MAKER DRIVE MOTOR SETTINGS
#define DRIVE_MOTOR_MODE              PWM_DIR
#define PIN_2A                        3
#define PIN_2B                        9
