//
//  PayResult.h
//  DfthNetwork
//
//  Created by lizhiqiang on 2020/5/12.
//  Copyright © 2020 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PayResult : NSObject

@property (nonatomic, copy) NSString *return_code;
@property (nonatomic, copy) NSString *return_msg;
@property (nonatomic, assign) int payType;

@end

NS_ASSUME_NONNULL_END
