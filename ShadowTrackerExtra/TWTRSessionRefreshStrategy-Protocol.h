//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSHTTPURLResponse, NSURLSession;
@protocol TWTRBaseSession;

@protocol TWTRSessionRefreshStrategy <NSObject>
+ (_Bool)isSessionExpiredBasedOnRequestError:(NSError *)arg1;
+ (_Bool)isSessionExpiredBasedOnRequestResponse:(NSHTTPURLResponse *)arg1;
+ (_Bool)canSupportSessionClass:(Class)arg1;
- (void)refreshSession:(id <TWTRBaseSession>)arg1 URLSession:(NSURLSession *)arg2 completion:(void (^)(id, NSError *))arg3;
@end

