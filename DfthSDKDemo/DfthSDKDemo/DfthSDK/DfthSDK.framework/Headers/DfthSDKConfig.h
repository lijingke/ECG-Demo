//
//  DfthSDKConfig.h
//  DfthSDK
//
//  Created by admin on 2017/1/21.
//  Copyright © 2017年 com.dfth.BlueToothLib. All rights reserved.
//
#define ALI_PARTENER_ID @"2088221350362103"
#define ALI_APP_ID @"2021001162656286"
#define WEIXIN_PARTENER_ID @"1460958702"
#define APP_ID @"wx7f3842248d3d1247"
#import "BaseArchiveObject.h"
#import "ECGConfig.h"
#import "BPConfig.h"
#import "DeviceConfig.h"
#import "OauthConfig.h"

@interface DfthSDKConfig : BaseArchiveObject
@property(nonatomic, strong) ECGConfig *ecgConfig;//心电配置
@property(nonatomic, strong) BPConfig *bpConfig;//血压配置
@property(nonatomic, strong) DeviceConfig *deviceConfig;//设备配置
@property(nonatomic, strong) OauthConfig *oauthConfig;//认证配置

+ (DfthSDKConfig*)readLoaclConfigFile;
- (void)saveToLocalFile;
+ (NSString *)getSDKVersion;

@end
