//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _XYYLinkedMapNode;

@interface _XYYLinkedMap : NSObject
{
    struct __CFDictionary *_dic;
    unsigned long long _totalCost;
    unsigned long long _totalCount;
    _XYYLinkedMapNode *_head;
    _XYYLinkedMapNode *_tail;
    _Bool _releaseOnMainThread;
    _Bool _releaseAsynchronously;
}

- (void).cxx_destruct;
- (void)removeAll;
- (id)removeTailNode;
- (void)removeNode:(id)arg1;
- (void)bringNodeToHead:(id)arg1;
- (void)insertNodeAtHead:(id)arg1;
- (void)dealloc;
- (id)init;

@end

