//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, VLImageView;

@interface VLImageScalableView : UIScrollView <UIScrollViewDelegate>
{
    VLImageView *_imageView;
}

@property(retain, nonatomic) VLImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)imageViewDoubleTap;
- (void)makeConstaints;
- (void)setUpViews;
- (void)resizeImageView:(id)arg1;
- (void)configWithImageUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
