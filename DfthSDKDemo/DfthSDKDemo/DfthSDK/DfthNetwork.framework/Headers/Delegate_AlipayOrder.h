//
//  Delegate_AlipayOrder.h
//  DfthNetwork
//
//  Created by lizhiqiang on 2020/5/12.
//  Copyright © 2020 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Response_AliPayOrder.h"

@protocol Delegate_AlipayOrder <NSObject>
- (void)aliPayOrderResult:(DfthNetResult *)result response:(Response_AliPayOrder *)response;
@end
