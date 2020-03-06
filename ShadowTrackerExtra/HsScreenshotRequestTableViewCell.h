//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HsAgentTextMessageTableViewCell.h"

@class HsThemeableButton, NSLayoutConstraint;

@interface HsScreenshotRequestTableViewCell : HsAgentTextMessageTableViewCell
{
    HsThemeableButton *_learnMoreButton;
    HsThemeableButton *_attachButton;
    NSLayoutConstraint *_buttonContainerZeroHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *buttonContainerZeroHeightConstraint; // @synthesize buttonContainerZeroHeightConstraint=_buttonContainerZeroHeightConstraint;
@property(nonatomic) __weak HsThemeableButton *attachButton; // @synthesize attachButton=_attachButton;
@property(nonatomic) __weak HsThemeableButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
- (void).cxx_destruct;
- (void)attachButtonTapped:(id)arg1;
- (void)learnMoreButtonTapped:(id)arg1;
- (void)applyTheming;
- (void)updateWithDM:(id)arg1;
- (void)setupDefaultTexts;
- (void)setupViewDefaults;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

