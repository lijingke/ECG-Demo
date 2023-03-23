//
//  DfthBpPlan.h
//  DfthDB
//
//  Created by gaoyue on 2017/6/21.
//  Copyright © 2017年 gaoyue. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DBBaseObject.h"

#define DAY_LONG (16*60*60)
#define NIGHT_LONG (8*60*60)
#define MAX_SCHEDULE_COUNT 50

typedef NS_ENUM(NSUInteger, BpPlanState) {
    PS_Created = 0,
    PS_Finished,
    PS_RecordCreated,
    PS_AnalyseResultGot,
    PS_TaskCreated,
    PS_InvalidPlan,
};

@interface DfthBpPlan : DBBaseObject{
    short _schedules[MAX_SCHEDULE_COUNT];
}

@property(nonatomic, copy) NSString *planId;
@property(nonatomic, copy) NSString *userId;
@property(nonatomic, copy) NSString *deviceMac;
@property(nonatomic, copy) NSString *appId;

@property(nonatomic, assign) int64_t planCreateTime;   //单位秒
@property(nonatomic, assign) int64_t measureBeginTime;   //单位秒
@property(nonatomic, assign) int64_t measureEndTime;   //单位秒
@property(nonatomic, assign) BpPlanState state;
@property(nonatomic, assign) int alarmTime;
@property(nonatomic, assign) int totalCount;
@property(nonatomic, assign) int currentIndex;
@property(nonatomic, assign) int dayCount;
@property(nonatomic, assign) int nightCount;
@property(nonatomic, assign) int dayInterval;
@property(nonatomic, assign) int nightInterval;

@property(nonatomic, assign) int duration; //执行时长(秒)
@property(nonatomic, assign) int daySystolicAvg; //日间高压平均
@property(nonatomic, assign) int dayDiastolicAvg; //日间低压平均值
@property(nonatomic, assign) int nightSystolicAvg; //夜间高压平均值
@property(nonatomic, assign) int nightDiastolicAvg; //夜间低压平均值
@property(nonatomic, assign) int systolicAvg; //全天高压平均值
@property(nonatomic, assign) int diastolicAvg; //全天低压平均值
@property(nonatomic, assign) int systolicAvgLevel; //高压平均压等级[0,未达标,1:平均压正常,2:平均压偏高,3:平均压很高]
@property(nonatomic, assign) int pattern; //形态[1：勺型、2：反勺型、3：非勺型]
@property(nonatomic, assign) int dayPulseRateAvg; //日间脉率平均值
@property(nonatomic, assign) int nightPulseRateAvg; //夜间脉率平均值
@property(nonatomic, assign) int pulseRateAvg; //全天脉率平均值
@property(nonatomic, assign) int standard; //本次测量血压数据是否符合24小时动态血压标准[1:达标,0:未达标]
@property(nonatomic, copy) NSString *analysis; //分析结果
@property(nonatomic, assign) int64_t saveTime; //保存时间

- (instancetype)initWithDayInterval:(int)dayInterval nightInterval:(int)nightInterval alarmTime:(int)alarmTime appId:(NSString *)appId userId:(NSString *)userId deviceMac:(NSString *)deviceMac;

- (instancetype)initWithDayInterval:(int)dayInterval nightInterval:(int)nightInterval alarmTime:(int)alarmTime appId:(NSString *)appId userId:(NSString *)userId deviceMac:(NSString *)deviceMac createTime:(NSDate *)createTime;

- (instancetype)initWithTotalCount:(int)total currentIndex:(int)index alarmTime:(int)alarmTime createTime:(long)createTime schedules:(short *)schedules;

- (instancetype)initWithId:(NSString *)planId beginTime:(long)beginTime endTime:(long)endTime sbp:(int)sbp dbp:(int)dbp pulse:(int)pulse;

//- (instancetype)initWith:(BpPlan *)bpPlan;

- (short *)getSchedules;

//- (void)makePlanFinish;
- (NSString *)jsonString;

@end
