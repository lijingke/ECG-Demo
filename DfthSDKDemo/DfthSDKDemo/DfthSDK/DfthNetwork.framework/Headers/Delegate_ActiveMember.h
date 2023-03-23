//
//  Delegate_ActiveMember.h
//  DfthNetwork
//
//  Created by 李志强 on 2021/1/14.
//  Copyright © 2021 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Response_ActiveMember.h"
NS_ASSUME_NONNULL_BEGIN

@protocol Delegate_ActiveMember <NSObject>
- (void)memberActiveResult:(DfthNetResult *)result response:(Response_ActiveMember *)response;
@end

NS_ASSUME_NONNULL_END
