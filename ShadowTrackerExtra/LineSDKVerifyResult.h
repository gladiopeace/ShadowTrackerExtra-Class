//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet, NSString;

@interface LineSDKVerifyResult : NSObject
{
    NSString *_channelID;
    double _expiresIn;
    NSOrderedSet *_permissions;
}

@property(copy, nonatomic) NSOrderedSet *permissions; // @synthesize permissions=_permissions;
@property(nonatomic) double expiresIn; // @synthesize expiresIn=_expiresIn;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)description;
- (id)initWithChannelID:(id)arg1 expiresIn:(double)arg2 permissions:(id)arg3;

@end

