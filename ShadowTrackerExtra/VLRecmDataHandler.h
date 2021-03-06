//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, VLFeedsBubbleViewModel, VLFeedsRecmMenuViewModel, VLInitRespModel;
@protocol VLRecmDataHandlerDelegate;

@interface VLRecmDataHandler : NSObject
{
    id <VLRecmDataHandlerDelegate> _delegate;
    VLInitRespModel *_mInitResp;
    VLFeedsBubbleViewModel *_bubbleViewModel;
    VLFeedsRecmMenuViewModel *_categoryMenuModel;
    NSMutableArray *_mainItems;
    NSMutableArray *_categoryItems;
}

@property(retain, nonatomic) NSMutableArray *categoryItems; // @synthesize categoryItems=_categoryItems;
@property(retain, nonatomic) NSMutableArray *mainItems; // @synthesize mainItems=_mainItems;
@property(retain, nonatomic) VLFeedsRecmMenuViewModel *categoryMenuModel; // @synthesize categoryMenuModel=_categoryMenuModel;
@property(retain, nonatomic) VLFeedsBubbleViewModel *bubbleViewModel; // @synthesize bubbleViewModel=_bubbleViewModel;
@property(retain, nonatomic) VLInitRespModel *mInitResp; // @synthesize mInitResp=_mInitResp;
@property(nonatomic) __weak id <VLRecmDataHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handlerecmCategoryFail;
- (void)handleRecmCategoryResult:(id)arg1 page:(long long)arg2;
- (void)handleRecmCategoryMenuResult:(id)arg1;
- (void)handleRecmMainFetchFailed;
- (void)handleRecmMainResult:(id)arg1;
- (void)handleInitResult:(id)arg1;

@end

