//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADAdVideoController, GADObserverCollection;

@interface GADVideoMetadataMonitor : NSObject
{
    GADObserverCollection *_observers;
    GADAdVideoController *_videoController;
}

- (void).cxx_destruct;
- (void)handleVideoMetadataAction:(id)arg1;
- (id)initWithMessageSource:(id)arg1 adVideoController:(id)arg2;

@end

