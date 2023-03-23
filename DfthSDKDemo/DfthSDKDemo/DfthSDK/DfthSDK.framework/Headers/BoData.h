//
//  BoData.h
//  DfthSDK
//
//  Created by 李志强 on 2021/2/20.
//  Copyright © 2021 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BoData : NSObject

@property (nonatomic, assign) float spo2;
@property (nonatomic, assign) float pr;
@property (nonatomic, assign) int sensorStatus;
@property (nonatomic, assign) int measurementStatus;
@property (nonatomic, assign) float amplitude;
@property (nonatomic, assign) NSTimeInterval measureTime;

-(bool)isValid;

@end

NS_ASSUME_NONNULL_END
