//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GADNativeAd.h"

@class GADNativeAdImage, GADVideoController, NSArray, NSDecimalNumber, NSString;

@interface GADNativeAppInstallAd : GADNativeAd
{
    GADVideoController *_videoController;
}

- (void).cxx_destruct;
- (void)unregisterAdView;
- (void)updateMediaView:(id)arg1;
- (void)updateAdChoicesView:(id)arg1;
- (void)registerAdView:(id)arg1 clickableAssetViews:(id)arg2 nonclickableAssetViews:(id)arg3;
- (void)registerAdView:(id)arg1 assetViews:(id)arg2;
- (id)adType;
@property(readonly, nonatomic) GADVideoController *videoController;
@property(readonly, nonatomic) NSDecimalNumber *starRating;
@property(readonly, nonatomic) NSArray *images;
@property(readonly, nonatomic) NSString *price;
@property(readonly, nonatomic) NSString *store;
@property(readonly, nonatomic) NSString *body;
@property(readonly, nonatomic) GADNativeAdImage *icon;
@property(readonly, nonatomic) NSString *callToAction;
@property(readonly, nonatomic) NSString *headline;

@end

