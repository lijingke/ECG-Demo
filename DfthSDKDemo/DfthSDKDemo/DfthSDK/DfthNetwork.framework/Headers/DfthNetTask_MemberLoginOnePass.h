//
//  DfthNetTask_MemberLoginOnePass.h
//  DfthNetwork
//
//  Created by 李志强 on 2021/3/5.
//  Copyright © 2021 yue gao. All rights reserved.
//

#import "RealTask.h"
#import "Request_MemberLoginOnePass.h"
#import "Delegate_MemberLoginByVerifyCode.h"
NS_ASSUME_NONNULL_BEGIN

@interface DfthNetTask_MemberLoginOnePass : RealTask

@property (nonatomic, copy) NSString *userId;
@property(nonatomic, weak) id<Delegate_MemberLoginByVerifyCode> delegate;
- (instancetype)initWith:(Request_MemberLoginOnePass *)request delegate:(id<Delegate_MemberLoginByVerifyCode>)delegate;


@end

NS_ASSUME_NONNULL_END
