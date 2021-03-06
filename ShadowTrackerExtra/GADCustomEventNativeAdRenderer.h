//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdRendering-Protocol.h"
#import "GADCustomEventNativeAdDelegate-Protocol.h"

@class GADServerTransaction, NSString;
@protocol GADCustomEventNativeAd;

@interface GADCustomEventNativeAdRenderer : NSObject <GADCustomEventNativeAdDelegate, GADAdRendering>
{
    GADServerTransaction *_transaction;
    struct NSDictionary *_adConfiguration;
    CDUnknownBlockType _renderCompletionHandler;
    id <GADCustomEventNativeAd> _customEventNative;
    struct atomic_flag _adLoadCompleted;
}

- (void).cxx_destruct;
- (void)customEventNativeAd:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)customEventNativeAd:(id)arg1 didReceiveMediatedUnifiedNativeAd:(id)arg2;
- (void)customEventNativeAd:(id)arg1 didReceiveMediatedNativeAd:(id)arg2;
- (void)processMediatedNativeAd:(id)arg1 withCustomEventNativeAd:(id)arg2;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

