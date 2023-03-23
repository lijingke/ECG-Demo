//
//  DfthNetTask_ActiveMember.h
//  DfthNetwork
//
//  Created by 李志强 on 2021/1/14.
//  Copyright © 2021 yue gao. All rights reserved.
//

#import "RealTask.h"
#import "Delegate_ActiveMember.h"
#import "Request_ActiveMember.h"
NS_ASSUME_NONNULL_BEGIN

@interface DfthNetTask_ActiveMember : RealTask

@property (nonatomic, weak) id<Delegate_ActiveMember> delegate;
- (instancetype)initWith:(Request_ActiveMember *)content delegate:(id<Delegate_ActiveMember>)delegate;

@end

NS_ASSUME_NONNULL_END
