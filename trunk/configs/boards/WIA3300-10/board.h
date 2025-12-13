#ifndef __BOARD_H__
#define __BOARD_H__

// WIA3300-10 硬件参数配置
#define FLASH_SIZE 0x2000000  // 32MB 闪存（0x2000000 = 32*1024*1024）
#define RAM_SIZE 0x10000000   // 256MB 内存（0x10000000 = 256*1024*1024）
#define HW_TYPE "WIA3300-10"  // 设备型号
#define HW_VENDOR "Generic"   // 厂商名称
#define HW_REV "v1.0"         // 硬件版本

// GPIO 引脚（默认值，可根据实际硬件修改）
#define HW_GPIO_LED_POWER 0   // 电源灯 GPIO 引脚
#define HW_GPIO_LED_NETWORK 0 // 网络灯 GPIO 引脚
#define HW_GPIO_BUTTON_RESET 0// 复位键 GPIO 引脚

#endif
