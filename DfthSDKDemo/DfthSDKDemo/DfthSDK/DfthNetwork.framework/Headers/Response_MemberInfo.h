//
//  Response_MemberInfo.h
//  DfthNetwork
//
//  Created by liuyanmei on 17/4/1.
//  Copyright © 2017年 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Habit.h"
#import "Disease.h"


@interface Member: NSObject
@property(nonatomic, copy) NSString *name;
@property(nonatomic, copy) NSString *nation;
@property(nonatomic, copy) NSString *blood;
@property(nonatomic, copy) NSString *telNumber;
@property(nonatomic, copy) NSString *kindredNumber;
@property(nonatomic, copy) NSString *kindredName;
@property(nonatomic, copy) NSString *kindredNumber2;
@property(nonatomic, copy) NSString *kindredName2;
@property(nonatomic, assign) int gender;
@property(nonatomic, assign) int64_t birthday;
@property(nonatomic, assign) int64_t vipBegin;
@property(nonatomic, assign) int64_t vipEnd;
@property(nonatomic, assign) int vipLevel;

@property(nonatomic, assign) int height;
@property(nonatomic, assign) int weight;
@end

@interface Response_MemberInfo : NSObject
@property(nonatomic, strong) Member *member;
@property(nonatomic, assign) int serviceSurplus;
@property(nonatomic, assign) int serviceFreeze;
@property(nonatomic, assign) int pdfServiceSurplus;
@property(nonatomic, assign) int pdfServiceFreeze;
@property(nonatomic, assign) int greenChannelFreeze;
@property(nonatomic, assign) int greenChannelSurplus;
@property(nonatomic, strong) NSArray<Habit*> *habits;
@property(nonatomic, strong) NSArray<Disease*> *historys;
@property(nonatomic, copy) NSString *consRecord;
@property(nonatomic, copy) NSString *serviceInfo;
@end
