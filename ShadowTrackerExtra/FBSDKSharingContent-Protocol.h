//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBSDKCopying-Protocol.h"
#import "FBSDKSharingValidation-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class FBSDKHashtag, NSArray, NSDictionary, NSString, NSURL;

@protocol FBSDKSharingContent <FBSDKCopying, FBSDKSharingValidation, NSSecureCoding>
@property(readonly, copy, nonatomic) NSString *shareUUID;
@property(copy, nonatomic) NSString *pageID;
@property(copy, nonatomic) NSString *ref;
@property(copy, nonatomic) NSString *placeID;
@property(copy, nonatomic) NSArray *peopleIDs;
@property(copy, nonatomic) FBSDKHashtag *hashtag;
@property(copy, nonatomic) NSURL *contentURL;
- (NSDictionary *)addParameters:(NSDictionary *)arg1 bridgeOptions:(unsigned long long)arg2;
@end

