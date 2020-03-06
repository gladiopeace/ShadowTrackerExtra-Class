//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GADNativeAdFeatures : NSObject
{
    _Bool _publisherClickReportingAllowed;
    _Bool _publisherTouchReportingAllowed;
    _Bool _publisherImpressionReportingAllowed;
    _Bool _publisherRenderAdChoicesAllowed;
    _Bool _publisherOwnedAdViewAllowed;
    _Bool _customOnePointFiveClickWhitelisted;
    _Bool _customClickGestureAllowed;
}

@property(readonly, nonatomic) _Bool customClickGestureAllowed; // @synthesize customClickGestureAllowed=_customClickGestureAllowed;
@property(readonly, nonatomic) _Bool customOnePointFiveClickWhitelisted; // @synthesize customOnePointFiveClickWhitelisted=_customOnePointFiveClickWhitelisted;
@property(readonly, nonatomic) _Bool publisherOwnedAdViewAllowed; // @synthesize publisherOwnedAdViewAllowed=_publisherOwnedAdViewAllowed;
@property(readonly, nonatomic) _Bool publisherRenderAdChoicesAllowed; // @synthesize publisherRenderAdChoicesAllowed=_publisherRenderAdChoicesAllowed;
@property(readonly, nonatomic) _Bool publisherImpressionReportingAllowed; // @synthesize publisherImpressionReportingAllowed=_publisherImpressionReportingAllowed;
@property(readonly, nonatomic) _Bool publisherTouchReportingAllowed; // @synthesize publisherTouchReportingAllowed=_publisherTouchReportingAllowed;
@property(readonly, nonatomic) _Bool publisherClickReportingAllowed; // @synthesize publisherClickReportingAllowed=_publisherClickReportingAllowed;
- (id)initWithAdConfiguration:(id)arg1;

@end

