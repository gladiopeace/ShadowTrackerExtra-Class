//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSSTSCredentials;

@interface AWSSTSGetSessionTokenResponse : AWSModel
{
    AWSSTSCredentials *_credentials;
}

+ (id)credentialsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWSSTSCredentials *credentials; // @synthesize credentials=_credentials;
- (void).cxx_destruct;

@end
