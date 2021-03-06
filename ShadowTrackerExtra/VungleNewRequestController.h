//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults, VungleNetworkManager;

@interface VungleNewRequestController : NSObject
{
    VungleNetworkManager *_networkManager;
    NSUserDefaults *_userDefaults;
}

@property(nonatomic) __weak NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(nonatomic) __weak VungleNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
- (void).cxx_destruct;
- (void)handleNewRequestComplete:(id)arg1;
- (void)sendNewRequestWithURL:(id)arg1 publisherInformation:(id)arg2;
- (void)sendNewRequest:(CDUnknownBlockType)arg1;
- (id)initWithNetworkManager:(id)arg1 userDefaults:(id)arg2;

@end

