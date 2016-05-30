#ifndef NIMBUS_I2C
#define NIMBUS_I2C

#include <stdlib.h>
#include <unistd.h>

#include <linux/i2c.h>
#include <linux/i2c-dev.h>

#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <errno.h>

#define I2C_DEV_PATH        "/dev/i2c-%d"
#define I2C_PRINT_BANNER    "nimbus-i2c::"
#define I2C_BUFFER_SIZE     32
#define I2C_DEFAULT_ADAPTER 0

#define I2C_SCK_PIN         22
#define I2C_SDA_PIN         21

#define I2C_EN              1

#ifdef __cplusplus
extern "C" {
#endif

// i2c functions
int i2c_writeBuffer         (int devNum, int devAddr, int addr, uint8_t *buffer, int size);
int i2c_write               (int devNum, int devAddr, int addr, int val);
int i2c_writeBytes          (int devNum, int devAddr, int addr, int val, int numBytes);
int i2c_read                (int devNum, int devAddr, int addr, uint8_t *buffer, int numBytes);
int i2c_readByte            (int devNum, int devAddr, int addr, int *val);

#ifdef __cplusplus
}
#endif
#endif //NIMBUS_I2C
