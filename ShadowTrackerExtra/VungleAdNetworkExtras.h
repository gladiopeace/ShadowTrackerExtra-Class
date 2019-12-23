//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADAdNetworkExtras.h"

@class NSArray, NSString;

@interface VungleAdNetworkExtras : NSObject <GADAdNetworkExtras>
{
    _Bool _muted;
    NSString *_userId;
    unsigned long long _ordinal;
    double _flexViewAutoDismissSeconds;
    NSArray *_allPlacements;
    NSString *_playingPlacement;
}

@property(copy, nonatomic) NSString *playingPlacement; // @synthesize playingPlacement=_playingPlacement;
@property(copy, nonatomic) NSArray *allPlacements; // @synthesize allPlacements=_allPlacements;
@property(nonatomic) double flexViewAutoDismissSeconds; // @synthesize flexViewAutoDismissSeconds=_flexViewAutoDismissSeconds;
@property(nonatomic) unsigned long long ordinal; // @synthesize ordinal=_ordinal;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
