//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADAudioVideoManager, GADInitializationStatus, GADRequestConfiguration, NSString;
@protocol OS_dispatch_queue;

@interface GADMobileAds : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    _Bool _applicationMuted;
    float _applicationVolume;
    NSString *_googleMobileAdsAppID;
    struct atomic_flag _hasConfigured;
    GADAudioVideoManager *_audioVideoManager;
    GADRequestConfiguration *_requestConfiguration;
}

+ (id)sharedInstance;
+ (void)enableBackgroundAdLoading;
+ (void)disableSDKCrashReporting;
+ (void)disableAutomatedInAppPurchaseReporting;
+ (void)configureWithApplicationID:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) GADRequestConfiguration *requestConfiguration; // @synthesize requestConfiguration=_requestConfiguration;
@property(readonly, nonatomic) GADAudioVideoManager *audioVideoManager; // @synthesize audioVideoManager=_audioVideoManager;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) GADInitializationStatus *initializationStatus;
@property(readonly, copy, nonatomic) NSString *googleMobileAdsAppID;
@property(readonly, copy, nonatomic) NSString *googleMobileAdsAppIDFromPlist;
- (void)setGoogleMobileAdsAppID:(id)arg1;
- (void)registerMediationAdapterClassName:(id)arg1;
- (_Bool)isSDKVersionAtLeastMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3;
@property(nonatomic) _Bool applicationMuted;
@property(nonatomic) float applicationVolume;
- (void)configureWithApplicationID:(id)arg1;
@property(readonly, nonatomic) NSString *extendedVersion;
@property(readonly, copy, nonatomic) NSString *version;
- (id)init;

@end

