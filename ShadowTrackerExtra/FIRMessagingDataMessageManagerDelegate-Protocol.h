//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSString;

@protocol FIRMessagingDataMessageManagerDelegate <NSObject>
- (void)didDeleteMessagesOnServer;
- (void)didSendDataMessageWithID:(NSString *)arg1;
- (void)willSendDataMessageWithID:(NSString *)arg1 error:(NSError *)arg2;
- (void)didReceiveMessage:(NSDictionary *)arg1 withIdentifier:(NSString *)arg2;
@end

