//
//  Request_ActiveMember.h
//  DfthNetwork
//
//  Created by 李志强 on 2021/1/14.
//  Copyright © 2021 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Request_ActiveMember : NSObject
@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *mid;


- (instancetype)initWithCode:(NSString *)code uid:(NSString *)mid;

@end

NS_ASSUME_NONNULL_END
