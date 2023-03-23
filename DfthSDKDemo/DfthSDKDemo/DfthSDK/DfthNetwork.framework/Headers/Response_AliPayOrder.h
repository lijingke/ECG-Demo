//
//  Response_AliPayOrder.h
//  DfthNetwork
//
//  Created by 李志强 on 2020/8/17.
//  Copyright © 2020 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Response_AliPayOrder : NSObject

@property (nonatomic, copy) NSString *return_code;
@property (nonatomic, copy) NSString *return_msg;
@property (nonatomic, assign) int payType;
@property (nonatomic, copy) NSString *payorder;
@end

NS_ASSUME_NONNULL_END
