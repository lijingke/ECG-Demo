//
//  DfthSDKManager+Video.h
//  DfthSDK
//
//  Created by lizhiqiang on 2020/1/14.
//  Copyright © 2020 yue gao. All rights reserved.
//

#import <DfthSDK/DfthSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface DfthSDKManager(Video)

/**
 * 获取视频列表
 *
 * @param clientId clientId
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask *)getVideos:(NSString *)clientId complete:(VideoListBlock)complete;


/**
 * 更新播放次数
 *
 * @param videoId 视频ID
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask *)updateWatchCount:(NSString *)videoId complete:(SimpleBlock)complete;



/**
 * 更新播放次数
 *
 * @param mid 用户ID
 * @param status 视频状态ID
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask *)updateUserStatus:(NSString *)mid status:(int)status complete:(UpdateUserStatusBlock)complete;

@end

NS_ASSUME_NONNULL_END
