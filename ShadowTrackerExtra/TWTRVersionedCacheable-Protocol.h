//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;

@protocol TWTRVersionedCacheable <NSObject, NSCoding>
+ (NSString *)versionedCacheKeyWithID:(NSString *)arg1 perspective:(NSString *)arg2;
@end

