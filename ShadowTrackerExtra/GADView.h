//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GADEventContextSource.h"

@class GADEventContext, NSString;

@interface GADView : UIView <GADEventContextSource>
{
    struct CGSize _lastSize;
    GADEventContext *_context;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)awakeFromNib;
@property(readonly, nonatomic) GADEventContext *context;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
