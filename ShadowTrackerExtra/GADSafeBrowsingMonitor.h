//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADEventContext, GADObserverCollection, GADSafeBrowsingReport, NSURL, UIView;

@interface GADSafeBrowsingMonitor : NSObject
{
    GADObserverCollection *_observers;
    GADEventContext *_context;
    NSURL *_reportURL;
    _Bool _shouldReportMaliciousAds;
    _Bool _shouldReportBenignAds;
    GADSafeBrowsingReport *_report;
    UIView *_adView;
}

- (void).cxx_destruct;
- (void)sendReport;
- (void)observeNotificationName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithAdView:(id)arg1 adRequestTransaction:(id)arg2 baseURL:(id)arg3 monitoredContext:(id)arg4 configuration:(id)arg5;

@end

