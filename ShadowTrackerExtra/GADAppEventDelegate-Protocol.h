//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADBannerView, GADInterstitial, NSString;

@protocol GADAppEventDelegate <NSObject>

@optional
- (void)interstitial:(GADInterstitial *)arg1 didReceiveAppEvent:(NSString *)arg2 withInfo:(NSString *)arg3;
- (void)adView:(GADBannerView *)arg1 didReceiveAppEvent:(NSString *)arg2 withInfo:(NSString *)arg3;
@end

