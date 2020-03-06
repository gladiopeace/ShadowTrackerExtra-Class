//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADSignalSource-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface GADBlockSignalSource : NSObject <GADSignalSource>
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _signalBlock;
}

- (void).cxx_destruct;
- (void)getSignalUpdateQueue:(id *)arg1 signalCreationBlock:(CDUnknownBlockType *)arg2;
- (id)initWithQueue:(id)arg1 signalBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

