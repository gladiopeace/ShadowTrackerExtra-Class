//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PLCrashReportThreadInfo : NSObject
{
    long long _threadNumber;
    NSArray *_stackFrames;
    _Bool _crashed;
    NSArray *_registers;
}

@property(readonly, nonatomic) NSArray *registers; // @synthesize registers=_registers;
@property(readonly, nonatomic) _Bool crashed; // @synthesize crashed=_crashed;
@property(readonly, nonatomic) NSArray *stackFrames; // @synthesize stackFrames=_stackFrames;
@property(readonly, nonatomic) long long threadNumber; // @synthesize threadNumber=_threadNumber;
- (void)dealloc;
- (id)initWithThreadNumber:(long long)arg1 stackFrames:(id)arg2 crashed:(_Bool)arg3 registers:(id)arg4;

@end

