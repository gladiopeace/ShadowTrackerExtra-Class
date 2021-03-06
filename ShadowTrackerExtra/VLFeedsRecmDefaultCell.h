//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VLFeedsRecmBaseCell.h"

@class NSArray, NSMutableArray, VLFeedsRecmTitleView;

@interface VLFeedsRecmDefaultCell : VLFeedsRecmBaseCell
{
    VLFeedsRecmTitleView *_titleView;
    NSArray *_items;
    NSMutableArray *_itemViews;
}

@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) VLFeedsRecmTitleView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)click:(id)arg1;
- (void)reloadItemViews;
- (void)makeConstraints;
- (void)setUpViews;
- (void)configWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

