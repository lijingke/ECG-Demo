//
//  VideoItem.h
//  DfthNetwork
//
//  Created by lizhiqiang on 2020/1/14.
//  Copyright © 2020 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VideoItem : NSObject

@property(nonatomic, copy) NSString *id;
@property(nonatomic, copy) NSString *clientId;
@property(nonatomic, assign) int fileType;
@property(nonatomic, copy) NSString *filePath;
@property(nonatomic, assign) int status;
@property(nonatomic, copy) NSString *name;
@property(nonatomic, copy) NSString *remarks;
@property(nonatomic, assign) int saveTime;
@property(nonatomic, copy) NSString *coverPath;
@property(nonatomic, assign) int playCount;
@property(nonatomic, assign) int duration;

@end

NS_ASSUME_NONNULL_END
