//
//  DfthNetTask_Translate.h
//  DfthNetwork
//
//  Created by lizhiqiang on 2020/7/3.
//  Copyright © 2020 yue gao. All rights reserved.
//

#import "RealTask.h"
#import "Delegate_Translate.h"
#import "Request_Translate.h"
NS_ASSUME_NONNULL_BEGIN

@interface DfthNetTask_Translate : RealTask

@property (nonatomic, weak) id<Delegate_Translate> delegate;
- (instancetype)initWith:(Request_Translate *)content delegate:(id<Delegate_Translate>)delegate;
@end

NS_ASSUME_NONNULL_END
