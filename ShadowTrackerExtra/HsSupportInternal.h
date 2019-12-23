//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HsSupportInternal : NSObject
{
}

+ (_Bool)isInAppNotificationPaused;
+ (long long)getMaxUnreadMessageCountForCurrentActiveIssue;
+ (_Bool)canDisplayInAppBannerAfterInAppNotificationResumes;
+ (_Bool)didReceiveNotificationWhenInAppNotificationWasPaused;
+ (void)notifyfetchConversationUpdatesListeners;
+ (id)getActiveConversationInfo;
+ (id)dictFromConversationInfo:(id)arg1;
+ (id)conversationInfoFromDict:(id)arg1;
+ (void)registerDeviceToken:(id)arg1;
+ (void)removeLocalNotificationsForIssue:(id)arg1;
+ (void)addLocalNotification:(id)arg1 forIssueInfo:(id)arg2;
+ (void)remoteNotificationRecievedInForeground:(id)arg1;
+ (void)processRemoteNotificationsForInfo:(id)arg1;
+ (void)displayInAppNotification:(id)arg1 fromPoller:(_Bool)arg2;
+ (void)addRemoteNotification:(id)arg1 forIssue:(id)arg2;
+ (long long)getRemoteNotificationCountForConversationInfo:(id)arg1;
+ (void)pauseDisplayOfInAppNotification:(_Bool)arg1;
+ (id)flowToPerformCustomActionOnTarget:(id)arg1 andSelector:(SEL)arg2 withObject:(id)arg3 withDisplayText:(id)arg4;
+ (id)flowToShowNextDynamicFormWithFlows:(id)arg1 withDisplayText:(id)arg2;
+ (id)flowToShowSingleFAQForPublishId:(id)arg1 withDisplayText:(id)arg2 andConfig:(id)arg3;
+ (id)flowToShowFAQSectionForPublishId:(id)arg1 withDisplayText:(id)arg2 andConfig:(id)arg3;
+ (id)flowToShowFAQsWithDisplayText:(id)arg1 andConfig:(id)arg2;
+ (id)flowToShowConversationWithDisplayText:(id)arg1 andConfig:(id)arg2;
+ (void)handleEnterBackgroundNotification;
+ (void)handleEnterForegroundNotification;
+ (void)setMetadataObjectBlock:(CDUnknownBlockType)arg1;
+ (void)setMetadataBlock:(CDUnknownBlockType)arg1;
+ (_Bool)doesActiveConversationExist;
+ (void)checkIfActiveConversationExists;
+ (_Bool)clearAnonymousUser;
+ (_Bool)logout;
+ (_Bool)login:(id)arg1;
+ (void)leaveBreadCrumb:(id)arg1;
+ (void)setUserIdentifier:(id)arg1;
+ (void)setName:(id)arg1 andEmail:(id)arg2;
+ (void)installWithApiKey:(id)arg1 domainName:(id)arg2 appID:(id)arg3;
+ (void)installWithApiKey:(id)arg1 domainName:(id)arg2 appID:(id)arg3 withOptions:(id)arg4;
+ (id)sharedInstance;
- (void)showChatOnNotificationForConversationInfo:(id)arg1 withController:(id)arg2;
- (id)userLocalIdForConversationInfo:(id)arg1;
- (id)conversationForConversationInfo:(id)arg1;
- (void)handleLocalNotificationWithUserInfoDictionary:(id)arg1 withController:(id)arg2;
- (void)showDelayedChatInHandleRemoteNotification:(id)arg1;
- (void)handleRemoteNotification:(id)arg1 isAppLaunch:(_Bool)arg2 withController:(id)arg3;
- (_Bool)hasRegisteredForPush;
- (_Bool)isShowingNotification;
- (_Bool)checkNotificationStatus;
- (void)processApiCallWithConfigObject:(id)arg1 isUiDecomposed:(_Bool)arg2;
- (id)dynamicFormViewControllerWithTitle:(id)arg1 andFlows:(id)arg2;
- (void)requestDynamicFormWithTitle:(id)arg1 andFlows:(id)arg2;
- (id)dynamicFormWithTitle:(id)arg1 andFlows:(id)arg2;
- (void)pushDynamicForm:(id)arg1 onViewController:(id)arg2;
- (void)showDynamicForm:(id)arg1 onViewController:(id)arg2 withConfig:(id)arg3;
- (void)launchSingleFAQwithViewController:(id)arg1 andSingleFAQPublishId:(id)arg2;
- (id)singleFAQViewControllerWithPublishId:(id)arg1;
- (void)launchFAQSectionWithViewController:(id)arg1 andFAQSectionPublishId:(id)arg2;
- (id)faqListViewControllerWithPublishId:(id)arg1;
- (void)launchFAQsWithViewController:(id)arg1;
- (id)sectionListViewController;
- (void)launchConversation:(id)arg1 withViewController:(id)arg2;
- (id)conversationViewContollerWithConversation:(id)arg1;
- (void)launchConversationWithViewController:(id)arg1;
- (id)startingViewControllerForConversationFlow;
- (void)processFAQFlowConfig:(id)arg1 isUiDecomposed:(_Bool)arg2;
- (void)conversationFlowPreProcessWithConfig:(id)arg1;
- (id)singleFAQViewWithPublishId:(id)arg1 withConfig:(id)arg2;
- (id)FAQSectionViewWithPublishId:(id)arg1 withConfig:(id)arg2;
- (id)FAQsViewWithConfig:(id)arg1;
- (id)conversationViewWithConfig:(id)arg1;
- (long long)unreadMessagesCount:(_Bool)arg1 returnExpected:(_Bool)arg2;
- (void)requestUnreadMessagesCount:(_Bool)arg1;
- (long long)getUnreadMessagesCount:(_Bool)arg1;
- (void)closeHelpshiftSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeHelpshiftSession;
- (void)setLightTheme:(id)arg1 darkTheme:(id)arg2;
- (void)setTheme:(id)arg1;
- (_Bool)setSDKLanguage:(id)arg1;
- (void)addUserDebugLog:(id)arg1;
- (void)showSingleFAQWithPublishId:(id)arg1 viewController:(id)arg2 withConfig:(id)arg3;
- (void)showFAQSectionWithPublishId:(id)arg1 viewController:(id)arg2 withConfig:(id)arg3;
- (void)showFAQs:(id)arg1 withOptions:(id)arg2;
- (id)conversationViewControllerWithConfig:(id)arg1;
- (void)showConversation:(id)arg1 withOptions:(id)arg2;
- (void)setThemeForViewController:(id)arg1;
- (void)clearBreadCrumbs;

@end
