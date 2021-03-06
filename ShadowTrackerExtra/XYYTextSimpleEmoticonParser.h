//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "XYYTextParser-Protocol.h"

@class NSDictionary, NSRegularExpression, NSString;
@protocol OS_dispatch_semaphore;

@interface XYYTextSimpleEmoticonParser : NSObject <XYYTextParser>
{
    NSRegularExpression *_regex;
    NSDictionary *_mapper;
    NSObject<OS_dispatch_semaphore> *_lock;
}

- (void).cxx_destruct;
- (_Bool)parseText:(id)arg1 selectedRange:(struct _NSRange *)arg2;
- (struct _NSRange)_replaceTextInRange:(struct _NSRange)arg1 withLength:(unsigned long long)arg2 selectedRange:(struct _NSRange)arg3;
@property(copy) NSDictionary *emoticonMapper;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

