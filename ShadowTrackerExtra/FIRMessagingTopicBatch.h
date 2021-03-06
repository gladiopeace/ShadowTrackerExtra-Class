//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableDictionary, NSMutableSet;

@interface FIRMessagingTopicBatch : NSObject <NSCoding>
{
    long long _action;
    NSMutableSet *_topics;
    NSMutableDictionary *_topicHandlers;
}

@property(retain, nonatomic) NSMutableDictionary *topicHandlers; // @synthesize topicHandlers=_topicHandlers;
@property(readonly, copy, nonatomic) NSMutableSet *topics; // @synthesize topics=_topics;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAction:(long long)arg1;

@end

