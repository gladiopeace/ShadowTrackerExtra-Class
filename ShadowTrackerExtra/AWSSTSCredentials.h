//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AWSModel.h"

@class NSDate, NSString;

@interface AWSSTSCredentials : AWSModel
{
    NSString *_accessKeyId;
    NSDate *_expiration;
    NSString *_secretAccessKey;
    NSString *_sessionToken;
}

+ (id)expirationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(retain, nonatomic) NSString *secretAccessKey; // @synthesize secretAccessKey=_secretAccessKey;
@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSString *accessKeyId; // @synthesize accessKeyId=_accessKeyId;
- (void).cxx_destruct;

@end

