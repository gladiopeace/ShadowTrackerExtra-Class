//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBAdOptionsView, GADFBNetworkExtras;
@protocol GADMAdNetworkAdapter, GADMAdNetworkConnector;

@interface GADFBNativeAdBase : NSObject
{
    id <GADMAdNetworkConnector> _connector;
    id <GADMAdNetworkAdapter> _adapter;
    GADFBNetworkExtras *_extras;
    FBAdOptionsView *_adOptionsView;
}

@property(readonly, nonatomic) FBAdOptionsView *adOptionsView; // @synthesize adOptionsView=_adOptionsView;
- (void).cxx_destruct;
- (void)loadAdOptionsView;
- (id)icon;
- (id)images;
- (id)price;
- (id)store;
- (id)starRating;
- (id)adChoicesView;
- (id)initWithGADMAdNetworkConnector:(id)arg1 adapter:(id)arg2;

@end

