//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, NSString, VNGMoatWebViewAndBridge;

@interface VNGMoatAnalytics : NSObject
{
    _Bool _initialized;
    _Bool _webViewInitialized;
    _Bool _locationServicesEnabled;
    _Bool _IDFACollectionBlocked;
    NSMutableArray *_completionBlocks;
    VNGMoatWebViewAndBridge *_globalDisplayWebView;
    NSString *_displayPartnerCode;
    NSHashTable *_trackedWebViews;
}

+ (id)sharedInstance;
@property(retain) NSHashTable *trackedWebViews; // @synthesize trackedWebViews=_trackedWebViews;
@property(retain) NSString *displayPartnerCode; // @synthesize displayPartnerCode=_displayPartnerCode;
@property(retain) VNGMoatWebViewAndBridge *globalDisplayWebView; // @synthesize globalDisplayWebView=_globalDisplayWebView;
@property _Bool IDFACollectionBlocked; // @synthesize IDFACollectionBlocked=_IDFACollectionBlocked;
@property _Bool locationServicesEnabled; // @synthesize locationServicesEnabled=_locationServicesEnabled;
@property _Bool webViewInitialized; // @synthesize webViewInitialized=_webViewInitialized;
@property _Bool initialized; // @synthesize initialized=_initialized;
@property(retain) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
- (void).cxx_destruct;
- (void)initializeDisplayWebView;
- (void)setDebug:(_Bool)arg1;
- (_Bool)addTrackedWebView:(id)arg1;
- (id)getBridge;
- (_Bool)isInitialized;
- (_Bool)isIDFACollectionBlocked;
- (_Bool)areLocationServicesEnabled;
- (void)disableLocationServices;
- (void)removeCompletionBlock:(id)arg1;
- (void)registerCompletionBlock:(id)arg1;
- (void)prepareNativeDisplayTracking:(id)arg1;
- (void)initializeAppHooks:(id)arg1;
- (void)commonStart:(id)arg1;
- (void)start;
- (void)startWithOptions:(id)arg1;
- (id)init;

@end

