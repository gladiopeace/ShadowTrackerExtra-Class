//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HSApplicationLifeCycleEvents-Protocol.h"

@class HSApplicationLifeCycleEventsListener, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface HsApplicationLifeCycleCallback : NSObject <HSApplicationLifeCycleEvents>
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableArray *_listeners;
    _Bool applicationDidResignActive;
    HSApplicationLifeCycleEventsListener *eventListner;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)applicationDidResignActive;
- (void)dispatchLifeCycleEvent:(int)arg1;
- (void)triggerScheduledNotifications;
- (void)scheduleLocalNotification:(id)arg1;
- (void)appendLifeCycleListener:(id)arg1;
- (void)addLifeCycleListener:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)hsApplicationWillEnterForeground;
- (void)hsApplicationWillResignActive;
- (void)hsApplicationDidEnterBackground;
- (void)hsApplicationDidBecomeActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

