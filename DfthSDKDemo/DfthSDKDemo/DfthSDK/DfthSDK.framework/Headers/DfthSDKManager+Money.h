//
//  DfthSDKManager+Money.h
//  DfthSDK
//
//  Created by gaoyue on 2017/6/13.
//  Copyright © 2017年 yue gao. All rights reserved.
//

#import <DfthSDK/DfthSDK.h>
@interface DfthSDKManager (Money)
+ (DfthTask *)getFreePackagesForUser:(NSString *)userId complete:(PackagesBlock)handler;
+ (DfthTask *)orderPackages:(NSArray<DfthPackage *> *)packages forUser:(NSString *)userId complete:(MakeOrderBlock)handler;

+ (DfthTask*)getWeixinPayOrder:(NSString*)orderId complete:(GetWeixinBlock)handler;


+(DfthTask*)getWeixinPayResult:(NSString*)orderId complete:(GetWeixinResultBlock)handler;


+ (DfthTask*)getAliPayOrder:(NSString*)orderId complete:(GetAliPayBlock)handler;


+(DfthTask*)getAliPayResult:(Request_AlipayResult*)result complete:(GetWeixinResultBlock)handler;



@end
