//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GADMediatedIntermission : NSObject
{
    id _messageSource;
    struct atomic_flag _postedIntermissionWillEnd;
}

- (void).cxx_destruct;
- (void)adapterDidDismiss;
- (void)adapterWillDismiss;
- (void)adapterWillPresent;
- (id)initWithMessageSource:(id)arg1;

@end

