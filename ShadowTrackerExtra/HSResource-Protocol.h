//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HSResourceCacheProperties, NSData, NSString;

@protocol HSResource <NSObject>
- (HSResourceCacheProperties *)cacheProperties;
- (NSString *)mimeType;
- (NSString *)extension;
- (NSString *)name;
- (NSData *)data;
- (id)initWithData:(NSData *)arg1 name:(NSString *)arg2 extension:(NSString *)arg3 cacheProperties:(HSResourceCacheProperties *)arg4;
@end

