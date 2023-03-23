//
//  Request_MemberLoginOnePass.h
//  DfthNetwork
//
//  Created by 李志强 on 2021/3/5.
//  Copyright © 2021 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Request_MemberLoginOnePass : NSObject
@property (nonatomic, copy) NSString *appid;    //Client_id
@property (nonatomic, copy) NSString *accessToken2;    //电话号码
@property (nonatomic, copy) NSString *token2;    //验证码
@property (nonatomic, copy) NSString *orgid;

- (instancetype)initWithToken:(NSString *)accessToken verifyCode:(NSString *)accessCode appId:(NSString *)appId orgId:(NSString *)orgId;

@end

NS_ASSUME_NONNULL_END
