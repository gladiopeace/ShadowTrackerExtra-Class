//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADSignal-Protocol.h"

@class NSDictionary, NSString;

@interface GADStaticSignal : NSObject <GADSignal>
{
    NSDictionary *_dictionary;
}

- (void).cxx_destruct;
- (void)addSignalEntriesToMutableDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

