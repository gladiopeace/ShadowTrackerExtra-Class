//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TWTRSubscriber;

@interface TWTRSubscription : NSObject
{
    id <TWTRSubscriber> _subscriber;
    NSString *_className;
    NSString *_key;
}

@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) __weak id <TWTRSubscriber> subscriber; // @synthesize subscriber=_subscriber;
- (void).cxx_destruct;
- (id)initWithSubscriber:(id)arg1 className:(id)arg2 key:(id)arg3;

@end

