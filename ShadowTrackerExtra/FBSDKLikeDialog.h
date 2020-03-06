//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;
@protocol FBSDKLikeDialogDelegate;

@interface FBSDKLikeDialog : NSObject
{
    _Bool _shouldFailOnDataError;
    id <FBSDKLikeDialogDelegate> _delegate;
    NSString *_objectID;
    unsigned long long _objectType;
    UIViewController *_fromViewController;
}

+ (id)likeWithObjectID:(id)arg1 objectType:(unsigned long long)arg2 delegate:(id)arg3;
+ (void)initialize;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(nonatomic) _Bool shouldFailOnDataError; // @synthesize shouldFailOnDataError=_shouldFailOnDataError;
@property(nonatomic) unsigned long long objectType; // @synthesize objectType=_objectType;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) __weak id <FBSDKLikeDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleCompletionWithDialogResults:(id)arg1 error:(id)arg2;
- (_Bool)_canLikeNative;
- (_Bool)validateWithError:(id *)arg1;
- (_Bool)like;
- (_Bool)canLike;

@end

