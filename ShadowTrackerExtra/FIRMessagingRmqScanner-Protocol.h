//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FIRMessagingRmqScanner <NSObject>
- (void)scanWithRmqMessageHandler:(void (^)(long long, BOOL, NSData *))arg1 dataMessageHandler:(void (^)(long long, GtalkDataMessageStanza *))arg2;
@end

