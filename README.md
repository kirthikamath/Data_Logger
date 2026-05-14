# Remote Weather Data Logger

# Project Overview

This project demonstrates a system-level embedded firmware architecture for a remote weather data logger.

Here the system periodically collects environmental data such as temperature, humidity and rainfall, stores the data locally in the SD card, and transmits the information wirelessly using LoRa communication to the base station.

The firmware is designed using a modular embedded software architecture with seperate modules for:
- Sensor handling
- Interrupt handling
- SD card logging
- LoRa communication
- Power management

---
# Features
- Interrupt-based rain gauge pulse detection
- Temperature and humidity sensor interfacing
- SD card data logging
- Lora wireless communication
- Low-power sleep/wakeup operation
- Modular firmware structure
- System-level embedded firmware architecture

---
# System Architecture
```text
Rain Gauge ------> GPIO Interrupt
Temperature/Humidity Sensor --------> I2C
                                        ↓
                                        MCU
                                        ↓
                                        SD card Storage
                                        ↓
                                        LoRa communication
                                        ↓
                                        Base Station

```
# Project Structure
```text
Remote_Data_Logger/
|- README.md
|- main.c
|- sensor.c
|- sensor.h
|- interrupts.c
|- interrupts.h
|- sd_card.c
|- sd_card.h
|- lora.c
|- lora.h
|- power_management.c
|- power_management.h

```
# Technologies and Concepts Used
- Embedded C
- Modular firmware architecture
- GPIO interrupts
- I2C communication
- SPI communication
- LoRa communication
- FAT filesystem concept
- Low-power embedded systems
- Event-driven interrupt handling


