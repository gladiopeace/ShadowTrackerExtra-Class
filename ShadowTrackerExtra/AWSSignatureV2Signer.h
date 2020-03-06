//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWSNetworkingRequestInterceptor-Protocol.h"

@class AWSEndpoint, NSString;
@protocol AWSCredentialsProvider;

@interface AWSSignatureV2Signer : NSObject <AWSNetworkingRequestInterceptor>
{
    id <AWSCredentialsProvider> _credentialsProvider;
    AWSEndpoint *_endpoint;
}

+ (id)signerWithCredentialsProvider:(id)arg1 endpoint:(id)arg2;
@property(retain, nonatomic) AWSEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) id <AWSCredentialsProvider> credentialsProvider; // @synthesize credentialsProvider=_credentialsProvider;
- (void).cxx_destruct;
- (id)interceptRequest:(id)arg1;
- (id)initWithCredentialsProvider:(id)arg1 endpoint:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

