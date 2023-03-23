//
//  EcgPdfConfig.h
//  DfthNetwork
//
//  Created by Jimmy Chang on 2018/10/30.
//  Copyright © 2018 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EcgPdfConfig : NSObject

@property (nonatomic, copy) NSString *mId;
@property (nonatomic, copy) NSString *macAddr;
@property (nonatomic, copy) NSString *pdfTask;
@property (nonatomic, assign) NSInteger seconds;
@property (nonatomic, copy) NSString *pdfShow;
@property (nonatomic, copy) NSString *account;
@property (nonatomic, copy) NSString *password;

- (instancetype)initWithMemberId:(NSString *)memberId macAddr:(NSString *)macAddr pdfTsak:(NSString *)pdfTask seconds:(NSInteger)seconds pdfShow:(NSString *)pdfShow account:(NSString *)account password:(NSString *)password;

@end
