//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADServerTransaction;

@protocol GADAdRendering <NSObject>
+ (id)alloc;
- (void)renderWithServerTransaction:(GADServerTransaction *)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(void (^)(NSArray *, NSArray *, struct NSDictionary *))arg3;

@optional
- (void)invalidateAndCancel;
@end

