//
//  DfthEcgRecord.h
//  DfthDB
//
//  Created by gaoyue on 2017/6/21.
//  Copyright © 2017年 gaoyue. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DBBaseObject.h"

typedef NS_ENUM(NSInteger, DataServiceCode){
    SSC = 0,
    BP,
    ALLBP,
    ALLECG,
    ECGPIECE,
    QUESTION,
    PDF
};

typedef NS_ENUM(NSInteger, EcgRecordState){
    MeasureStarted = 0,
    MeasureStopped,
    AnalyseComplete,
    UploadCompleted,
    AnalyseSended,
    TaskCreated,
    GotService,
    ReadService,
};

typedef NS_ENUM(NSInteger, EcgRecordPdfState){
    NoPdfReport = 0,
    PdfReportOngoing,
    PdfReprotCompleted,
};

typedef NS_ENUM(NSInteger, EcgRecordPdfShow){
    ShowRecordPdf = 0,
    HideRecordPdf,
    
};

typedef NS_ENUM(NSInteger, EcgRecordPdfTask){
    NO_PDF_TASK = 0,
    PDF_TASK_ANALYSISING,
    PDF_TASK_DONE,
    PDF_TASK_INVALID
    
};



@interface DfthEcgRecord : DBBaseObject
@property (nonatomic, copy) NSString *recordId;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *appId;

@property (nonatomic, copy) NSString *deviceMac;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, assign) int deviceLeadCount;
@property (nonatomic, assign) double sampling;
@property (nonatomic, assign) double ADUnit;
@property (nonatomic, assign) int blockSize;
@property (nonatomic, copy) NSString *timeZone;

@property (nonatomic, assign) NSTimeInterval measureStartTime;    //单位秒
@property (nonatomic, assign) NSTimeInterval measureEndTime;  //单位秒
@property (nonatomic, assign) unsigned long long ecgDataLength;
@property (nonatomic, copy) NSString *storagePath;
@property (nonatomic, assign) EcgRecordState state;
@property (nonatomic, assign) BOOL ecgFileUploaded;
@property (nonatomic, assign) BOOL otherFilesUploaded;
@property (nonatomic, assign) int measureMode;

@property (nonatomic, copy) NSString *doctorId;
@property (nonatomic, copy) NSString *doctorNo;
@property (nonatomic, copy) NSString *doctorName;
@property (nonatomic, copy) NSString *doctorResult;
@property (nonatomic, copy) NSString* doctorResultEn;
@property (nonatomic, copy) NSString *doctorStatus;
@property (nonatomic, assign) int serviceType;
@property (nonatomic, assign) NSTimeInterval serviceTime;     //单位秒
@property (nonatomic, assign) NSTimeInterval saveTime;
@property (nonatomic, assign) NSTimeInterval lastModifyTime;     //标识ini和dat的最后修改时间, 单位秒
@property (nonatomic, assign) BOOL datFileChanged;     //标识ini和dat文件是否被修改过

@property (nonatomic, assign) EcgRecordPdfShow pdfShow;
@property (nonatomic, assign) int statePdf;
@property (nonatomic, assign) EcgRecordPdfTask statusPdfTask;
@property (nonatomic, assign) int heartBeatCount;
@property (nonatomic, assign) int heartRateAvg;
@property (nonatomic, assign) int heartRateMax;
@property (nonatomic, assign) int heartRateMin;
@property (nonatomic, assign) int heartRateMaxRPeak;
@property (nonatomic, assign) int heartRateMinRPeak;
@property (nonatomic, assign) int pvcCount;
@property (nonatomic, assign) int spCount;
@property (nonatomic, strong) NSString *pvcRPeakArray;
@property (nonatomic, strong) NSString *spRPeakArray;
@property (nonatomic, copy) NSString *diseases;
@property (nonatomic, copy) NSString *symptom;
@property (nonatomic, assign) int symptomLast;
@property (nonatomic, assign) int score;
@property (nonatomic, assign) int qt;
@property (nonatomic, assign) int qtc;

//@property (nonatomic, assign) BOOL hasException;
//@property (nonatomic, strong) NSString *exceptionInfo;

@end
