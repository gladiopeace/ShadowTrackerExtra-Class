//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKGameRequestDialogDelegate-Protocol.h"
#import "FBSDKSharingDelegate-Protocol.h"
#import "IMSDKFriendDelegate-Protocol.h"

@class FBSDKGameRequestDialog, NSString;

@interface IMSDKFriendFacebookManager : NSObject <FBSDKGameRequestDialogDelegate, FBSDKSharingDelegate, IMSDKFriendDelegate>
{
    _Bool _isSendMessage;
    _Bool _isSharingLink;
    CDUnknownBlockType _shareBlock;
    CDUnknownBlockType _inviteBlock;
    CDUnknownBlockType _sendMessageBlock;
    CDUnknownBlockType _getFriendBlock;
    CDUnknownBlockType _newInviteBlock;
    FBSDKGameRequestDialog *_gameRequestDialog;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FBSDKGameRequestDialog *gameRequestDialog; // @synthesize gameRequestDialog=_gameRequestDialog;
@property(copy, nonatomic) CDUnknownBlockType newInviteBlock; // @synthesize newInviteBlock=_newInviteBlock;
@property(copy, nonatomic) CDUnknownBlockType getFriendBlock; // @synthesize getFriendBlock=_getFriendBlock;
@property(copy, nonatomic) CDUnknownBlockType sendMessageBlock; // @synthesize sendMessageBlock=_sendMessageBlock;
@property(copy, nonatomic) CDUnknownBlockType inviteBlock; // @synthesize inviteBlock=_inviteBlock;
@property(copy, nonatomic) CDUnknownBlockType shareBlock; // @synthesize shareBlock=_shareBlock;
@property(nonatomic) _Bool isSharingLink; // @synthesize isSharingLink=_isSharingLink;
@property(nonatomic) _Bool isSendMessage; // @synthesize isSendMessage=_isSendMessage;
- (void).cxx_destruct;
- (void)handleBecomeActive:(id)arg1;
- (void)handleOpenUrl:(id)arg1;
- (void)sharerDidCancel:(id)arg1;
- (void)sharer:(id)arg1 didFailWithError:(id)arg2;
- (void)sharer:(id)arg1 didCompleteWithResults:(id)arg2;
- (void)gameRequestDialogDidCancel:(id)arg1;
- (void)gameRequestDialog:(id)arg1 didFailWithError:(id)arg2;
- (void)gameRequestDialog:(id)arg1 didCompleteWithResults:(id)arg2;
- (void)transfer2IMSDKFromResult:(id)arg1 iMSDKResult:(id)arg2;
- (void)loadNextInvitableFriends:(int)arg1 pageNo:(int)arg2 url:(id)arg3 handle:(CDUnknownBlockType)arg4;
- (id)getInviteUserlist:(id)arg1;
- (long long)getInviteState:(id)arg1;
- (void)loginFacebookAndShare:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getLinkContent:(id)arg1;
- (void)sharePhotoContent:(id)arg1;
- (void)apiShare:(id)arg1;
- (void)dialogShare:(id)arg1;
- (void)initFacebook;
- (void)share:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (void)inviteFriends:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (void)inviteWithContent:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (void)getFriendWithPage:(int)arg1 pageSize:(int)arg2 handle:(CDUnknownBlockType)arg3;
- (void)getFriendWithPage:(int)arg1 pageSize:(int)arg2 type:(int)arg3 extend:(id)arg4 handle:(CDUnknownBlockType)arg5;
- (id)init;
- (id)initSingleton;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

