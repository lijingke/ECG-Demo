//
//  DfthNetTask_DeviceInfo.h
//  DfthNetwork
//
//  Created by lizhiqiang on 2018/8/8.
//  Copyright © 2018年 yue gao. All rights reserved.
//
#import "RealTask.h"
#import "Request_DeviceSystemInfo.h"
#import "Delegate_MemberUpdate.h"

@interface DfthNetTask_DeviceSystemInfo : RealTask
@property (nonatomic, weak) id<Delegate_MemberUpdate> delegate;
- (instancetype)initWith:(Request_DeviceSystemInfo *)request delegate:(id<Delegate_MemberUpdate>)delegate;
@end
