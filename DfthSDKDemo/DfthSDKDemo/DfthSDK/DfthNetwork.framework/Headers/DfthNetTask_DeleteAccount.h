//
//  DfthNetTash_DeleteAccount.h
//  DfthNetwork
//
//  Created by 李志强 on 2022/6/27.
//  Copyright © 2022 yue gao. All rights reserved.
//

#import "RealTask.h"
#import "Delegate_DeleteAccount.h"
NS_ASSUME_NONNULL_BEGIN

@interface DfthNetTask_DeleteAccount : RealTask
@property (nonatomic, weak) id<Delegate_DeleteAccount> delegate;
- (instancetype)initWith:(NSString *)userId delegate:(id<Delegate_DeleteAccount>)delegate;
@end
NS_ASSUME_NONNULL_END
