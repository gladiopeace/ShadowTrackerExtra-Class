//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface FBAdHideIcon : UIView
{
    UIColor *_iconColor;
    struct UIEdgeInsets _iconInsets;
}

@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) struct UIEdgeInsets iconInsets; // @synthesize iconInsets=_iconInsets;
- (void).cxx_destruct;
- (void)setupDefaults;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

