//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;
@protocol OS_dispatch_group;

@interface GADOperation : NSObject
{
    CDUnknownBlockType _operationBlock;
    struct atomic_flag _hasStarted;
    NSObject<OS_dispatch_group> *_completionGroup;
    id _result;
    NSError *_error;
    NSString *_operationName;
    _Bool _timedOut;
    CDUnknownBlockType _completionBlock;
    double _timeout;
}

@property(readonly, nonatomic) _Bool timedOut; // @synthesize timedOut=_timedOut;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (id)resultAfterWaitingWithError:(id *)arg1;
- (void)waitForCompletion;
- (void)start;
- (void)dealloc;
- (id)init;
- (id)initWithOperationName:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

