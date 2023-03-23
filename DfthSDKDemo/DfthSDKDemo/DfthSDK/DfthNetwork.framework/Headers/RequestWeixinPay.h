//
//  RequestWeixinPay.h
//  DfthNetwork
//
//  Created by lizhiqiang on 2020/5/12.
//  Copyright © 2020 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RequestWeixinPay : NSObject
@property (nonatomic, copy) NSString *appid;
@property (nonatomic, copy) NSString *mch_id;
@property (nonatomic, copy) NSString *device_info;
@property (nonatomic, copy) NSString *out_trade_no;
@property (nonatomic, copy) NSString *spbill_create_ip;
@property (nonatomic, copy) NSString *limit_pay;
@property (nonatomic, copy) NSString *trade_type;
@property (nonatomic, copy) NSString *attach;
@end

NS_ASSUME_NONNULL_END
