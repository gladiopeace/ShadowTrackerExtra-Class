//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GADAdLoaderOptions.h"

@protocol GADDelayedAdRenderingDelegate;

@interface GADDelayedAdRenderingOptions : GADAdLoaderOptions
{
    id <GADDelayedAdRenderingDelegate> _delegate;
}

@property(nonatomic) __weak id <GADDelayedAdRenderingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)requestParameters;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

