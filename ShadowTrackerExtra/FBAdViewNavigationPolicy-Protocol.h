//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdDataModel, NSDictionary, NSURL;

@protocol FBAdViewNavigationPolicy <NSObject>
@property(nonatomic, getter=isMarkupImpressionEventReceived) _Bool markupImpressionEventReceived;
@property(nonatomic, getter=isModalViewPresenting) _Bool modalViewPresenting;
- (_Bool)processRequestURL:(NSURL *)arg1 adDataModel:(FBAdDataModel *)arg2 withExtraData:(NSDictionary *)arg3;

@optional
- (void)ensureViewabilityValidation;
@end

