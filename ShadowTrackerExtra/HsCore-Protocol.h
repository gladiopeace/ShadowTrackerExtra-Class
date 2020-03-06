//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HSConversation, HSLoadingViewModel, HSPollerController, HSSDKDataDM, HSUserManagerDM, HelpshiftAPIConfig, HelpshiftInstallConfig, HelpshiftUser, HsAnalyticsDM, HsConversationInboxDM, HsConversationInboxManagerDM, HsConversationalVM, HsDomain, HsFAQsDM, HsLocalizationDM, HsMetaDataDM, HsNewConversationVM, HsSDKConfigurationDM, NSNumber, NSString;
@protocol HSLoadingRenderer, HsConversationalRenderer, HsNewConversationRenderer;

@protocol HsCore <NSObject>
- (HSPollerController *)conversationPollerController;
- (HSLoadingViewModel *)loadingViewModelWithRenderer:(id <HSLoadingRenderer>)arg1;
- (void)sendRequestIdsForSuccessfulApiCalls;
- (long long)unseenMessageCountSync;
- (void)unseenMessageCountWithHandler:(void (^)(unsigned long long, NSError *))arg1 shouldFetch:(_Bool)arg2;
- (void)triggerForegroundEvent;
- (void)sendAnalyticsEvents;
- (HsLocalizationDM *)localizationDM;
- (HsAnalyticsDM *)analyticsDM;
- (HSSDKDataDM *)sdkDataDM;
- (HsFAQsDM *)faqsDM;
- (HSConversation *)fetchActiveConversationOrPreConversation;
- (HSConversation *)fetchActiveConversation;
- (HsConversationInboxManagerDM *)conversationInboxManagerDM;
- (HsConversationInboxDM *)conversationInboxDM;
- (HsSDKConfigurationDM *)sdkConfigDM;
- (HsMetaDataDM *)metaDataDM;
- (HSUserManagerDM *)userManagerDM;
- (void)updateApiConfig:(HelpshiftAPIConfig *)arg1;
- (void)updateInstallConfig:(HelpshiftInstallConfig *)arg1;
- (void)fetchServerConfig;
- (void)setPushToken:(NSString *)arg1;
- (_Bool)clearAnonymousUser;
- (_Bool)logout;
- (HsConversationalVM *)conversationalViewModelWithRenderer:(id <HsConversationalRenderer>)arg1 conversationHistory:(_Bool)arg2 conversationLocalId:(NSNumber *)arg3 withError:(id *)arg4;
- (void)setName:(NSString *)arg1 andEmail:(NSString *)arg2;
- (_Bool)login:(HelpshiftUser *)arg1;
- (HsNewConversationVM *)newConversationViewModel:(id <HsNewConversationRenderer>)arg1;
- (HsDomain *)domain;
@end

