//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol IMSDKLoginDelegate <NSObject>
- (void)logout;
- (void)bindWithSubChannel:(NSString *)arg1 extra:(NSDictionary *)arg2 complete:(void (^)(_Bool, NSDictionary *, NSError *))arg3;
- (void)checkAndLoginWithPermissions:(NSArray *)arg1 handle:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
- (void)loginWithPermissions:(NSArray *)arg1 handle:(void (^)(_Bool, NSDictionary *, NSError *))arg2;

@optional
- (void)logoutWithHandle:(void (^)(_Bool, NSError *))arg1;
- (void)quickLoginWithHandle:(void (^)(_Bool, NSDictionary *, NSError *))arg1;
- (_Bool)isSupportApi;
- (_Bool)isInstalled;
- (NSString *)channelID;
@end

