//
//  Delegate_GetVIdeos.h
//  DfthNetwork
//
//  Created by lizhiqiang on 2020/1/14.
//  Copyright © 2020 yue gao. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "VideoItem.h"
@protocol Delegate_GetVIdeos <NSObject>
- (void)getVideos:(DfthNetResult *)result response:(NSMutableArray<VideoItem *> *)detail;
@end
