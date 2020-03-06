//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HsPushHandler : NSObject
{
    NSArray *_interactivePushActions;
}

+ (void)registerForRichPush;
+ (void)registerActionsForInteractivePushNotifications:(id)arg1;
+ (void)handleInteractiveLocalNotification:(id)arg1 forAction:(id)arg2;
+ (void)handleInteractiveRemoteNotification:(id)arg1 forAction:(id)arg2;
+ (_Bool)handleLocalNotificationWithUserInfoDictionary:(id)arg1 withViewController:(id)arg2;
+ (_Bool)handleRemoteNotification:(id)arg1 withViewController:(id)arg2;
+ (void)convertNotificationToAction:(id)arg1 onViewController:(id)arg2;
+ (void)executeAction:(long long)arg1 withData:(id)arg2 forCampaignId:(id)arg3 onViewController:(id)arg4;
+ (_Bool)isApplicationActive;
+ (void)executeAction:(long long)arg1 withData:(id)arg2 forCampaignId:(id)arg3;
+ (void)addLocalNotificationForNotification:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *interactivePushActions; // @synthesize interactivePushActions=_interactivePushActions;
- (void).cxx_destruct;

@end

