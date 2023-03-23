//
//  DfthNetTask_GetQRCode.h
//  DfthNetwork
//
//  Created by lizhiqiang on 2018/6/6.
//  Copyright © 2018年 yue gao. All rights reserved.
//

#import "RealTask.h"
#import "Delegate_get_qr_code.h"
@interface DfthNetTask_GetQRCode : RealTask
@property (nonatomic, weak) id<Delegate_get_qr_code> delegate;
- (instancetype)initWith:(NSString *)userId delegate:(id<Delegate_get_qr_code>)delegate;
@end
