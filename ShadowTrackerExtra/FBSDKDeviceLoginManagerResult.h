//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDKAccessToken;

@interface FBSDKDeviceLoginManagerResult : NSObject
{
    _Bool _cancelled;
    FBSDKAccessToken *_accessToken;
}

@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) FBSDKAccessToken *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (id)initWithToken:(id)arg1 isCancelled:(_Bool)arg2;

@end

