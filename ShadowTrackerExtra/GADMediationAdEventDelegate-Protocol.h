//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;

@protocol GADMediationAdEventDelegate <NSObject>
- (void)didDismissFullScreenView;
- (void)willDismissFullScreenView;
- (void)didFailToPresentWithError:(NSError *)arg1;
- (void)willPresentFullScreenView;
- (void)reportClick;
- (void)reportImpression;
@end

