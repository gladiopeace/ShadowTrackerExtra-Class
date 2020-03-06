//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem, GADObserverCollection;
@protocol GADEventContextSource;

@interface GADAVPlayerItemLogger : NSObject
{
    AVPlayerItem *_playerItem;
    id <GADEventContextSource> _contextSource;
    GADObserverCollection *_observers;
    _Bool _enabled;
}

- (void).cxx_destruct;
- (void)stopMonitoring;
- (void)startMonitoringOnMainThread;
- (void)startMonitoring;
- (void)dealloc;
- (id)initWithPlayerItem:(id)arg1 eventContextSource:(id)arg2;

@end

