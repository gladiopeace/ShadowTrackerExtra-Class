//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol TWTRComposerViewControllerDelegate;

@interface TWTRComposerViewController : UIViewController
{
    id <TWTRComposerViewControllerDelegate> _delegate;
}

+ (id)emptyComposer;
@property(nonatomic) __weak id <TWTRComposerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithInitialText:(id)arg1 image:(id)arg2 videoData:(id)arg3;
- (id)initWithInitialText:(id)arg1 image:(id)arg2 videoURL:(id)arg3;

@end

