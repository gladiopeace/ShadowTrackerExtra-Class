//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VLFeedsRecmBaseCell.h"

@class NSArray, NSMutableArray, UIImageView, VLFeedsRecmTitleView;

@interface VLFeedsRecmSecondCell : VLFeedsRecmBaseCell
{
    VLFeedsRecmTitleView *_titleView;
    UIImageView *_firstImageView;
    UIImageView *_firstIconView;
    UIImageView *_secondImageView;
    UIImageView *_secondIconView;
    NSMutableArray *_itemViews;
    NSArray *_items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) UIImageView *secondIconView; // @synthesize secondIconView=_secondIconView;
@property(retain, nonatomic) UIImageView *secondImageView; // @synthesize secondImageView=_secondImageView;
@property(retain, nonatomic) UIImageView *firstIconView; // @synthesize firstIconView=_firstIconView;
@property(retain, nonatomic) UIImageView *firstImageView; // @synthesize firstImageView=_firstImageView;
@property(retain, nonatomic) VLFeedsRecmTitleView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)click:(id)arg1;
- (void)createItemViews;
- (void)makeConstraints;
- (void)setUpViews;
- (void)configWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
