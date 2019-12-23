//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMediaViewVideoRenderer.h"

@class FBAdBlurredOverlayView;

@interface FBAdVideoRendererView : FBMediaViewVideoRenderer
{
    id <FBAdVideoRendererViewDelegate> _delegate;
    FBAdBlurredOverlayView *_blurredBackgroundView;
}

@property(nonatomic) __weak FBAdBlurredOverlayView *blurredBackgroundView; // @synthesize blurredBackgroundView=_blurredBackgroundView;
@property(nonatomic) __weak id <FBAdVideoRendererViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoDidFailWithError:(id)arg1;
- (void)videoDidEnd;
- (void)videoDidDisengageSeek;
- (void)videoDidSeek;
- (void)videoDidEngageSeek;
- (void)videoDidPlay;
- (void)videoDidPause;
- (void)videoDidLoad;
- (void)layoutSubviews;
- (void)videoDidChangeVolume;
- (void)setBlurredBackgroundViewWithImage:(id)arg1;
- (id)initWithBackgroundImage:(id)arg1;
- (id)init;
- (void)setupDefaultBackground;

@end
