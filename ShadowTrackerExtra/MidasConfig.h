//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MidasConfig : NSObject
{
    _Bool _logEnable;
    _Bool _showResultPage;
}

@property(nonatomic) _Bool showResultPage; // @synthesize showResultPage=_showResultPage;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) long long logFileDays;
@property(nonatomic) long long logFileSize;
@property(nonatomic) _Bool disableReport;
@property(nonatomic) _Bool logEnable;
- (void)parseConfig:(id)arg1 offerID:(id)arg2;
- (id)init;

@end

