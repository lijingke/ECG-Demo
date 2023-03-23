//
//  Request_EcgUpdateAnalyseResult.h
//  DfthSDK
//
//  Created by yue gao on 2017/3/29.
//  Copyright © 2017年 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Real_EcgUpdateAnalyseResult: NSObject
@property (nonatomic, assign) int line;
@property (nonatomic, assign) int64_t measuringBegin;
@property (nonatomic, assign) int64_t measuringEnd;
@property (nonatomic, assign) int spCount;
@property (nonatomic, assign) int pvcCount;
@property (nonatomic, assign) int heartBeatCount;
@property (nonatomic, assign) int heartRateMax;
@property (nonatomic, assign) int heartRateMin;
@property (nonatomic, assign) int heartRateAvg;
@property (nonatomic, copy) NSString *diseases;
@property (nonatomic, assign) int score;
@property (nonatomic, copy) NSString *symptom;
@property (nonatomic, assign) int symptomLast;
@property (nonatomic, copy) NSString *mac;
#ifndef ZONE_DEV
@property (nonatomic, strong) NSString *isExperience;
@property (nonatomic, strong) NSString *timeZone;
@property (nonatomic, assign) int qt;
@property (nonatomic, assign) int qtc;
#endif
@end

@interface Request_EcgUpdateAnalyseResult : NSObject
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *recordId;


@property (nonatomic, strong) Real_EcgUpdateAnalyseResult *request;
@end
