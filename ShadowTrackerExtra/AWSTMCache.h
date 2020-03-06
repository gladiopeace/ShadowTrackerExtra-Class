//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWSTMDiskCache, AWSTMMemoryCache, NSString;
@protocol OS_dispatch_queue;

@interface AWSTMCache : NSObject
{
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    AWSTMDiskCache *_diskCache;
    AWSTMMemoryCache *_memoryCache;
}

+ (id)sharedCache;
@property(readonly) AWSTMMemoryCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(readonly) AWSTMDiskCache *diskCache; // @synthesize diskCache=_diskCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)trimToDate:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
@property(readonly) unsigned long long diskByteCount;
- (void)trimToDate:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeAllObjects:(CDUnknownBlockType)arg1;
- (void)removeObjectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)objectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)description;
- (id)initWithName:(id)arg1 rootPath:(id)arg2;
- (id)initWithName:(id)arg1;

@end

