//
//  Request_RegistVerifyCode.h
//  DfthNetwork
//
//  Created by liuyanmei on 17/4/1.
//  Copyright © 2017年 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Request_RegistVerifyCode : NSObject
@property (nonatomic, copy) NSString *phone;
@property (nonatomic, copy) NSString *ticket;
@property (nonatomic, copy) NSString *randstr;
@property (nonatomic, copy) NSString *appid;
@property (nonatomic, copy) NSString *nationCode;
@end
