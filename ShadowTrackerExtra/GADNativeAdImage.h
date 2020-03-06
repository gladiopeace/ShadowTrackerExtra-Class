//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, UIImage;

@interface GADNativeAdImage : NSObject
{
    UIImage *_image;
    NSURL *_imageURL;
    double _scale;
    double _aspectRatio;
}

@property(readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithURL:(id)arg1 scale:(double)arg2;
- (id)initWithImage:(id)arg1;

@end

