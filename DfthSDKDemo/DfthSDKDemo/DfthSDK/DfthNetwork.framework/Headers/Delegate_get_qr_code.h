//
//  Delegate_get_qr_code.h
//  DfthNetwork
//
//  Created by lizhiqiang on 2018/6/6.
//  Copyright © 2018年 yue gao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Response_QRCode.h"
@protocol Delegate_get_qr_code <NSObject>
- (void)qrcode:(DfthNetResult *)result response:(Response_QRCode*)response;

@end
