//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IMSDKLoginChannelData : NSObject
{
    NSString *_userID;
    NSString *_token;
    long long _tokenExpire;
    NSArray *_permissions;
}

@property(retain) NSArray *permissions; // @synthesize permissions=_permissions;
@property long long tokenExpire; // @synthesize tokenExpire=_tokenExpire;
@property(retain) NSString *token; // @synthesize token=_token;
@property(retain) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;

@end

