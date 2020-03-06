//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LineSDKConfiguration, LineSDKOneTimePassword, NSTimer;
@protocol LineSDKLoginDelegate;

@interface LineSDKLogin : NSObject
{
    unsigned long long _state;
    LineSDKConfiguration *_configuration;
    id <LineSDKLoginDelegate> _delegate;
    LineSDKOneTimePassword *_oneTimePassword;
    NSTimer *_cancelTimer;
}

+ (id)sharedInstance;
+ (void)initialize;
@property(retain, nonatomic) NSTimer *cancelTimer; // @synthesize cancelTimer=_cancelTimer;
@property(retain, nonatomic) LineSDKOneTimePassword *oneTimePassword; // @synthesize oneTimePassword=_oneTimePassword;
@property(nonatomic) __weak id <LineSDKLoginDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) LineSDKConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)topmostViewController;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)handleDidEnterBackground;
- (void)cancelAuthentication;
- (void)handleBecomeActive;
- (void)postErrorWithLineSDKError:(id)arg1;
- (void)postInvalidStateTransition:(unsigned long long)arg1;
- (void)issueAccessTokenWithRequestToken:(id)arg1;
- (void)startLoginWithWeb:(_Bool)arg1 permissions:(id)arg2;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)startWebLoginWithPermissions:(id)arg1;
- (void)startLoginWithPermissions:(id)arg1;
- (void)startWebLogin;
- (void)startLogin;
- (void)handleLoginResponse:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1;
- (void)installLineApp;
- (_Bool)isAuthorized;
- (_Bool)isAuthorizing;
- (_Bool)canLoginWithLineApp;
- (id)initWithConfiguration:(id)arg1;
- (void)dealloc;

@end

