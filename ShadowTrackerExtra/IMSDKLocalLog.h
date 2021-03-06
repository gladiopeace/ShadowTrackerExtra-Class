//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSFileHandle, NSString;

@interface IMSDKLocalLog : NSObject
{
    _Bool _isLocalLogEnable;
    _Bool _isUploading;
    _Bool _isCreating;
    long long _maxLogSize;
    long long _maxFileSize;
    long long _retry;
    NSString *_logfile;
    NSDate *_beginDate;
    NSDate *_endDate;
    NSFileHandle *_logFileHandle;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSFileHandle *logFileHandle; // @synthesize logFileHandle=_logFileHandle;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(retain, nonatomic) NSString *logfile; // @synthesize logfile=_logfile;
@property(nonatomic) long long retry; // @synthesize retry=_retry;
@property(nonatomic) long long maxFileSize; // @synthesize maxFileSize=_maxFileSize;
@property(nonatomic) long long maxLogSize; // @synthesize maxLogSize=_maxLogSize;
@property(nonatomic) _Bool isCreating; // @synthesize isCreating=_isCreating;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(nonatomic) _Bool isLocalLogEnable; // @synthesize isLocalLogEnable=_isLocalLogEnable;
- (void).cxx_destruct;
- (void)writeData:(id)arg1;
- (long long)compress:(id)arg1 dest:(id)arg2;
- (void)compressLogFile;
- (void)getNetworkStatus:(CDUnknownBlockType)arg1;
- (_Bool)isValidDate:(id)arg1;
- (void)updateConfig;
- (void)uploadFile:(id)arg1 counter:(long long)arg2;
- (void)deleteLogFile;
- (long long)getFileSize:(id)arg1;
- (long long)getLogSize;
- (void)createLogFile:(id)arg1;
- (void)uploadLog;
- (void)writeLog2Local:(id)arg1;
- (void)dealloc;
- (id)initSingleton;
- (id)mutablecopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

