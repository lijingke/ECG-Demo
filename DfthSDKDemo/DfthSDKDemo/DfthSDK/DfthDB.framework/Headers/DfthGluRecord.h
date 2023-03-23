//
//  DfthGluRecord.h
//  DfthDB
//
//  Created by 李志强 on 2021/2/18.
//  Copyright © 2021 gaoyue. All rights reserved.
//

#import <DfthDB/DfthDB.h>

NS_ASSUME_NONNULL_BEGIN

@interface DfthGluRecord : DBBaseObject

@property (nonatomic, copy) NSString *recordId;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *appId;

@property (nonatomic, copy) NSString *deviceMac;
@property (nonatomic, copy) NSString *deviceName;


@property (nonatomic, copy) NSString *timeZone;

@property (nonatomic, assign) NSTimeInterval measureStartTime;    //单位秒
@property (nonatomic, assign) NSTimeInterval measureEndTime;  //单位秒

@property (nonatomic, assign) int level;
@property (nonatomic, assign) int unit;
@property (nonatomic, assign) int type;
@property (nonatomic, assign) int location;
@property (nonatomic, assign) int sensorStatus;
@property (nonatomic, assign) float gluData;
@property (nonatomic, assign) int preStatus;

@property (nonatomic, assign) int isUpload;

@end

NS_ASSUME_NONNULL_END
