//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TWTRBaseSession-Protocol.h"

@class NSString;

@protocol TWTRAuthSession <TWTRBaseSession>
@property(readonly, copy, nonatomic) NSString *userID;
@property(readonly, copy, nonatomic) NSString *authTokenSecret;
@property(readonly, copy, nonatomic) NSString *authToken;
@end

