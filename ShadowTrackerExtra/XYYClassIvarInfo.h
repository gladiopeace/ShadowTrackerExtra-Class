//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XYYClassIvarInfo : NSObject
{
    struct objc_ivar *_ivar;
    NSString *_name;
    long long _offset;
    NSString *_typeEncoding;
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *typeEncoding; // @synthesize typeEncoding=_typeEncoding;
@property(readonly, nonatomic) long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct objc_ivar *ivar; // @synthesize ivar=_ivar;
- (void).cxx_destruct;
- (id)initWithIvar:(struct objc_ivar *)arg1;

@end

