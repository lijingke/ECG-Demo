//
//  Delegate_PayResult.h
//  DfthNetwork
//
//  Created by lizhiqiang on 2020/5/12.
//  Copyright © 2020 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PayResult.h"

@protocol Delegate_PayResult <NSObject>
- (void)payResult:(DfthNetResult *)result response:(PayResult *)response;
@end
