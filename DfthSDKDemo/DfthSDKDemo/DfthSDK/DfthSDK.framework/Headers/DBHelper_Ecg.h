//
//  DBHelper_Ecg.h
//  DfthSDK
//
//  Created by gaoyue on 2017/7/3.
//  Copyright © 2017年 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN
@interface DBHelper_Ecg : NSObject
+ (void)insertOrUpdateEcgRecord:(DfthEcgRecord *)record;
+ (BOOL)isExistEcgRecordByRecordId:(NSString *)recordId;

+ (DfthEcgRecord *)getEcgRecordByRecordId:(NSString *)recordId;
+ (DfthEcgRecord *)getEcgRecordByRecordMeasureTime:(NSTimeInterval)measureTime;

+ (NSArray<DfthEcgRecord *> *)getEcgRecordsByState:(EcgRecordState)state;
+ (NSArray<DfthEcgRecord *> *)getUnfinishedEcgRecords;
+ (NSArray<DfthEcgRecord *> *)getFinishedEcgRecords;

//pageIndex从0开始
+ (NSArray<DfthEcgRecord *> *)getUser:(NSString *)userId ecgRecordsWithLeadCount:(int)leadCount startTime:(NSTimeInterval)startTime endTime:(NSTimeInterval)endTime sort:(NSString *)sort pageIndex:(int)pageIndex pageSize:(int)pageSize;

@end
NS_ASSUME_NONNULL_END
