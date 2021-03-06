//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HsViewableConversation.h"

@class NSMutableArray;

@interface HsConversationHistoryDM : HsViewableConversation
{
    NSMutableArray *_loadedConversations;
}

@property(retain) NSMutableArray *loadedConversations; // @synthesize loadedConversations=_loadedConversations;
- (void).cxx_destruct;
- (void)onNewConversationStarted:(id)arg1;
- (_Bool)hasOlderMessages;
- (unsigned long long)type;
- (_Bool)shouldOpen;
- (void)prependConversations:(id)arg1;
- (id)filterConversationsToPrepend:(id)arg1;
- (id)conversations;
- (void)initializeConversationsForUI;
- (id)identifier;
- (id)activeConversation;
- (void)refetchConversationFromDB;
- (id)initWithPlatform:(id)arg1 domain:(id)arg2 liveUpdateDM:(id)arg3 conversationLoader:(id)arg4 conversationManager:(id)arg5 user:(id)arg6;

@end

