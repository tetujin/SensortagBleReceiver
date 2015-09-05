//
//  ViewController.h
//  SensortagBleReceiver
//
//  Created by Yuuki Nishiyama on 2015/09/05.
//  Copyright (c) 2015年 Yuuki NISHIYAMA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <CoreLocation/CoreLocation.h>


@interface ViewController : UIViewController<CBCentralManagerDelegate, CBPeripheralDelegate>



#define POLARH7_HRM_DEVICE_INFO_SERVICE_UUID @"180A"
#define POLARH7_HRM_HEART_RATE_SERVICE_UUID @"180D"

#define POLARH7_HRM_MEASUREMENT_CHARACTERISTIC_UUID @"2A37"
#define POLARH7_HRM_BODY_LOCATION_CHARACTERISTIC_UUID @"2A38"
#define POLARH7_HRM_MANUFACTURER_NAME_CHARACTERISTIC_UUID @"2A29"

#define SENBAY_SENSOR_IOS_UUID @"DD9FD42C-F357-4028-ABFB-E1BF12015B0A"

#define SENSORTAG_SERVICE_UUID @"AA80"

#define UUID_DEVINFO_SERV @"0000180a-0000-1000-8000-00805f9b34fb"
#define UUID_DEVINFO_FWREV @"00002A26-0000-1000-8000-00805f9b34fb"

#define UUID_IRT_SERV @"f000aa00-0451-4000-b000-000000000000"
#define UUID_IRT_DATA @"f000aa01-0451-4000-b000-000000000000"
#define UUID_IRT_CONF @"f000aa02-0451-4000-b000-000000000000" // 0: disable, 1: enable
#define UUID_IRT_PERI @"f000aa03-0451-4000-b000-000000000000" // Period in tens of milliseconds

#define UUID_ACC_SERV @"f000aa10-0451-4000-b000-000000000000"
#define UUID_ACC_DATA @"f000aa11-0451-4000-b000-000000000000"
#define UUID_ACC_CONF @"f000aa12-0451-4000-b000-000000000000" // 0: disable, 1: enable
#define UUID_ACC_PERI @"f000aa13-0451-4000-b000-000000000000" // Period in tens of milliseconds

#define UUID_HUM_SERV @"f000aa20-0451-4000-b000-000000000000"
#define UUID_HUM_DATA @"f000aa21-0451-4000-b000-000000000000"
#define UUID_HUM_CONF @"f000aa22-0451-4000-b000-000000000000" // 0: disable, 1: enable
#define UUID_HUM_PERI @"f000aa23-0451-4000-b000-000000000000" // Period in tens of milliseconds

#define UUID_MAG_SERV @"f000aa30-0451-4000-b000-000000000000"
#define UUID_MAG_DATA @"f000aa31-0451-4000-b000-000000000000"
#define UUID_MAG_CONF @"f000aa32-0451-4000-b000-000000000000" // 0: disable, 1: enable
#define UUID_MAG_PERI @"f000aa33-0451-4000-b000-000000000000" // Period in tens of milliseconds

#define UUID_BAR_SERV @"f000aa40-0451-4000-b000-000000000000"
#define UUID_BAR_DATA @"f000aa41-0451-4000-b000-000000000000"
#define UUID_BAR_CONF @"f000aa42-0451-4000-b000-000000000000" // 0: disable, 1: enable
#define UUID_BAR_CALI @"f000aa43-0451-4000-b000-000000000000" // Calibration characteristic
#define UUID_BAR_PERI @"f000aa44-0451-4000-b000-000000000000" // Period in tens of milliseconds

#define UUID_GYR_SERV @"f000aa50-0451-4000-b000-000000000000"
#define UUID_GYR_DATA @"f000aa51-0451-4000-b000-000000000000"
#define UUID_GYR_CONF @"f000aa52-0451-4000-b000-000000000000" // 0: disable, bit 0: enable x, bit 1: enable y, bit 2: enable z
#define UUID_GYR_PERI @"f000aa53-0451-4000-b000-000000000000" // Period in tens of milliseconds

#define UUID_OPT_SERV @"f000aa70-0451-4000-b000-000000000000"
#define UUID_OPT_DATA @"f000aa71-0451-4000-b000-000000000000"
#define UUID_OPT_CONF @"f000aa72-0451-4000-b000-000000000000" // 0: disable, 1: enable
#define UUID_OPT_PERI @"f000aa73-0451-4000-b000-000000000000" // Period in tens of milliseconds

#define UUID_MOV_DATA @"f000aa81-0451-4000-b000-000000000000"
#define UUID_MOV_CONF @"f000aa82-0451-4000-b000-000000000000"
#define UUID_MOV_PERI @"f000aa83-0451-4000-b000-000000000000"


#define UUID_KEY_SERV @"0000ffe0-0000-1000-8000-00805f9b34fb"
#define UUID_KEY_DATA @"0000ffe1-0000-1000-8000-00805f9b34fb"

#define UUID_ID_DATA  @"f000aa65-0451-4000-b000-000000000000" //Local and remote mode: bit 0 - red led; bit 1 - green led; bit 2 - buzzer
#define UUID_ID_CONF  @"f000aa66-0451-4000-b000-000000000000" //0:local mode; 1:remote mode; 2:test mode

#define DISABLE_SENSOR_CODE 0
#define ENABLE_SENSOR_CODE 1
#define CALIBRATE_SENSOR_CODE 2

#define FLAG_GYRO_Z 1 //000001
#define FLAG_GYRO_Y 2 //000010
#define FLAG_GYRO_X 4 //000100
#define FLAG_ACC_Z 8 //001000
#define FLAG_ACC_Y 16 //010000
#define FLAG_ACC_X 32 //100000
#define FLAG_MAG 64 //1000000
#define FLAG_WAKE_ON 128 //10000000
//#define FLAG_WAKE_ON 128 //10000000
#define FLAG_ACC_RANGE_4G 256//100000000
#define FLAG_ACC_RANGE_8G 512//1000000000
#define FLAG_ACC_RANGE_16G 768//1100000000


// Accelerometer ranges
#define ACC_RANGE_2G      0
#define ACC_RANGE_4G      1
#define ACC_RANGE_8G      2
#define ACC_RANGE_16G     3


@property (nonatomic, strong) CBCentralManager *myCentralManager;
@property (nonatomic, strong) CBPeripheral *peripheralDevice;

//加速度
@property (nonatomic, strong) NSNumber *tagAccX;
@property (nonatomic, strong) NSNumber *tagAccY;
@property (nonatomic, strong) NSNumber *tagAccZ;

//角速度
@property (nonatomic, strong) NSNumber *tagGyroX;
@property (nonatomic, strong) NSNumber *tagGyroY;
@property (nonatomic, strong) NSNumber *tagGyroZ;

//磁気
@property (nonatomic, strong) NSNumber *tagMagX;
@property (nonatomic, strong) NSNumber *tagMagY;
@property (nonatomic, strong) NSNumber *tagMagZ;

//湿度
@property (nonatomic, strong) NSNumber *tagHum;

//物体温度
@property (nonatomic, strong) NSNumber *tagObjTemp;

//環境温度
@property (nonatomic, strong) NSNumber *tagAmbTemp;

//気圧
@property (nonatomic, strong) NSNumber *tagBmp;

//光
@property (nonatomic, strong) NSNumber *tagOptical;


//-- Labels --
@property (weak, nonatomic) IBOutlet UILabel *accxLabel;
@property (weak, nonatomic) IBOutlet UILabel *accyLabel;
@property (weak, nonatomic) IBOutlet UILabel *acczLabel;
@property (weak, nonatomic) IBOutlet UILabel *gyroxLabel;
@property (weak, nonatomic) IBOutlet UILabel *gyroyLabel;
@property (weak, nonatomic) IBOutlet UILabel *gyrozLabel;
@property (weak, nonatomic) IBOutlet UILabel *magxLabel;
@property (weak, nonatomic) IBOutlet UILabel *magyLabel;
@property (weak, nonatomic) IBOutlet UILabel *magzLabel;
@property (weak, nonatomic) IBOutlet UILabel *humLabel;
@property (weak, nonatomic) IBOutlet UILabel *objTempLabel;
@property (weak, nonatomic) IBOutlet UILabel *ambTempLabel;
@property (weak, nonatomic) IBOutlet UILabel *bmpLabel;
@property (weak, nonatomic) IBOutlet UILabel *opticalLabel;



@end


