//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "TWTRScribableView-Protocol.h"

@class NSString, TWTRTweet, UIViewController;

@interface TWTRShareButton : UIButton <TWTRScribableView>
{
    unsigned long long _scribeViewName;
    UIViewController *_presenterViewController;
    TWTRTweet *_tweet;
    long long _shareButtonSize;
}

@property(nonatomic) long long shareButtonSize; // @synthesize shareButtonSize=_shareButtonSize;
@property(retain, nonatomic) TWTRTweet *tweet; // @synthesize tweet=_tweet;
@property(nonatomic) __weak UIViewController *presenterViewController; // @synthesize presenterViewController=_presenterViewController;
@property(nonatomic) unsigned long long scribeViewName; // @synthesize scribeViewName=_scribeViewName;
- (void).cxx_destruct;
- (_Bool)shouldPresentShareSheetUsingPopover;
- (void)presentActivityViewController:(id)arg1;
- (void)shareButtonTapped;
- (void)configureWithTweet:(id)arg1;
- (void)shareButtonCommonInit;
- (id)initWithFrame:(struct CGRect)arg1 shareButtonSize:(long long)arg2;
- (id)initWithShareButtonSize:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

