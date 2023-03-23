//
//  DfthBoDataDelegate.h
//  DfthSDK
//
//  Created by 李志强 on 2021/2/20.
//  Copyright © 2021 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BoData.h"
NS_ASSUME_NONNULL_BEGIN

@protocol DfthBoDataDelegate <NSObject>

- (void)onDataChanged:(BoData*)data;

- (void)onResultData:(DfthBoRecord *)record;

@end

NS_ASSUME_NONNULL_END
