//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADObserverCollection, GADWebAdView;

@interface GADApplicationVolumeMonitor : NSObject
{
    GADWebAdView *_webAdView;
    GADObserverCollection *_observers;
}

- (void).cxx_destruct;
- (void)reportCurrentAudioState;
- (id)initWithWebAdView:(id)arg1;

@end
