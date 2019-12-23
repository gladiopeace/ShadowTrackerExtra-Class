//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBInterstitialAdDelegate.h"
#import "GADMediationInterstitialAd.h"

@class FBInterstitialAd, NSString;

@interface GADFBInterstitialRenderer : NSObject <GADMediationInterstitialAd, FBInterstitialAdDelegate>
{
    CDUnknownBlockType _adLoadCompletionHandler;
    FBInterstitialAd *_interstitialAd;
    id <GADMediationInterstitialAdEventDelegate> _adEventDelegate;
    _Bool _isRTBRequest;
}

- (void).cxx_destruct;
- (void)presentFromViewController:(id)arg1;
- (void)interstitialAdDidClose:(id)arg1;
- (void)interstitialAdWillClose:(id)arg1;
- (void)interstitialAdDidClick:(id)arg1;
- (void)interstitialAdWillLogImpression:(id)arg1;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdDidLoad:(id)arg1;
- (void)renderInterstitialForAdConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
