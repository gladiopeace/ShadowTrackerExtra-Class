//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VungleBackoffCalculator : NSObject
{
    unsigned long long _attemptCount;
    unsigned long long _backoffOverride;
}

@property(nonatomic) unsigned long long backoffOverride; // @synthesize backoffOverride=_backoffOverride;
@property(nonatomic) unsigned long long attemptCount; // @synthesize attemptCount=_attemptCount;
- (unsigned long long)backoffTime;
- (void)resetAttempts;
- (void)increaseAttempts;
- (id)init;

@end
