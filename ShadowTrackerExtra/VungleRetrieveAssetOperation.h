//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VungleGroupOperation.h"

@class NSError, NSString, NSURL, VungleMRAIDAsset;

@interface VungleRetrieveAssetOperation : VungleGroupOperation
{
    _Bool _isLocalAsset;
    _Bool _didVerifyLocalAsset;
    VungleMRAIDAsset *_asset;
    NSString *_campaignName;
    NSURL *_assetURL;
    NSError *_assetVerificationError;
}

+ (id)loadRemoteAsset:(id)arg1 networkManager:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) NSError *assetVerificationError; // @synthesize assetVerificationError=_assetVerificationError;
@property(nonatomic) _Bool didVerifyLocalAsset; // @synthesize didVerifyLocalAsset=_didVerifyLocalAsset;
@property(nonatomic) _Bool isLocalAsset; // @synthesize isLocalAsset=_isLocalAsset;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain, nonatomic) NSString *campaignName; // @synthesize campaignName=_campaignName;
@property(retain, nonatomic) VungleMRAIDAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)description;
- (void)execute;
- (id)initWithVungleMRAIDAsset:(id)arg1 networkManager:(id)arg2;

@end

