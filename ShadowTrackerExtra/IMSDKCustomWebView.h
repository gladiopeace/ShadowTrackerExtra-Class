//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class IMSDKWKWebViewJavascriptBridge, NSString, NSURL, WKWebView;
@protocol IMSDKWebViewPluginDelegate;

@interface IMSDKCustomWebView : UIView <WKNavigationDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    UIView *_parentView;
    id <IMSDKWebViewPluginDelegate> _webViewDelegate;
    NSURL *_url;
    WKWebView *_wkWebView;
    CDUnknownBlockType _jsCallback;
    IMSDKWKWebViewJavascriptBridge *_bridge;
}

@property(retain, nonatomic) IMSDKWKWebViewJavascriptBridge *bridge; // @synthesize bridge=_bridge;
@property(copy, nonatomic) CDUnknownBlockType jsCallback; // @synthesize jsCallback=_jsCallback;
@property(retain, nonatomic) WKWebView *wkWebView; // @synthesize wkWebView=_wkWebView;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) __weak id <IMSDKWebViewPluginDelegate> webViewDelegate; // @synthesize webViewDelegate=_webViewDelegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (id)getTopView;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)callJSFunction:(id)arg1;
- (void)registerBridgeHandler:(id)arg1;
- (void)unregisterBridgeHandler:(id)arg1;
- (void)setBgColor:(id)arg1;
- (void)reloadWebView;
- (void)backWebView;
- (void)forwardWebView;
- (_Bool)canGoForward;
- (_Bool)canGoBack;
- (void)hide;
- (void)show:(id)arg1;
- (void)setRequestUrl:(id)arg1;
- (void)setShowHorizontalScrollBar:(_Bool)arg1 setShowVerticalScrollBar:(_Bool)arg2;
- (id)initWithUrl:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

