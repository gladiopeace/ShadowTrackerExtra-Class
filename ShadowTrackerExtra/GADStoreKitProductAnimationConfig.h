//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GADAnimationConfig.h"

@class NSString;

@interface GADStoreKitProductAnimationConfig : GADAnimationConfig
{
    NSString *_productIdentifier;
    NSString *_dismissalNotificationRequestIdentifier;
}

@property(readonly, nonatomic) NSString *dismissalNotificationRequestIdentifier; // @synthesize dismissalNotificationRequestIdentifier=_dismissalNotificationRequestIdentifier;
@property(readonly, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

