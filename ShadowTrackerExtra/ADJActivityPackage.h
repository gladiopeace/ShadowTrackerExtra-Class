//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface ADJActivityPackage : NSObject <NSCoding>
{
    int _activityKind;
    NSString *_path;
    NSString *_clientSdk;
    long long _retries;
    NSMutableDictionary *_parameters;
    NSDictionary *_partnerParameters;
    NSDictionary *_callbackParameters;
    NSString *_suffix;
}

@property(nonatomic) int activityKind; // @synthesize activityKind=_activityKind;
@property(copy, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
@property(retain, nonatomic) NSDictionary *callbackParameters; // @synthesize callbackParameters=_callbackParameters;
@property(retain, nonatomic) NSDictionary *partnerParameters; // @synthesize partnerParameters=_partnerParameters;
@property(retain, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) long long retries; // @synthesize retries=_retries;
@property(copy, nonatomic) NSString *clientSdk; // @synthesize clientSdk=_clientSdk;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)failureMessage;
- (id)successMessage;
- (id)description;
- (long long)increaseRetries;
- (long long)getRetries;
- (id)extendedString;

@end

