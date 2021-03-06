//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TWTRTweetContentView, UIFont;

@protocol TWTRTweetContentViewLayout <NSObject>
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forContentView:(TWTRTweetContentView *)arg2;
- (_Bool)allowsMediaCornerRounding;
- (unsigned long long)tweetViewStyle;
- (void)setShowingMedia:(_Bool)arg1;
- (void)applyConstraintsForContentView:(TWTRTweetContentView *)arg1;
- (UIFont *)fontForTweetLabel;
@end

