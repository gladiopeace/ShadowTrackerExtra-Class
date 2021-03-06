//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRInstanceIDInstanceProvider-Protocol.h"
#import "FIRLibrary-Protocol.h"

@class FIRInstanceIDCombinedHandler, FIRInstanceIDKeyPairStore, FIRInstanceIDTokenManager, NSData, NSString;

@interface FIRInstanceID : NSObject <FIRInstanceIDInstanceProvider, FIRLibrary>
{
    NSString *_fcmSenderID;
    NSString *_firebaseAppID;
    NSData *_apnsTokenData;
    long long _apnsTokenType;
    NSString *_APNSTupleString;
    NSString *_defaultFCMToken;
    FIRInstanceIDTokenManager *_tokenManager;
    FIRInstanceIDKeyPairStore *_keyPairStore;
    long long _retryCountForDefaultToken;
    FIRInstanceIDCombinedHandler *_defaultTokenFetchHandler;
}

+ (long long)maxRetryIntervalForDefaultTokenInSeconds;
+ (long long)minIntervalForDefaultTokenRetry;
+ (long long)maxRetryCountForDefaultToken;
+ (id)componentsToRegister;
+ (void)load;
+ (id)instanceIDForTests;
+ (id)instanceID;
@property(retain) FIRInstanceIDCombinedHandler *defaultTokenFetchHandler; // @synthesize defaultTokenFetchHandler=_defaultTokenFetchHandler;
@property(nonatomic) long long retryCountForDefaultToken; // @synthesize retryCountForDefaultToken=_retryCountForDefaultToken;
@property(retain, nonatomic) FIRInstanceIDKeyPairStore *keyPairStore; // @synthesize keyPairStore=_keyPairStore;
@property(retain, nonatomic) FIRInstanceIDTokenManager *tokenManager; // @synthesize tokenManager=_tokenManager;
@property(copy, nonatomic) NSString *defaultFCMToken; // @synthesize defaultFCMToken=_defaultFCMToken;
@property(copy, nonatomic) NSString *APNSTupleString; // @synthesize APNSTupleString=_APNSTupleString;
@property(nonatomic) long long apnsTokenType; // @synthesize apnsTokenType=_apnsTokenType;
@property(retain, nonatomic) NSData *apnsTokenData; // @synthesize apnsTokenData=_apnsTokenData;
@property(copy, nonatomic) NSString *firebaseAppID; // @synthesize firebaseAppID=_firebaseAppID;
@property(copy, nonatomic) NSString *fcmSenderID; // @synthesize fcmSenderID=_fcmSenderID;
- (void).cxx_destruct;
- (void)logAPNSConfigurationError:(id)arg1;
- (_Bool)isProductionApp;
- (_Bool)isSandboxApp;
- (void)notifyAPNSTokenIsSet:(id)arg1;
- (void)retryGetDefaultTokenAfter:(double)arg1;
- (void)performDefaultTokenHandlerWithToken:(id)arg1 error:(id)arg2;
- (void)defaultTokenWithRetry:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)defaultTokenWithHandler:(CDUnknownBlockType)arg1;
- (long long)retryIntervalToFetchDefaultToken;
- (void)setupNotificationListeners;
- (void)setupKeyPairManager;
- (void)setupTokenManager;
- (void)start;
- (_Bool)isFCMAutoInitEnabled;
- (void)didCompleteConfigure;
- (void)configureInstanceIDWithOptions:(id)arg1;
- (id)versionInfo;
- (id)secretToken;
- (id)deviceAuthID;
- (_Bool)tryToLoadValidCheckinInfo;
- (void)deleteIdentityWithHandler:(CDUnknownBlockType)arg1;
- (void)notifyIdentityReset;
- (void)deleteIDWithHandler:(CDUnknownBlockType)arg1;
- (void)getIDWithHandler:(CDUnknownBlockType)arg1;
- (void)asyncLoadKeyPairWithHandler:(CDUnknownBlockType)arg1;
- (void)deleteTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)tokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 options:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)cachedTokenIfAvailable;
- (void)instanceIDWithHandler:(CDUnknownBlockType)arg1;
- (id)token;
- (void)dealloc;
- (id)initPrivately;
- (id)appInstanceID:(id *)arg1;
- (void)fetchCheckinInfoWithHandler:(CDUnknownBlockType)arg1;

@end

