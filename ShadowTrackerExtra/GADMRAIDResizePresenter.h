//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADMonitorOwner-Protocol.h"
#import "GADPresenting-Protocol.h"

@class GADCloseButton, GADEventContext, GADMRAIDResizeProperties, GADObserverCollection, GADWindowScene, NSMutableArray, NSString, UIView;

@interface GADMRAIDResizePresenter : NSObject <GADPresenting, GADMonitorOwner>
{
    UIView *_contentView;
    UIView *_pivotView;
    UIView *_cropView;
    UIView *_referenceView;
    _Bool _relinquishCalled;
    GADObserverCollection *_observers;
    NSMutableArray *_monitors;
    GADEventContext *_context;
    _Bool _willDismissAfterOrientationChange;
    GADCloseButton *_closeButton;
    GADMRAIDResizeProperties *_resizeProperties;
}

@property(retain, nonatomic) GADMRAIDResizeProperties *resizeProperties; // @synthesize resizeProperties=_resizeProperties;
@property(readonly, nonatomic) _Bool willDismissAfterOrientationChange; // @synthesize willDismissAfterOrientationChange=_willDismissAfterOrientationChange;
@property(readonly, nonatomic) GADCloseButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)handleOrientationChangeEvent;
- (void)didChangeToOrientation:(long long)arg1;
- (void)repositionContentIfNeeded;
- (struct CGRect)contentFrame;
- (void)animateTransparentInterstitialPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)composeTransparentInterstitialViewsForPresentation;
- (struct CGRect)cropViewFrameForOrientation:(long long)arg1;
@property(readonly, nonatomic) __weak GADWindowScene *windowScene;
- (void)relinquishScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldDismissOnApplicationEnteringForeground;
- (_Bool)canPresentFromViewController:(id)arg1;
- (void)addMonitor:(id)arg1;
- (void)closeButtonPressed:(id)arg1;
@property(readonly, nonatomic) GADEventContext *context;
- (id)init;
- (id)initWithContentView:(id)arg1 resizeProperties:(id)arg2 referenceView:(id)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

