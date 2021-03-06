//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AWSRequest.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface AWSCognitoIdentityCreateIdentityPoolInput : AWSRequest
{
    NSNumber *_allowUnauthenticatedIdentities;
    NSArray *_cognitoIdentityProviders;
    NSString *_developerProviderName;
    NSString *_identityPoolName;
    NSArray *_openIdConnectProviderARNs;
    NSArray *_samlProviderARNs;
    NSDictionary *_supportedLoginProviders;
}

+ (id)cognitoIdentityProvidersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSDictionary *supportedLoginProviders; // @synthesize supportedLoginProviders=_supportedLoginProviders;
@property(retain, nonatomic) NSArray *samlProviderARNs; // @synthesize samlProviderARNs=_samlProviderARNs;
@property(retain, nonatomic) NSArray *openIdConnectProviderARNs; // @synthesize openIdConnectProviderARNs=_openIdConnectProviderARNs;
@property(retain, nonatomic) NSString *identityPoolName; // @synthesize identityPoolName=_identityPoolName;
@property(retain, nonatomic) NSString *developerProviderName; // @synthesize developerProviderName=_developerProviderName;
@property(retain, nonatomic) NSArray *cognitoIdentityProviders; // @synthesize cognitoIdentityProviders=_cognitoIdentityProviders;
@property(retain, nonatomic) NSNumber *allowUnauthenticatedIdentities; // @synthesize allowUnauthenticatedIdentities=_allowUnauthenticatedIdentities;
- (void).cxx_destruct;

@end

