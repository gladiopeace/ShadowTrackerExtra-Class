//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HSConversationManager, HsDomain;
@protocol HsPlatform;

@interface HsConversationMerger : NSObject
{
    id <HsPlatform> _platform;
    HsDomain *_domain;
    HSConversationManager *_conversationManager;
}

@property(retain, nonatomic) HSConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(retain) HsDomain *domain; // @synthesize domain=_domain;
@property(retain) id <HsPlatform> platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (void)persistConversationsToUpdate:(id)arg1 conversationsToInsert:(id)arg2 conversationUpdatesDict:(id)arg3 forUser:(id)arg4 withError:(id *)arg5;
- (void)mergeConversations:(id)arg1 forUser:(id)arg2 withError:(id *)arg3;
- (void)mergeHistoryResponse:(id)arg1 sortedServerConversations:(id)arg2 forUser:(id)arg3 withError:(id *)arg4;
- (id)initWithPlatform:(id)arg1 domain:(id)arg2 conversationManager:(id)arg3;

@end

