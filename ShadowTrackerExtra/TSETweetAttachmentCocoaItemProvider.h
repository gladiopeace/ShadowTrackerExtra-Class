//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSETweetAttachment.h"

@class NSItemProvider, NSString;

@interface TSETweetAttachmentCocoaItemProvider : NSObject <TSETweetAttachment>
{
    NSString *_title;
    NSItemProvider *_itemProvider;
}

@property(readonly, copy, nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 itemProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
