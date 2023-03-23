//
//  DfthBoDevice.h
//  DfthSDK
//
//  Created by 李志强 on 2021/2/20.
//  Copyright © 2021 yue gao. All rights reserved.
//

#import <DfthSDK/DfthSDK.h>
#import "DfthBoDataDelegate.h"
NS_ASSUME_NONNULL_BEGIN

@interface DfthBoDevice : DfthDevice
@property (nonatomic, weak) id<DfthBoDataDelegate> dataDelegate;

@end

NS_ASSUME_NONNULL_END
