//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdNetworkExtras-Protocol.h"

@class NSMutableDictionary, NSString;

@interface GADCustomEventExtras : NSObject <GADAdNetworkExtras>
{
    NSMutableDictionary *_extras;
}

- (void).cxx_destruct;
- (id)allExtras;
- (void)removeAllExtras;
- (id)extrasForLabel:(id)arg1;
- (void)setExtras:(id)arg1 forLabel:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

