//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol IMSDKAuthDelegate <NSObject>
- (void)recoverWithPermission:(NSArray *)arg1 completion:(void (^)(NSString *, NSString *, NSString *, NSError *, NSString *))arg2;
- (void)connectWithPermission:(NSArray *)arg1 completion:(void (^)(NSString *, NSString *, NSString *, NSError *, NSString *))arg2;
- (NSString *)channelId;

@optional
- (void)signOut:(void (^)(_Bool, NSError *))arg1;
@end

