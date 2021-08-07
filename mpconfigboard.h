#define MICROPY_HW_BOARD_NAME       "MiniF401"
#define MICROPY_HW_MCU_NAME         "STM32F401CE"

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_SERVO     (1)

#define MICROPY_HW_CLK_PLLM (25)
#define MICROPY_HW_CLK_PLLN (336)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV4)
#define MICROPY_HW_CLK_PLLQ (7)

#define MICROPY_HW_RTC_USE_LSE      (1)
#define MICROPY_HW_RTC_USE_US       (0)
#define MICROPY_HW_RTC_USE_CALOUT   (1)

// UART config
//#define MICROPY_HW_UART1_NAME   "U1"
#define MICROPY_HW_UART1_TX     (pin_A9)
#define MICROPY_HW_UART1_RX     (pin_A10)
// UART 2 connects to the STM32F103 (STLINK) on the Nucleo board
// and this is exposed as a USB Serial port.
//#define MICROPY_HW_UART_REPL        PYB_UART_1
//#define MICROPY_HW_UART_REPL_BAUD   115200

// I2C busses
//#define MICROPY_HW_I2C1_NAME "I1"
#define MICROPY_HW_I2C1_SCL (pin_B6)        
#define MICROPY_HW_I2C1_SDA (pin_B7)     
//#define MICROPY_HW_I2C2_NAME "I2"   
#define MICROPY_HW_I2C2_SCL (pin_B10)       
#define MICROPY_HW_I2C2_SDA (pin_B3)              

// SPI busses
//#define MICROPY_HW_SPI1_NAME "S1"
#define MICROPY_HW_SPI1_NSS     (pin_A4)   
#define MICROPY_HW_SPI1_SCK     (pin_A5)    
#define MICROPY_HW_SPI1_MISO    (pin_B4)    
#define MICROPY_HW_SPI1_MOSI    (pin_A7)    

//#define MICROPY_HW_SPI2_NAME "S2"
#define MICROPY_HW_SPI2_NSS     (pin_B12)   
#define MICROPY_HW_SPI2_SCK     (pin_B13)  
#define MICROPY_HW_SPI2_MISO    (pin_B14)   
#define MICROPY_HW_SPI2_MOSI    (pin_B15)   
   

// USRSW is pulled low. Pressing the button makes the input go high.
#define MICROPY_HW_USRSW_PIN        (pin_C13)
#define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (0)

// LEDs
#define MICROPY_HW_LED1             (pin_B5) // Green LD2 LED on Nucleo
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

#define MICROPY_HW_USB_FS              (1)
