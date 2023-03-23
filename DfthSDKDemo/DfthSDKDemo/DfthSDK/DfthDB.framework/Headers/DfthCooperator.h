//
//  DfthCooperator.h
//  DfthDB
//
//  Created by gaoyue on 2017/6/21.
//  Copyright © 2017年 gaoyue. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DBBaseObject.h"


@interface DfthCooperator : DBBaseObject
@property (nonatomic, copy) NSString *clientId;//第三方机构的clientId
@property (nonatomic, copy) NSString *clientSecret;//第三方机构的秘钥
@property (nonatomic, copy) NSString *orgId; //第三方机构的id，获取认证后返回该id
@property (nonatomic, copy) NSString *oauthCode; //第三方机构的认证码/授权码，认证后返回该值
@property (nonatomic, copy) NSString *accessToken; //
@property (nonatomic, assign) int serviceStatus; //服务状态
@property (nonatomic, assign) NSTimeInterval expireTime; //认证过期时间
@property (nonatomic, assign) NSTimeInterval tokenExpireTime; //


- (instancetype)initWithId:(NSString *)clientId secret:(NSString *)clientSecret;

- (BOOL) isNeedService;
- (BOOL) isOauthOK;
@end
