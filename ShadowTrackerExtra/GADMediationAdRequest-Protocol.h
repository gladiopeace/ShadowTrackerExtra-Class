//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;
@protocol GADAdNetworkExtras;

@protocol GADMediationAdRequest <NSObject>
- (NSDate *)userBirthday;
- (long long)userGender;
- (NSArray *)userKeywords;
- (NSString *)userLocationDescription;
- (double)userLocationAccuracyInMeters;
- (double)userLongitude;
- (double)userLatitude;
- (_Bool)userHasLocation;
- (NSNumber *)underAgeOfConsent;
- (NSString *)maxAdContentRating;
- (NSNumber *)childDirectedTreatment;
- (id <GADAdNetworkExtras>)networkExtras;
- (_Bool)testMode;
- (NSDictionary *)credentials;
- (NSString *)publisherId;
@end

