//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol TWTRUserSessionVerifierDelegate;

@interface TWTRUserSessionVerifier : NSObject
{
    _Bool _alreadyStarted;
    id <TWTRUserSessionVerifierDelegate> _delegate;
    double _maxDesiredInterval;
    NSDate *_lastVerifiedTimestamp;
}

@property(nonatomic) _Bool alreadyStarted; // @synthesize alreadyStarted=_alreadyStarted;
@property(retain, nonatomic) NSDate *lastVerifiedTimestamp; // @synthesize lastVerifiedTimestamp=_lastVerifiedTimestamp;
@property(readonly, nonatomic) double maxDesiredInterval; // @synthesize maxDesiredInterval=_maxDesiredInterval;
@property(nonatomic) __weak id <TWTRUserSessionVerifierDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isPastMaxDesiredInterval;
- (void)verifyNowIfNecessary;
- (void)dealloc;
- (void)addHooksForFutureVerifications;
- (void)startVerification;
- (void)startVerificationAfterDelay:(double)arg1;
- (id)initWithDelegate:(id)arg1 maxDesiredInterval:(double)arg2;

@end

