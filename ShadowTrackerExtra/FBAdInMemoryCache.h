//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FBAdInMemoryCache : NSObject
{
    NSObject<OS_dispatch_queue> *_cacheQueue;
    unsigned long long _countLimit;
    unsigned long long _totalCostLimit;
    NSMutableDictionary *_storage;
}

@property(retain, nonatomic) NSMutableDictionary *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) unsigned long long totalCostLimit; // @synthesize totalCostLimit=_totalCostLimit;
@property(readonly, nonatomic) unsigned long long countLimit; // @synthesize countLimit=_countLimit;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (id)initWithCountLimit:(unsigned long long)arg1 totalCostLimit:(unsigned long long)arg2;
- (id)init;

@end

