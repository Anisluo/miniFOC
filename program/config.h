//
// Created by Lao·Zhu on 2021/8/24.
//

#ifndef MINIFOC__CONFIG_H_
#define MINIFOC__CONFIG_H_

#define VBUS            12.0f       // Bus voltage is 12V
#define POLAR_PAIRS     7           // BLDC motor has 7 polar pairs
#define ENCODER_RESO    2048        // Encoder resolution is 2^7=2048

#define UART_BAUDRATE   115200      // UART baudrate set to 115200
#define PWM_FREQUENCY   10          // PWM frequency set to 10kHz
#define SPI_PRESCALE    SPI_PSC_16  // SPI frequency is 72 / 16 = 4.5MHz

#define UART_PRIORITY   1           // UART preemption priority set to 1

#endif //MINIFOC__CONFIG_H_
