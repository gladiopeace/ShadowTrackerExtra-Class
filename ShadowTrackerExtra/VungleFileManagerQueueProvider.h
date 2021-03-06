//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VungleSerialQueueProvider-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface VungleFileManagerQueueProvider : NSObject <VungleSerialQueueProvider>
{
    NSObject<OS_dispatch_queue> *_fileManagerQueue;
}

+ (id)sharedProvider;
@property(retain) NSObject<OS_dispatch_queue> *fileManagerQueue; // @synthesize fileManagerQueue=_fileManagerQueue;
- (void).cxx_destruct;
- (id)provideSerialQueue;
- (void)setupSerialQueue;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

