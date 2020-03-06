//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWSDDLogFormatter-Protocol.h"

@class AWSDDLoggingContextSet, NSArray, NSString;

@interface AWSDDContextBlacklistFilterLogFormatter : NSObject <AWSDDLogFormatter>
{
    AWSDDLoggingContextSet *_contextSet;
}

- (void).cxx_destruct;
- (id)formatLogMessage:(id)arg1;
- (_Bool)isOnBlacklist:(unsigned long long)arg1;
@property(readonly, copy) NSArray *blacklist;
- (void)removeFromBlacklist:(unsigned long long)arg1;
- (void)addToBlacklist:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

