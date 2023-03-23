//
//  Delegate_EcgUpdatePdfConfig.h
//  DfthNetwork
//
//  Created by Jimmy Chang on 2018/10/30.
//  Copyright © 2018 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol Delegate_EcgUpdatePdfConfig <NSObject>

- (void)pdfConfigUpdateResult:(DfthNetResult *)result;

@end
