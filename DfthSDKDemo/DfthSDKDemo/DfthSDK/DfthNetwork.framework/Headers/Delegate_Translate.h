//
//  Delegate_Translate.h
//  DfthNetwork
//
//  Created by lizhiqiang on 2020/7/3.
//  Copyright © 2020 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Response_Translate.h"
@protocol Delegate_Translate <NSObject>

- (void)t_result:(DfthNetResult *)result response:(Response_Translate *)response;

@end
