//
//  DfthSDKManager+User.h
//  DfthSDK
//
//  Created by gaoyue on 2017/6/13.
//  Copyright © 2017年 yue gao. All rights reserved.
//

#import <DfthSDK/DfthSDK.h>

@interface DfthSDKManager (User)

/**
 * 获取用户
 *
 * @param userId 用户id
 *
 * @return 用户
 */
+ (DfthUser *)getUser:(NSString *)userId;

/**
 * 获取注册时候的验证码
 *
 * @param telNumber 手机号
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask*)getRequestVerifyCodeTaskWithTelNumber:(NSString *)telNumber completeHandler:(SimpleBlock)handler;


+ (DfthTask*)getRequestVerifyCodeTaskWithTelNumber:(NSString *)telNumber ticket:(NSString*)ticket randstr:(NSString*)randstr nationCode:(NSString*)nationCode completeHandler:(SimpleBlock)handler;


/**
 * 用户注册
 *
 * @param account 用户账号
 * @param password 密码
 * @param verifyCode 验证码
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask*)getRegisterTaskWithAccount:(NSString *)account password:(NSString *)password verifyCode:(NSString *)verifyCode  completeHandler:(RegistMemberBlock)handler;


/**
 * 用户注册
 *
 * @param account 用户账号
 * @param password 密码
 * @param verifyCode 验证码
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask*)getRegisterTaskWithAccount:(NSString *)account password:(NSString *)password verifyCode:(NSString *)verifyCode  nationCode:(NSString*)nationCode completeHandler:(RegistMemberBlock)handler;


/**
 * 用户登录
 *
 * @param account 用户账号
 * @param password 密码
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask*)getLoginTaskWithAccount:(NSString *)account password:(NSString *)password completeHandler:(LoginBlock)handler;


/**
 * 用户登录
 *
 * @param account 用户账号
 * @param password 密码
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask*)getLoginTaskWithAccount:(NSString *)account password:(NSString *)password nationCode:(NSString*)nationCode completeHandler:(LoginBlock)handler;


/**
 * 用户登录
 *
 * @param account 用户账号
 * @param password 密码
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask*)getLoginTaskWithOnePass:(NSString *)accessToken password:(NSString *)accessCode nationCode:(NSString*)nationCode completeHandler:(LoginBlock)handler;



/**
 * 用户登录
 *
 * @param userId 用户id
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask*)getLoginTaskWithUserId:(NSString *)userId completeHandler:(LoginBlock)handler;

/**
 * 用户登录
 *
 * @param telNumber 用户账号(即手机号)
 * @param verifyCode 验证码
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask*)getLoginTaskWithTelNumber:(NSString *)telNumber verifyCode:(NSString *)verifyCode completeHandler:(LoginBlock)handler;



/**
 * 用户登录
 *
 * @param telNumber 用户账号(即手机号)
 * @param verifyCode 验证码
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask*)getLoginTaskWithTelNumber:(NSString *)telNumber verifyCode:(NSString *)verifyCode nationCode:(NSString*)nationCode completeHandler:(LoginBlock)handler;


/**
 * 重置密码时候的验证码
 *
 * @param telNumber 手机号
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask*)getResetPasswordVerifyCodeTaskWithTelNumber:(NSString *)telNumber completeHandler:(SimpleBlock)handler;


/**
 * 重置密码
 *
 * @param telNumber 手机号
 * @param password 密码
 * @param verifyCode 验证码
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask*)getResetPasswordTaskWithTelNumber:(NSString *)telNumber password:(NSString *)password verifyCode:(NSString *)verifyCode completeHandler:(SimpleBlock)handler;



/**
 * 重置密码
 *
 * @param telNumber 手机号
 * @param password 密码
 * @param verifyCode 验证码
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask*)getResetPasswordTaskWithTelNumber:(NSString *)telNumber password:(NSString *)password verifyCode:(NSString *)verifyCode nationCode:(NSString*)nationCode completeHandler:(SimpleBlock)handler;

/**
 * 用户信息更新
 *
 * @param user 用户
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask*)getUpdateMemberInfoTaskWithUser:(DfthUser *)user completeHandler:(SimpleBlock)handler;


+ (DfthTask*)uploadDeviceInfoTaskWithUser:(NSString *)mId completeHandler:(SimpleBlock)handler;

/**
 * 获取用户信息
 *
 * @param userId 用户
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask *)getUserInfoTaskWith:(NSString *)userId completeHandler:(MemberInfoBlock)handler;


/**
 * 获取用户病史
 *
 * @param userId 用户
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask *)getUserDiseaseListWith:(NSString *)userId complete:(DiseaseListBlock)handler;


/**
 * 创建用户病史
 *
 * @param userId 用户
 * @param diseases 疾病列表
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask *)diseaseCreateForUser:(NSString *)userId diseases:(NSArray<Disease*> *)diseases complete:(SimpleBlock)handler;


/**
 * 更新用户病史
 *
 * @param userId 用户
 * @param diseases 疾病列表
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask *)diseaseUpdateForUser:(NSString *)userId diseases:(NSArray<Disease*> *)diseases complete:(SimpleBlock)handler;


/**
 * 更新疾病字典
 *
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask *)getDiseaseDictionaryWithComplete:(DiseaseListBlock)handler;

/**
 * 获取用户的生活习惯
 *
 * @param userId 用户
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask *)getUserHabitListWith:(NSString *)userId complete:(HabitListBlock)handler;

/**
 * 创建用户的生活习惯
 *
 * @param userId 用户
 * @param habits 用户习惯
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask *)habitCreateWith:(NSString *)userId habits:(NSArray<Habit*> *)habits complete:(SimpleBlock)handler;

/**
 * 更新用户的生活习惯
 *
 * @param userId 用户
 * @param habits 用户习惯
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask *)habitUpdateWith:(NSString *)userId habits:(NSArray<Habit*> *)habits complete:(SimpleBlock)handler;

/**
 * 获取生活习惯的字典
 *
 * @param handler 操作完成后的回调
 *
 * @return DfthTask
 */
+ (DfthTask *)getHabitDictionaryWithComplete:(HabitListBlock)handler;


+ (DfthTask *)deleteAccount:(NSString*)userId complete:(SimpleBlock)handler;
/**
 *激活会员
 *
 *
 *
 */
+(DfthTask *)activeMember:(NSString*)code userId:(NSString*)userId complete:(ActiveMemberBlock)handler;
//用户头像上传下载
+ (DfthTask *)getUploadAvatarWith:(NSString *)userId filePath:(NSString *)filePath fileData:(NSData *)data complete:(SimpleBlock)handler;
+ (DfthTask *)getDownloadAvatarWith:(NSString *)userId filePath:(NSString *)filePath progress:(ProgressBlock)progress complete:(EcgDownloadFileBlock)handler;

+ (DfthTask*)accountPassTaskWithUserId:(NSString *)userId oldPass:(NSString *)oldPassword newPass:(NSString *)secondPassword completeHandler:(SimpleBlock)handler;

@end
