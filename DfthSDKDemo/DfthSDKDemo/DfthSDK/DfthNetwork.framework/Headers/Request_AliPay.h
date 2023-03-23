//
//  Request_AliPay.h
//  DfthNetwork
//
//  Created by 李志强 on 2020/8/17.
//  Copyright © 2020 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Request_AliPay : NSObject

@property (nonatomic, copy) NSString *appid;
@property (nonatomic, copy) NSString *mch_id;
@property (nonatomic, copy) NSString *device_info;
@property (nonatomic, copy) NSString *out_trade_no;

@end

NS_ASSUME_NONNULL_END
