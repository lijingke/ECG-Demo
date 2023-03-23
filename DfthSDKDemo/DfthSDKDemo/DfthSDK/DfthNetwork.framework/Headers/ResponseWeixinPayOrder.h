//
//  ResponseWeixinPayOrder.h
//  DfthNetwork
//
//  Created by lizhiqiang on 2020/5/12.
//  Copyright © 2020 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseWeixinPayOrder : NSObject

@property (nonatomic, copy) NSString *return_code;
@property (nonatomic, copy) NSString *return_msg;
@property (nonatomic, assign) int payType;
@property (nonatomic, copy) NSString *appid;
@property (nonatomic, copy) NSString *mch_id;
@property (nonatomic, copy) NSString *device_info;
@property (nonatomic, copy) NSString *nonce_str;
@property (nonatomic, copy) NSString *sign;
@property (nonatomic, copy) NSString *result_code;
@property (nonatomic, copy) NSString *err_code;
@property (nonatomic, copy) NSString *error_code_des;
@property (nonatomic, copy) NSString *trade_type;
@property (nonatomic, copy) NSString *prepay_id;
@property (nonatomic, copy) NSString *timestamp;
@end

NS_ASSUME_NONNULL_END
