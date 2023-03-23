//
//  Request_UpdateUserStatus.h
//  DfthNetwork
//
//  Created by lizhiqiang on 2020/1/14.
//  Copyright © 2020 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Request_UpdateUserStatus : NSObject

@property (nonatomic, copy) NSString *mid;
@property (nonatomic, assign) int status;

- (instancetype)initWith:(NSString *)mid status:(int)status;

@end

NS_ASSUME_NONNULL_END
