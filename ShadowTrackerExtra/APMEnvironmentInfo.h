//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface APMEnvironmentInfo : NSObject
{
    NSString *_deviceModel;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) int timeZoneOffsetMinutes;
@property(readonly, nonatomic) NSString *userDefaultLanguage;
@property(readonly, nonatomic) NSString *deviceOSVersion;
@property(readonly, nonatomic) NSString *deviceModel;

@end

