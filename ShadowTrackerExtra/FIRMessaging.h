//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRLibrary-Protocol.h"
#import "FIRMessagingClientDelegate-Protocol.h"
#import "FIRMessagingInstanceProvider-Protocol.h"
#import "FIRMessagingReceiverDelegate-Protocol.h"
#import "GULReachabilityDelegate-Protocol.h"

@class FIRInstanceID, FIRMessagingClient, FIRMessagingDataMessageManager, FIRMessagingPubSub, FIRMessagingReceiver, FIRMessagingRmqManager, FIRMessagingSyncMessageManager, GULReachabilityChecker, GULUserDefaults, NSData, NSMutableSet, NSString;
@protocol FIRAnalyticsInterop, FIRMessagingDelegate;

@interface FIRMessaging : NSObject <FIRMessagingInstanceProvider, FIRLibrary, FIRMessagingClientDelegate, FIRMessagingReceiverDelegate, GULReachabilityDelegate>
{
    _Bool _shouldEstablishDirectChannel;
    _Bool _isClientSetup;
    id <FIRMessagingDelegate> _delegate;
    NSData *_apnsTokenData;
    NSString *_defaultFcmToken;
    FIRInstanceID *_instanceID;
    FIRMessagingClient *_client;
    GULReachabilityChecker *_reachability;
    FIRMessagingDataMessageManager *_dataMessageManager;
    FIRMessagingPubSub *_pubsub;
    FIRMessagingRmqManager *_rmq2Manager;
    FIRMessagingReceiver *_receiver;
    FIRMessagingSyncMessageManager *_syncMessageManager;
    GULUserDefaults *_messagingUserDefaults;
    NSMutableSet *_loggedMessageIDs;
    id <FIRAnalyticsInterop> _analytics;
}

+ (id)firebaselocalesMap;
+ (id)firebaseLocales;
+ (id)currentLocale;
+ (_Bool)createSubDirectory:(id)arg1;
+ (id)pathForSubDirectory:(id)arg1;
+ (_Bool)hasSubDirectory:(id)arg1;
+ (id)FIRMessagingSDKCurrentLocale;
+ (id)FIRMessagingSDKVersion;
+ (id)createFIRMessagingMessageWithMessage:(id)arg1 to:(id)arg2 withID:(id)arg3 timeToLive:(long long)arg4 delay:(int)arg5;
+ (id)normalizeTopic:(id)arg1;
+ (void)configureWithApp:(id)arg1;
+ (id)componentsToRegister;
+ (void)load;
+ (id)extensionHelper;
+ (id)messaging;
@property(retain, nonatomic) id <FIRAnalyticsInterop> analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) NSMutableSet *loggedMessageIDs; // @synthesize loggedMessageIDs=_loggedMessageIDs;
@property(retain, nonatomic) GULUserDefaults *messagingUserDefaults; // @synthesize messagingUserDefaults=_messagingUserDefaults;
@property(retain, nonatomic) FIRMessagingSyncMessageManager *syncMessageManager; // @synthesize syncMessageManager=_syncMessageManager;
@property(retain, nonatomic) FIRMessagingReceiver *receiver; // @synthesize receiver=_receiver;
@property(retain, nonatomic) FIRMessagingRmqManager *rmq2Manager; // @synthesize rmq2Manager=_rmq2Manager;
@property(retain, nonatomic) FIRMessagingPubSub *pubsub; // @synthesize pubsub=_pubsub;
@property(retain, nonatomic) FIRMessagingDataMessageManager *dataMessageManager; // @synthesize dataMessageManager=_dataMessageManager;
@property(retain, nonatomic) GULReachabilityChecker *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) FIRMessagingClient *client; // @synthesize client=_client;
@property(nonatomic) _Bool isClientSetup; // @synthesize isClientSetup=_isClientSetup;
@property(retain, nonatomic) FIRInstanceID *instanceID; // @synthesize instanceID=_instanceID;
@property(retain, nonatomic) NSString *defaultFcmToken; // @synthesize defaultFcmToken=_defaultFcmToken;
@property(retain, nonatomic) NSData *apnsTokenData; // @synthesize apnsTokenData=_apnsTokenData;
@property(nonatomic) _Bool shouldEstablishDirectChannel; // @synthesize shouldEstablishDirectChannel=_shouldEstablishDirectChannel;
@property(nonatomic) __weak id <FIRMessagingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)defaultInstanceIDTokenWasRefreshed:(id)arg1;
- (void)didReceiveDefaultInstanceIDToken:(id)arg1;
- (BOOL)networkType;
- (_Bool)isNetworkAvailable;
- (void)onNetworkStatusChanged;
- (void)reachability:(id)arg1 statusChanged:(int)arg2;
- (void)receiver:(id)arg1 receivedRemoteMessage:(id)arg2;
- (void)sendMessage:(id)arg1 to:(id)arg2 withMessageID:(id)arg3 timeToLive:(long long)arg4;
- (void)unsubscribeFromTopic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unsubscribeFromTopic:(id)arg1;
- (void)subscribeToTopic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)subscribeToTopic:(id)arg1;
- (void)notifyOfDirectChannelConnectionChange;
- (void)updateAutomaticClientConnection;
- (_Bool)shouldBeConnectedAutomatically;
@property(readonly, nonatomic) _Bool isDirectChannelEstablished;
- (void)applicationStateChanged;
- (void)notifyDelegateOfFCMTokenAvailability;
- (void)validateDelegateConformsToTokenAvailabilityMethods;
- (void)deleteFCMTokenForSenderID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)retrieveFCMTokenForSenderID:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *FCMToken;
@property(nonatomic, getter=isAutoInitEnabled) _Bool autoInitEnabled;
- (void)setAPNSToken:(id)arg1 type:(long long)arg2;
@property(copy, nonatomic) NSData *APNSToken;
- (id)linkURLFromMessage:(id)arg1;
- (void)handleIncomingLinkIfNeededFromMessage:(id)arg1;
- (_Bool)handleContextManagerMessage:(id)arg1;
- (id)appDidReceiveMessage:(id)arg1;
- (void)teardown;
- (void)setupSyncMessageManager;
- (void)setupTopics;
- (void)setupRmqManager;
- (void)setupDataMessageManager;
- (void)setupClient;
- (void)setupReceiver;
- (void)setupNotificationListeners;
- (void)setupFileManagerSubDirectory;
- (void)start;
- (void)configureMessaging:(id)arg1;
- (void)dealloc;
- (id)initWithAnalytics:(id)arg1 withInstanceID:(id)arg2 withUserDefaults:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

