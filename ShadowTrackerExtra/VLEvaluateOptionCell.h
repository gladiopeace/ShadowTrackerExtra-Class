//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface VLEvaluateOptionCell : UICollectionViewCell
{
    UIView *_bgView;
    UIImageView *_iconView;
    UILabel *_label;
    NSLayoutConstraint *_labelLeftConstaint1;
    NSLayoutConstraint *_labelLeftConstaint2;
}

@property(nonatomic) __weak NSLayoutConstraint *labelLeftConstaint2; // @synthesize labelLeftConstaint2=_labelLeftConstaint2;
@property(nonatomic) __weak NSLayoutConstraint *labelLeftConstaint1; // @synthesize labelLeftConstaint1=_labelLeftConstaint1;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)makeConstaints;
- (void)setUpViews;
- (void)configWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
