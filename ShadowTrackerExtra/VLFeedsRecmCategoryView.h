//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UICollectionView, VLConnectingView, VLFeedsCategoryMenuView;

@interface VLFeedsRecmCategoryView : UIView
{
    VLFeedsCategoryMenuView *_menuView;
    UICollectionView *_collectionView;
    UIButton *_scrollToTopButton;
    VLConnectingView *_loadingView;
}

@property(retain, nonatomic) VLConnectingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *scrollToTopButton; // @synthesize scrollToTopButton=_scrollToTopButton;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) VLFeedsCategoryMenuView *menuView; // @synthesize menuView=_menuView;
- (void).cxx_destruct;
- (void)makeConstraints;
- (void)setUpViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

