//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TWTRMoPubAdConfiguration;

@interface TWTRTableViewAdPlacer : NSObject
{
    id _adPlacer;
    TWTRMoPubAdConfiguration *_adConfig;
}

+ (void)initialize;
@property(readonly, nonatomic) TWTRMoPubAdConfiguration *adConfig; // @synthesize adConfig=_adConfig;
@property(readonly, nonatomic) id adPlacer; // @synthesize adPlacer=_adPlacer;
- (void).cxx_destruct;
- (void)loadAdUnitIfConfigured;
- (id)initWithTableView:(id)arg1 viewController:(id)arg2 adConfiguration:(id)arg3;

@end

