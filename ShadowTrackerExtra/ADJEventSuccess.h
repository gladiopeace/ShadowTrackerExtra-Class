//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ADJEventSuccess : NSObject
{
    NSString *_message;
    NSString *_timeStamp;
    NSString *_adid;
    NSString *_eventToken;
    NSString *_callbackId;
    NSDictionary *_jsonResponse;
}

+ (id)eventSuccessResponseData;
@property(retain, nonatomic) NSDictionary *jsonResponse; // @synthesize jsonResponse=_jsonResponse;
@property(copy, nonatomic) NSString *callbackId; // @synthesize callbackId=_callbackId;
@property(copy, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(copy, nonatomic) NSString *adid; // @synthesize adid=_adid;
@property(copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

