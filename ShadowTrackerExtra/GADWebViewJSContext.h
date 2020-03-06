//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GADJSContext.h"

#import "GADWebViewControllerDelegate-Protocol.h"

@class GADActionURLHandler, GADWebViewController, NSMutableArray, NSString;

@interface GADWebViewJSContext : GADJSContext <GADWebViewControllerDelegate>
{
    GADWebViewController *_webViewController;
    NSMutableArray *_bufferedScripts;
    CDUnknownBlockType _loadHTMLURLCompletionHandler;
    GADActionURLHandler *_actionURLHandler;
}

- (void).cxx_destruct;
- (void)webViewControllerWebContentProcessDidTerminate:(id)arg1;
- (void)webViewController:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFailWithError:(id)arg1;
- (void)webViewControllerDidFinishLoad:(id)arg1;
- (void)webViewControllerDidStartLoad:(id)arg1;
- (_Bool)webViewController:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)asyncEvaluateFunction:(id)arg1 parameters:(id)arg2;
- (void)evaluateScript:(id)arg1;
- (id)functionWithName:(id)arg1;
- (void)loadRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)loadWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEventContext:(id)arg1;
- (id)initWithConfiguration:(id)arg1 eventContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

