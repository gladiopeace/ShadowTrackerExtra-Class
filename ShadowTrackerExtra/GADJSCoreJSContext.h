//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GADJSContext.h"

@class JSContext, JSVirtualMachine;

@interface GADJSCoreJSContext : GADJSContext
{
    JSVirtualMachine *_virtualMachine;
    JSContext *_JSContext;
}

@property(readonly, nonatomic) JSContext *JSContext; // @synthesize JSContext=_JSContext;
- (void).cxx_destruct;
- (id)functionWithName:(id)arg1;
- (void)asyncEvaluateFunction:(id)arg1 parameters:(id)arg2;
- (void)evaluateScript:(id)arg1;
- (id)initWithEventContext:(id)arg1;

@end

