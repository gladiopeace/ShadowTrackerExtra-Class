//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSETweet;
@protocol TSEAccount;

@protocol TSENetworking <NSObject>
- (void)loadHydratedTwitterUserForAccount:(id <TSEAccount>)arg1 completion:(void (^)(id <TSETwitterUser>))arg2;
- (void)sendTweet:(TSETweet *)arg1 fromAccount:(id <TSEAccount>)arg2 completion:(void (^)(unsigned long long))arg3;
@end

