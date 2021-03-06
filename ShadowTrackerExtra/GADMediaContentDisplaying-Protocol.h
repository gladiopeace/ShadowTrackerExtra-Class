//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADNativeAdImage, UIView;
@protocol GADVideoControlling;

@protocol GADMediaContentDisplaying <NSObject>
@property(retain, nonatomic) GADNativeAdImage *mainImage;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) id <GADVideoControlling> videoController;
@property(readonly, nonatomic) UIView *mediaView;
@end

