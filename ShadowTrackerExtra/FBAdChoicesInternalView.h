//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdUpdatableView-Protocol.h"

@class FBAdChoicesView, FBAdImage, FBAdReportingCoordinator, FBNativeAdBase, FBNativeAdDataModel, FBNativeAdViewAttributes, NSString, NSURL, UIImageView, UILabel, UIViewController;

@interface FBAdChoicesInternalView : UIView <FBAdUpdatableView>
{
    _Bool _expandable;
    _Bool _animating;
    _Bool _extended;
    FBAdImage *_adChoicesIcon;
    UILabel *_label;
    UIViewController *_rootViewController;
    FBAdChoicesView *_ownerView;
    FBNativeAdBase *_nativeAd;
    FBNativeAdViewAttributes *_attributes;
    UIImageView *_iconImageView;
    NSURL *_adChoicesLinkURL;
    NSString *_adChoicesText;
    NSString *_inlineClientToken;
    FBAdReportingCoordinator *_reportingCoordinator;
    FBNativeAdDataModel *_dataModel;
}

+ (void)initialize;
@property(retain, nonatomic) FBNativeAdDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) FBAdReportingCoordinator *reportingCoordinator; // @synthesize reportingCoordinator=_reportingCoordinator;
@property(nonatomic, getter=isExtended) _Bool extended; // @synthesize extended=_extended;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(readonly, copy, nonatomic) NSString *inlineClientToken; // @synthesize inlineClientToken=_inlineClientToken;
@property(readonly, copy, nonatomic) NSString *adChoicesText; // @synthesize adChoicesText=_adChoicesText;
@property(readonly, copy, nonatomic) NSURL *adChoicesLinkURL; // @synthesize adChoicesLinkURL=_adChoicesLinkURL;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak FBNativeAdViewAttributes *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) FBNativeAdBase *nativeAd; // @synthesize nativeAd=_nativeAd;
@property(nonatomic) __weak FBAdChoicesView *ownerView; // @synthesize ownerView=_ownerView;
@property(nonatomic, getter=isExpandable) _Bool expandable; // @synthesize expandable=_expandable;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) __weak FBAdImage *adChoicesIcon; // @synthesize adChoicesIcon=_adChoicesIcon;
- (void).cxx_destruct;
- (_Bool)isRightCorner:(unsigned long long)arg1;
- (double)relativeWidthForAdSize:(struct CGSize)arg1 forCorner:(unsigned long long)arg2;
- (double)relativeHeightForAdSize:(struct CGSize)arg1 forCorner:(unsigned long long)arg2;
@property(readonly, nonatomic) double extensionAmount;
- (_Bool)isAdChoicesIconAvailable;
- (unsigned long long)maskCornerForCurrentState;
- (void)updateMask;
- (void)updateUI;
- (struct CGRect)labelFrame;
- (id)generateLabel;
- (void)extend:(_Bool)arg1 animate:(_Bool)arg2 persistChanges:(_Bool)arg3;
- (void)iconImageTapped:(id)arg1;
- (void)updateView:(_Bool)arg1;
- (void)updateAdChoicesInfoFromNativeAd:(id)arg1;
- (void)updateViewsWithViewController:(id)arg1 inlineClientToken:(id)arg2 adChoicesIcon:(id)arg3 adChoicesLinkURL:(id)arg4 adChoicesText:(id)arg5 attributes:(id)arg6 expandable:(_Bool)arg7 initialized:(_Bool)arg8;
- (void)updateViewsFromNativeAd:(id)arg1;
- (id)initWithViewController:(id)arg1 inlineClientToken:(id)arg2 adChoicesIcon:(id)arg3 adChoicesLinkURL:(id)arg4 adChoicesText:(id)arg5 attributes:(id)arg6 expandable:(_Bool)arg7;
- (id)initWithNativeAd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

