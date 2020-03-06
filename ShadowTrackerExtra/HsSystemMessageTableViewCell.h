//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HsBaseTableViewCell.h"

@class HsLabel, NSLayoutConstraint;

@interface HsSystemMessageTableViewCell : HsBaseTableViewCell
{
    _Bool _isFirstMessage;
    NSLayoutConstraint *_topSpaceConstrain;
    HsLabel *_titleLabel;
}

@property(nonatomic) __weak HsLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSLayoutConstraint *topSpaceConstrain; // @synthesize topSpaceConstrain=_topSpaceConstrain;
@property(nonatomic) _Bool isFirstMessage; // @synthesize isFirstMessage=_isFirstMessage;
- (void).cxx_destruct;
- (void)reapplyTheming;
- (void)updateWithSystemMessage:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applyTheme;
- (void)awakeFromNib;

@end

