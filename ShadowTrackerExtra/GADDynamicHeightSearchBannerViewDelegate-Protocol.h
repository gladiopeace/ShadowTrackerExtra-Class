//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADDynamicHeightSearchBannerView, NSError, NSURL;

@protocol GADDynamicHeightSearchBannerViewDelegate <NSObject>
- (void)bannerView:(GADDynamicHeightSearchBannerView *)arg1 didReceiveLandingPageURL:(NSURL *)arg2;
- (void)bannerView:(GADDynamicHeightSearchBannerView *)arg1 didFailToReceiveAdWithError:(NSError *)arg2;
- (void)bannerView:(GADDynamicHeightSearchBannerView *)arg1 didUpdateDesiredContentSize:(struct CGSize)arg2;
- (void)bannerViewDidReceiveAd:(GADDynamicHeightSearchBannerView *)arg1;
@end

