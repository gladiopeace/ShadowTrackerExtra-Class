//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdDisplayable-Protocol.h"
#import "FBAdDisplayableViewDelegate-Protocol.h"
#import "FBAdReportingCoordinatorDelegate-Protocol.h"
#import "FBInterstitialAdToolbarViewDelegate-Protocol.h"

@class FBAdReportingCoordinator, FBInterstitialAdToolbarView, FBNativeAdDataModel, NSString;
@protocol FBAdDisplayable, FBInterstitialAdNativeViewDelegate;

@interface FBInterstitialAdNativeView : UIView <FBAdDisplayableViewDelegate, FBInterstitialAdToolbarViewDelegate, FBAdReportingCoordinatorDelegate, FBAdDisplayable>
{
    id <FBInterstitialAdNativeViewDelegate> _delegate;
    FBNativeAdDataModel *_dataModel;
    FBInterstitialAdToolbarView *_toolbarView;
    UIView<FBAdDisplayable> *_adContentView;
    FBAdReportingCoordinator *_reportingCoordinator;
}

@property(retain, nonatomic) FBAdReportingCoordinator *reportingCoordinator; // @synthesize reportingCoordinator=_reportingCoordinator;
@property(nonatomic) __weak UIView<FBAdDisplayable> *adContentView; // @synthesize adContentView=_adContentView;
@property(nonatomic) __weak FBInterstitialAdToolbarView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(readonly, nonatomic) FBNativeAdDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak id <FBInterstitialAdNativeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)adReportingCoordinatorDidCloseWhyAmISeeingThis:(id)arg1;
- (void)adReportingCoordinatorDidCancelFlow:(id)arg1;
- (void)adReportingCoordinatorDidCompleteFlow:(id)arg1 reason:(id)arg2 flowType:(long long)arg3;
- (void)interstitialAdToolbarDidTapAdInfo:(id)arg1;
- (void)interstitialAdToolbarDidCloseAdChoices:(id)arg1;
- (void)interstitialAdToolbarDidTapAdChoices:(id)arg1;
- (void)interstitialAdToolbarDidClose:(id)arg1 withTouchData:(id)arg2;
- (id)interstitialAdToolbarRootViewControllerForAdChoicesPresentation:(id)arg1;
- (void)adDisplayableView:(id)arg1 didFailWithError:(id)arg2;
- (void)adDisplayableViewDidEnd:(id)arg1;
- (void)adDisplayableViewDidProgress:(id)arg1;
- (void)adDisplayableViewDidInteract:(id)arg1 withTouchData:(id)arg2 touchType:(id)arg3 withCommand:(id)arg4 skipAppStore:(_Bool)arg5 withPageNumber:(id)arg6 withPageTotal:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)adDisplayableViewDidClick:(id)arg1 withEvent:(id)arg2 withCommand:(id)arg3 skipAppStore:(_Bool)arg4 withPageNumber:(id)arg5 withPageTotal:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)adDisplayableViewDidClick:(id)arg1 withEvent:(id)arg2 withCommand:(id)arg3 skipAppStore:(_Bool)arg4 withPageNumber:(id)arg5 withPageTotal:(id)arg6;
- (void)adDisplayableViewDidLogImpression:(id)arg1 withViewabilityValidator:(id)arg2 withPageNumber:(id)arg3 withPageTotal:(id)arg4;
- (void)adDisplayableViewDidLoad:(id)arg1;
- (void)configureVolume:(double)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime;
@property(nonatomic) _Bool canPlayVideo;
- (void)setPlaying:(_Bool)arg1 forced:(_Bool)arg2;
- (void)destroyAd;
- (void)showAd;
- (void)layoutSubviews;
- (_Bool)shouldShowWatchAndBrowse;
- (_Bool)shouldShowWatchAndInstall;
- (void)loadAdFromDataModel:(id)arg1 placementDefinition:(id)arg2;
- (void)loadAdFromDataModel:(id)arg1 placementDefinition:(id)arg2 carouselPageNumber:(id)arg3 totalPages:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

