//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdProviderResponseAds, NSError;

@protocol FBAdProviderDelegate <NSObject>
- (void)onAdRequestError:(NSError *)arg1;
- (void)onAdRequestSuccess:(FBAdProviderResponseAds *)arg1;
@end

