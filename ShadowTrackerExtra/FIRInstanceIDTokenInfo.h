//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class FIRInstanceIDAPNSInfo, NSDate, NSString;

@interface FIRInstanceIDTokenInfo : NSObject <NSCoding>
{
    NSString *_authorizedEntity;
    NSString *_scope;
    NSString *_token;
    NSString *_appVersion;
    NSString *_firebaseAppID;
    FIRInstanceIDAPNSInfo *_APNSInfo;
    NSDate *_cacheTime;
}

@property(copy, nonatomic) NSDate *cacheTime; // @synthesize cacheTime=_cacheTime;
@property(retain, nonatomic) FIRInstanceIDAPNSInfo *APNSInfo; // @synthesize APNSInfo=_APNSInfo;
@property(readonly, copy, nonatomic) NSString *firebaseAppID; // @synthesize firebaseAppID=_firebaseAppID;
@property(readonly, copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, copy, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(readonly, copy, nonatomic) NSString *authorizedEntity; // @synthesize authorizedEntity=_authorizedEntity;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isFresh;
- (id)initWithAuthorizedEntity:(id)arg1 scope:(id)arg2 token:(id)arg3 appVersion:(id)arg4 firebaseAppID:(id)arg5;

@end

