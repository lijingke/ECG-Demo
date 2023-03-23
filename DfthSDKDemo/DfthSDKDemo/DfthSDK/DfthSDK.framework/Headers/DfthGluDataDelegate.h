//
//  DfthGluDataDelegate.h
//  DfthSDK
//
//  Created by 李志强 on 2021/2/18.
//  Copyright © 2021 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@protocol DfthGluDataDelegate <NSObject>


- (void)onDataChanged:(DfthGluRecord*)gluRecord;

- (void)onResultData:(DfthGluRecord *)ecgRecord;

@end

NS_ASSUME_NONNULL_END
