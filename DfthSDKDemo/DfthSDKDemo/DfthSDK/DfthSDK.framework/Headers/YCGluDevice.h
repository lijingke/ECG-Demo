//
//  YCGluDevice.h
//  DfthSDK
//
//  Created by 李志强 on 2021/2/18.
//  Copyright © 2021 yue gao. All rights reserved.
//

#import <DfthSDK/DfthSDK.h>
#import "DfthGluDataDelegate.h"
NS_ASSUME_NONNULL_BEGIN

@interface YCGluDevice : DfthDevice

@property (nonatomic, weak) id<DfthGluDataDelegate> dataDelegate;

-(void)updatePreStatus:(DfthGluRecord*)record preStatus:(int)preStatus;
@end

NS_ASSUME_NONNULL_END
