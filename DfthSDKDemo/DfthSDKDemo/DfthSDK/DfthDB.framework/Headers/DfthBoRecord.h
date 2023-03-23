//
//  DfthBoRecord.h
//  DfthDB
//
//  Created by 李志强 on 2021/2/20.
//  Copyright © 2021 gaoyue. All rights reserved.
//

#import <DfthDB/DfthDB.h>

NS_ASSUME_NONNULL_BEGIN

@interface DfthBoRecord : DBBaseObject


@property (nonatomic, copy) NSString *recordId;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *appId;

@property (nonatomic, copy) NSString *deviceMac;
@property (nonatomic, copy) NSString *deviceName;


@property (nonatomic, copy) NSString *timeZone;

@property (nonatomic, assign) NSTimeInterval measureStartTime;    //单位秒
@property (nonatomic, assign) NSTimeInterval measureEndTime;  //单位秒

@property (nonatomic, assign) int maxBoValue;
@property (nonatomic, assign) int minBoValue;
@property (nonatomic, assign) NSTimeInterval maxBoValueTime;
@property (nonatomic, assign) NSTimeInterval minBoValueTime;
@property (nonatomic, assign) int averBoValue;
@property (nonatomic, assign) int boValue;

@property (nonatomic, assign) int maxPrValue;
@property (nonatomic, assign) int minPrValue;
@property (nonatomic, assign) NSTimeInterval maxPrValueTime;
@property (nonatomic, assign) NSTimeInterval minPrValueTime;
@property (nonatomic, assign) int averPrValue;
@property (nonatomic, assign) int prValue;

@property (nonatomic, assign) int isUpload;

@end

NS_ASSUME_NONNULL_END
