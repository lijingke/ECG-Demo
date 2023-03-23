//
//  Delegate_UpdateUserStatus.h
//  DfthNetwork
//
//  Created by lizhiqiang on 2020/1/14.
//  Copyright © 2020 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Response_UpdateUserStatus.h"
@protocol Delegate_UpdateUserStatus <NSObject>
- (void)updateUserStatus:(DfthNetResult *)result response:(Response_UpdateUserStatus*)response;
@end
