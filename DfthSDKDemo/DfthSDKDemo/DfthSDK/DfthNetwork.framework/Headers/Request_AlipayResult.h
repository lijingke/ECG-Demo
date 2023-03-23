//
//  Request_AlipayResult.h
//  DfthNetwork
//
//  Created by 李志强 on 2020/8/17.
//  Copyright © 2020 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Request_AlipayResult : NSObject

@property (nonatomic, copy) NSString *out_trade_no;
@property (nonatomic, copy) NSString *trade_no;
@property (nonatomic, copy) NSString *total_amount;
@property (nonatomic, copy) NSString *seller_id;
@property (nonatomic, copy) NSString *msg;
@property (nonatomic, copy) NSString *sign;
@property (nonatomic, copy) NSString *sign_type;
@property (nonatomic, copy) NSString *charset;
@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *timestamp;
@property (nonatomic, copy) NSString *appid;

@end

NS_ASSUME_NONNULL_END
