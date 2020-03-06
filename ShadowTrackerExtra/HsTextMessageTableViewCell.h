//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HsMessageTableViewCell.h"

@class HsDataDetectorTextView, NSLayoutConstraint, UIImageView;

@interface HsTextMessageTableViewCell : HsMessageTableViewCell
{
    HsDataDetectorTextView *_messageTextView;
    UIImageView *_messageBubbleImageView;
    NSLayoutConstraint *_messageWidthLimitingConstrain;
}

@property(nonatomic) __weak NSLayoutConstraint *messageWidthLimitingConstrain; // @synthesize messageWidthLimitingConstrain=_messageWidthLimitingConstrain;
@property(nonatomic) __weak UIImageView *messageBubbleImageView; // @synthesize messageBubbleImageView=_messageBubbleImageView;
@property(nonatomic) __weak HsDataDetectorTextView *messageTextView; // @synthesize messageTextView=_messageTextView;
- (void).cxx_destruct;
- (void)applyRedactedStyle;
- (void)applyTheming;
- (id)bubbleImage;
- (void)updateWithDM:(id)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end

