//
//  Delegate_WeixinPayOrder.h
//  DfthNetwork
//
//  Created by lizhiqiang on 2020/5/12.
//  Copyright © 2020 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseWeixinPayOrder.h"

@protocol Delegate_WeixinPayOrder <NSObject>
- (void)weixinPayOrderResult:(DfthNetResult *)result response:(ResponseWeixinPayOrder *)response;
@end
