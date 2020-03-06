//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GADEventContextSource-Protocol.h"
#import "GADNativeAdViewOverlayProtocol-Protocol.h"

@class GADAdChoicesView, GADEventContext, GADMediaView, GADNativeAssetViewTracker, GADOverlayView, GADUnifiedNativeAd, NSArray, NSString;

@interface GADUnifiedNativeAdView : UIView <GADNativeAdViewOverlayProtocol, GADEventContextSource>
{
    GADUnifiedNativeAd *_nativeAd;
    GADOverlayView *_overlayView;
    GADNativeAssetViewTracker *_assetViewTracker;
    NSArray *_constraints;
    GADEventContext *_context;
    UIView *_headlineView;
    UIView *_callToActionView;
    UIView *_iconView;
    UIView *_bodyView;
    UIView *_storeView;
    UIView *_priceView;
    UIView *_imageView;
    UIView *_starRatingView;
    UIView *_advertiserView;
    GADMediaView *_mediaView;
    GADAdChoicesView *_adChoicesView;
}

@property(nonatomic) __weak GADAdChoicesView *adChoicesView; // @synthesize adChoicesView=_adChoicesView;
@property(nonatomic) __weak GADMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(nonatomic) __weak UIView *advertiserView; // @synthesize advertiserView=_advertiserView;
@property(nonatomic) __weak UIView *starRatingView; // @synthesize starRatingView=_starRatingView;
@property(nonatomic) __weak UIView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UIView *priceView; // @synthesize priceView=_priceView;
@property(nonatomic) __weak UIView *storeView; // @synthesize storeView=_storeView;
@property(nonatomic) __weak UIView *bodyView; // @synthesize bodyView=_bodyView;
@property(nonatomic) __weak UIView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak UIView *callToActionView; // @synthesize callToActionView=_callToActionView;
@property(nonatomic) __weak UIView *headlineView; // @synthesize headlineView=_headlineView;
@property(readonly, nonatomic) GADEventContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)setOverlayView:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)orderViews;
- (void)updateAdChoicesView;
- (void)updateMediaView;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
@property(retain, nonatomic) GADUnifiedNativeAd *nativeAd;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

