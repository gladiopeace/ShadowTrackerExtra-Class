//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, VungleBackoffCalculator, VungleConfigController, VungleNewRequestController, VunglePlacementsCoordinator, VunglePlayabilityCoordinator, VunglePublisherInformation, VungleReportAdController;
@protocol VungleSDKInitializerDelegate;

@interface VungleSDKInitializer : NSObject
{
    _Bool _initializing;
    _Bool _initializingFromBackground;
    _Bool _didInitialize;
    VunglePublisherInformation *_publisherInformation;
    NSString *_userAgent;
    id <VungleSDKInitializerDelegate> _delegate;
    VungleBackoffCalculator *_backoffCalculator;
    NSOperationQueue *_queue;
    NSString *_advertisingIdentifier;
    unsigned long long _retryIndex;
    VungleNewRequestController *_requestNewController;
    VungleConfigController *_configController;
    VungleReportAdController *_reportAdController;
    VunglePlayabilityCoordinator *_playabilityCoordinator;
    VunglePlacementsCoordinator *_placementsCoordinator;
}

@property(nonatomic) __weak VunglePlacementsCoordinator *placementsCoordinator; // @synthesize placementsCoordinator=_placementsCoordinator;
@property(nonatomic) __weak VunglePlayabilityCoordinator *playabilityCoordinator; // @synthesize playabilityCoordinator=_playabilityCoordinator;
@property(nonatomic) __weak VungleReportAdController *reportAdController; // @synthesize reportAdController=_reportAdController;
@property(nonatomic) __weak VungleConfigController *configController; // @synthesize configController=_configController;
@property(nonatomic) __weak VungleNewRequestController *requestNewController; // @synthesize requestNewController=_requestNewController;
@property(nonatomic) unsigned long long retryIndex; // @synthesize retryIndex=_retryIndex;
@property(nonatomic) _Bool didInitialize; // @synthesize didInitialize=_didInitialize;
@property(nonatomic, getter=isInitializingFromBackground, setter=isInitializingFromBackground:) _Bool initializingFromBackground; // @synthesize initializingFromBackground=_initializingFromBackground;
@property(nonatomic, getter=isInitializing, setter=isInitializing:) _Bool initializing; // @synthesize initializing=_initializing;
@property(copy, nonatomic) NSString *advertisingIdentifier; // @synthesize advertisingIdentifier=_advertisingIdentifier;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) VungleBackoffCalculator *backoffCalculator; // @synthesize backoffCalculator=_backoffCalculator;
@property(nonatomic) __weak id <VungleSDKInitializerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy, nonatomic) VunglePublisherInformation *publisherInformation; // @synthesize publisherInformation=_publisherInformation;
- (void).cxx_destruct;
- (void)retryInitializationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)abortInitializationWithError:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)initializeFromBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)initializeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithNewRequestController:(id)arg1 configController:(id)arg2 reportAdController:(id)arg3 placementsCoordinator:(id)arg4 playabilityCoordinator:(id)arg5;

@end

