//
//  Request_PdfConfigUpdate.h
//  DfthNetwork
//
//  Created by Jimmy Chang on 2018/10/30.
//  Copyright © 2018 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EcgPdfConfig.h"

@interface Request_PdfConfigUpdate : NSObject

@property (nonatomic, copy) NSString *userId;
@property (nonatomic, strong) EcgPdfConfig *request;
- (instancetype)initWithUserId:(NSString *)userId pdfconfig:(EcgPdfConfig *)pdfconfig;

@end
