//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GADObserverCollection;

@interface GADFluidSizedAdView : UIView
{
    UIView *_view;
    GADObserverCollection *_observers;
    id _messageSource;
    double _contentHeight;
}

@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateContentHeightValueFromNotification:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithView:(id)arg1 messageSource:(id)arg2;

@end
