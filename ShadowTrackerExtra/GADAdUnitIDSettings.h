//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADObserverCollection, NSDictionary, NSObject<OS_dispatch_queue>;

@interface GADAdUnitIDSettings : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADObserverCollection *_observers;
    NSDictionary *_adUnitPatterns;
    NSDictionary *_adUnitIDSettings;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)updateAdUnitPatterns;
- (id)settingsForAdUnitID:(id)arg1 adType:(id)arg2;
- (void)updateAdUnitSettings;
- (id)nearestAncestorOfAdUnitID:(id)arg1 adType:(id)arg2;
- (id)init;

@end
