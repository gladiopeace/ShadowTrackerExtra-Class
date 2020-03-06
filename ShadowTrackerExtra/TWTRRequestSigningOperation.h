//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class TWTRNetworkingPipelinePackage;

@interface TWTRRequestSigningOperation : NSOperation
{
    TWTRNetworkingPipelinePackage *_networkingPackage;
    CDUnknownBlockType _successCallbackToExecute;
    CDUnknownBlockType _cancelCallbackToExecute;
}

@property(copy, nonatomic) CDUnknownBlockType cancelCallbackToExecute; // @synthesize cancelCallbackToExecute=_cancelCallbackToExecute;
@property(copy, nonatomic) CDUnknownBlockType successCallbackToExecute; // @synthesize successCallbackToExecute=_successCallbackToExecute;
@property(readonly, nonatomic) TWTRNetworkingPipelinePackage *networkingPackage; // @synthesize networkingPackage=_networkingPackage;
- (void).cxx_destruct;
- (id)signRequest:(id)arg1;
- (void)didInvokeCompletionBlock;
- (void)invokeCancelBlock;
- (void)invokeSuccessBlock:(id)arg1;
- (void)cancel;
- (void)main;
- (id)initWithPackage:(id)arg1 success:(CDUnknownBlockType)arg2 cancel:(CDUnknownBlockType)arg3;
- (id)init;

@end

