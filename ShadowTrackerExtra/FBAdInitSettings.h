//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FBAdInitSettings : NSObject
{
    NSArray *_placementIDs;
    NSString *_mediationService;
    NSString *_mediation;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *mediation; // @synthesize mediation=_mediation;
@property(readonly, copy, nonatomic) NSString *mediationService; // @synthesize mediationService=_mediationService;
@property(copy, nonatomic) NSArray *placementIDs; // @synthesize placementIDs=_placementIDs;
- (void).cxx_destruct;
- (id)initWithPlacementIDs:(id)arg1 mediationService:(id)arg2;

@end
