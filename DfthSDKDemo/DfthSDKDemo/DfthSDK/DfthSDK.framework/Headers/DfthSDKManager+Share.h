//
//  DfthSDKManager+Share.h
//  DfthSDK
//
//  Created by lizhiqiang on 2018/6/6.
//  Copyright © 2018年 yue gao. All rights reserved.
//

#import <DfthSDK/DfthSDK.h>

@interface DfthSDKManager (share)

/**
 * 获取二维码图片
 *
 * @param mac 设备的mac地址
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask *)getQRCode:(NSString *)userId complete:(GetQRCodeBlock)complete;


/**
 * 获取二维码图片
 *
 * @param mac 设备的mac地址
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask *)deleteShareUser:(NSString *)userId complete:(SimpleBlock)complete;
@end
