//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, SKProduct;

@interface MidasIAPCacheItem : NSObject
{
    _Bool _valid;
    _Bool _fromCache;
    NSString *_key;
    SKProduct *_content;
    NSError *_error;
}

@property(nonatomic) _Bool fromCache; // @synthesize fromCache=_fromCache;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) SKProduct *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end

