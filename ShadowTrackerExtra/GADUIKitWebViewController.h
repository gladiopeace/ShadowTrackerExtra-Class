//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GADWebViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class GADWebViewConfiguration, NSObject, NSString, NSURL, UIWebView;
@protocol OS_dispatch_queue;

@interface GADUIKitWebViewController : GADWebViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    GADWebViewConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSURL *_lastMainDocumentURL;
    struct atomic_flag _shouldSetDataDetectorTypes;
    CDUnknownBlockType _completionHandler;
}

+ (_Bool)isAvailable;
+ (void)initialize;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)didFinishLoadCompletelyWithError:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)loadDynamicContentSize;
- (void)updateLastMainDocumentURL:(id)arg1;
- (void)asyncEvaluateJavaScriptFromString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadRequest:(id)arg1;
- (void)resetLoadState;
- (id)mainDocumentURL;
- (id)configuration;
- (id)underlyingWebView;
- (id)webView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 eventContext:(id)arg2 configuration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

