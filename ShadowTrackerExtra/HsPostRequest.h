//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HsRequest.h"

@class NSData;

@interface HsPostRequest : HsRequest
{
    NSData *_httpBody;
}

@property(readonly, nonatomic) NSData *httpBody; // @synthesize httpBody=_httpBody;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 headers:(id)arg2 httpBody:(id)arg3 method:(id)arg4 timeout:(int)arg5;

@end

