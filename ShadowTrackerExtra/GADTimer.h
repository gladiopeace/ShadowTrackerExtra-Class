//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GADTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    CDUnknownBlockType _handler;
    long long _expirationIdentifier;
    double _resumeTimestamp;
    double _timeInterval;
    double _remainingTimeInterval;
    _Bool _isStarted;
    _Bool _isPaused;
}

- (void).cxx_destruct;
- (void)forceExpire;
- (void)expiredWithExpirationIdentifier:(long long)arg1;
- (void)pauseInternal;
- (void)pause;
- (void)resumeInternal;
- (void)resume;
- (void)startInternal;
- (void)start;
- (id)initWithTimeInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;

@end

