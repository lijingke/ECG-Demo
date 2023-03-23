//
//  DfthNetTask_GetWeiXinResult.h
//  DfthNetwork
//
//  Created by lizhiqiang on 2020/5/12.
//  Copyright © 2020 yue gao. All rights reserved.
//

#import "RealTask.h"
#import "Delegate_PayResult.h"
#import "PayResult.h"
#import "RequestWeixinPay.h"
NS_ASSUME_NONNULL_BEGIN

@interface DfthNetTask_GetWeiXinResult : RealTask
@property(nonatomic, weak) id<Delegate_PayResult> delegate;
- (instancetype)initWith:(RequestWeixinPay *)request delegate:(id<Delegate_PayResult>)delegate;
@end

NS_ASSUME_NONNULL_END
