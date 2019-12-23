//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AWSCredentialsProvider.h"

@class AWSCredentials, AWSSTS, AWSUICKeyChainStore, NSString;

@interface AWSWebIdentityCredentialsProvider : NSObject <AWSCredentialsProvider>
{
    AWSCredentials *_internalCredentials;
    NSString *_webIdentityToken;
    NSString *_roleArn;
    NSString *_roleSessionName;
    NSString *_providerId;
    AWSSTS *_sts;
    AWSUICKeyChainStore *_keychain;
}

@property(retain, nonatomic) AWSUICKeyChainStore *keychain; // @synthesize keychain=_keychain;
@property(retain, nonatomic) AWSSTS *sts; // @synthesize sts=_sts;
@property(retain, nonatomic) NSString *providerId; // @synthesize providerId=_providerId;
@property(retain, nonatomic) NSString *roleSessionName; // @synthesize roleSessionName=_roleSessionName;
@property(retain, nonatomic) NSString *roleArn; // @synthesize roleArn=_roleArn;
@property(retain, nonatomic) NSString *webIdentityToken; // @synthesize webIdentityToken=_webIdentityToken;
- (void).cxx_destruct;
@property(retain, nonatomic) AWSCredentials *internalCredentials; // @synthesize internalCredentials=_internalCredentials;
- (void)invalidateCachedTemporaryCredentials;
- (id)credentials;
- (id)initWithRegionType:(long long)arg1 providerId:(id)arg2 roleArn:(id)arg3 roleSessionName:(id)arg4 webIdentityToken:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
