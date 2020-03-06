//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBNativeAdBase.h"

#import "FBAdViewabilityValidatorDelegate-Protocol.h"
#import "FBNativeAdBaseDelegate-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBAdViewabilityValidator, FBMediaView, NSString, UIImage, UIImageView;
@protocol FBNativeBannerAdDelegate;

@interface FBNativeBannerAd : FBNativeAdBase <FBAdViewabilityValidatorDelegate, NSCopying, FBNativeAdBaseDelegate>
{
    id <FBNativeBannerAdDelegate> _delegate;
    FBMediaView *_iconView;
    UIImageView *_iconImageView;
    FBAdViewabilityValidator *_viewabilityValidator;
    UIImage *_iconImage;
}

+ (id)fakeNativeBannerAd;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) FBAdViewabilityValidator *viewabilityValidator; // @synthesize viewabilityValidator=_viewabilityValidator;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak FBMediaView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <FBNativeBannerAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)nativeAdBaseDidFinishHandling:(id)arg1;
- (void)nativeAdBaseDidClick:(id)arg1;
- (void)nativeAdBase:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeAdBaseWillLogImpression:(id)arg1;
- (void)nativeAdBaseDidDownloadMedia:(id)arg1;
- (void)nativeAdBaseDidLoad:(id)arg1;
- (id)generateLoggingData;
- (void)downloadMedia;
- (void)tellDelegateIconViewIsNotSet;
- (void)registerViewForInteraction:(id)arg1 iconImageView:(id)arg2 viewController:(id)arg3 clickableViews:(id)arg4;
- (void)registerViewForInteraction:(id)arg1 iconImageView:(id)arg2 viewController:(id)arg3;
- (void)registerViewForInteraction:(id)arg1 iconView:(id)arg2 viewController:(id)arg3 clickableViews:(id)arg4;
- (void)registerViewForInteraction:(id)arg1 iconView:(id)arg2 viewController:(id)arg3;
- (id)initWithPlacementID:(id)arg1;
- (id)init;
- (void)dealloc;
- (_Bool)iconImageViewContainsValidImage;
- (void)setupViewabilityValidator;
- (_Bool)viewabilityValidator:(id)arg1 checkedWithStatus:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPlacementID:(id)arg1 adProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

