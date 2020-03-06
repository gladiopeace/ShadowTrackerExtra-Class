//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString;
@protocol HsPlatform;

@protocol HSSDKDataDAO <NSObject>
- (NSString *)websocketConfigJsonWithError:(id *)arg1;
- (void)saveWebsocketConfigJson:(NSString *)arg1 withError:(id *)arg2;
- (void)savePushToken:(NSString *)arg1 withError:(id *)arg2;
- (NSString *)pushTokenWithError:(id *)arg1;
- (id)getObjectForKey:(NSString *)arg1 withError:(id *)arg2;
- (void)saveObject:(id)arg1 forKey:(NSString *)arg2 withError:(id *)arg3;
- (int)getFaqOptionForDeviceSearchWithError:(id *)arg1;
- (void)setFaqOptionForDeviceSearch:(int)arg1 withError:(id *)arg2;
- (NSString *)searchIndexFileNameWithError:(id *)arg1;
- (void)setSearchIndexFileName:(NSString *)arg1 withError:(id *)arg2;
- (void)removePauseInAppInfoWithError:(id *)arg1;
- (NSDictionary *)getPauseInAppInfoWithError:(id *)arg1;
- (void)setPauseInAppInfo:(NSDictionary *)arg1 withError:(id *)arg2;
- (NSArray *)getReadFAQsForServerId:(NSString *)arg1 withError:(id *)arg2;
- (void)setReadFAQs:(NSArray *)arg1 forServerId:(NSString *)arg2 withError:(id *)arg3;
- (void)removeLocalNotificationsForIssue:(NSString *)arg1 WithError:(id *)arg2;
- (NSMutableArray *)getLocalNotificationsForIssue:(NSString *)arg1 WithError:(id *)arg2;
- (void)setLocalNotifications:(NSMutableArray *)arg1 forIssue:(NSString *)arg2 withError:(id *)arg3;
- (long long)getNotificationCountForIssue:(NSString *)arg1 withDefaultValue:(long long)arg2 withError:(id *)arg3;
- (void)setNotificationCount:(long long)arg1 forIssue:(NSString *)arg2 withError:(id *)arg3;
- (_Bool)isInAppNotificationPausedWithError:(id *)arg1;
- (void)setInAppNotificationPaused:(_Bool)arg1 withError:(id *)arg2;
- (void)saveUserIdentifier:(NSString *)arg1 withError:(id *)arg2;
- (NSString *)userIdentifierWithError:(id *)arg1;
- (NSDictionary *)etagsWithError:(id *)arg1;
- (void)storeEtags:(NSDictionary *)arg1 withError:(id *)arg2;
- (double)serverTimeDeltaWithError:(id *)arg1;
- (void)storeServerTimeDelta:(double)arg1 withError:(id *)arg2;
- (void)saveSDKVersion:(NSString *)arg1 withError:(id *)arg2;
- (NSString *)savedSDKVersionWithError:(id *)arg1;
- (id)initWithPlatform:(id <HsPlatform>)arg1 withError:(id *)arg2;
@end

