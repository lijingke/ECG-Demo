//
//  DfthUser.h
//  DfthDB
//
//  Created by gaoyue on 2017/6/21.
//  Copyright © 2017年 gaoyue. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DBBaseObject.h"

@interface DfthUser : DBBaseObject
@property (nonatomic, copy) NSString *userId;

@property (nonatomic, assign) NSTimeInterval birthday;
@property (nonatomic, assign) NSTimeInterval vipBegin;
@property (nonatomic, assign) NSTimeInterval vipEnd;
@property (nonatomic, assign) NSTimeInterval createTime;
@property (nonatomic, assign) int vipLevel;

@property (nonatomic, assign) int serviceSurplus;
@property (nonatomic, assign) int serviceFreeze;
@property (nonatomic, assign) int pdfServiceSurplus;
@property (nonatomic, assign) int pdfServiceFreeze;
@property (nonatomic, assign) int greenChannelFreeze;
@property (nonatomic, assign) int greenChannelSurplus;


@property (nonatomic, assign) int gender;
@property (nonatomic, assign) int height;
@property (nonatomic, assign) int weight;
@property (nonatomic, assign) long currentPlanCreateTime;
@property (nonatomic, copy) NSString *timeZone;

@property (nonatomic, copy) NSString *blood;
@property (nonatomic, assign) int credentialsType;
@property (nonatomic, copy) NSString *credentialsNumber;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *kindredName;
@property (nonatomic, copy) NSString *kindredNumber;

@property (nonatomic, copy) NSString *kindredName2;
@property (nonatomic, copy) NSString *kindredNumber2;


@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *nation;
@property (nonatomic, copy) NSString *nfcCardNo;
@property (nonatomic, copy) NSString *telNumber;
@property (nonatomic, copy) NSString *account;
@property (nonatomic, copy) NSString *password;

@property(nonatomic, strong) NSString *habits;
@property(nonatomic, strong) NSString *diseases;
@property(nonatomic, copy) NSString *consRecord;
@property(nonatomic, copy) NSString *serviceInfo;


- (instancetype)initWithName:(NSString *)name telephone:(NSString *)telephone birthday:(NSTimeInterval)birthday gender:(int)gender;
- (instancetype)initWithAccount:(NSString *)account password:(NSString *)password;


-(BOOL)isVip;
@end
