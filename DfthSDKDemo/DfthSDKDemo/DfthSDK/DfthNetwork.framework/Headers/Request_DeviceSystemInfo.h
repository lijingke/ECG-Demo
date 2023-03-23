//
//  Request_DeviceInfo.h
//  DfthNetwork
//
//  Created by lizhiqiang on 2018/8/8.
//  Copyright © 2018年 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface Request_DeviceSystemInfo : NSObject
@property (nonatomic, copy) NSString *mId;
@property (nonatomic, copy) NSString *versionCode;
@property (nonatomic, copy) NSString *versionName;
@property (nonatomic, copy) NSString *androidVersion;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *brand;
@property (nonatomic, assign) int osType;
@end
