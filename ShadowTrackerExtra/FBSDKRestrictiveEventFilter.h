//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FBSDKRestrictiveEventFilter : NSObject
{
    NSString *_eventName;
    NSDictionary *_eventParams;
}

@property(readonly, copy, nonatomic) NSDictionary *eventParams; // @synthesize eventParams=_eventParams;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
- (id)initWithEventName:(id)arg1 eventParams:(id)arg2;

@end

