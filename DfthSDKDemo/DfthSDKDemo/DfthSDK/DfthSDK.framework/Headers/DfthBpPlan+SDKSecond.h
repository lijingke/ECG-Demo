//
//  DfthBpPlan+SDKSecond.h
//  DfthSDK
//
//  Created by liuyanmei on 2017/6/30.
//  Copyright © 2017年 yue gao. All rights reserved.
//

#import <DfthDB/DfthDB.h>

@interface DfthBpPlan (SDKSecond)
- (instancetype)initWithNetRecord:(AmbpsListRecord *)netResponse;
- (void)getValueFromNetworkResponse:(AmbpsListRecord *)response;
@end
