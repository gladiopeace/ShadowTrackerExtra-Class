//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWSTask, NSDictionary, NSMutableURLRequest, NSURLRequest;

@protocol AWSURLRequestSerializer <NSObject>
- (AWSTask *)serializeRequest:(NSMutableURLRequest *)arg1 headers:(NSDictionary *)arg2 parameters:(NSDictionary *)arg3;
- (AWSTask *)validateRequest:(NSURLRequest *)arg1;
@end

