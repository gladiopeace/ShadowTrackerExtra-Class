//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APMGPBDictionaryInternalsProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class APMGPBMessage, NSMutableDictionary;

@interface APMGPBInt64UInt32Dictionary : NSObject <APMGPBDictionaryInternalsProtocol, NSCopying>
{
    APMGPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

- (void)removeAll;
- (void)removeUInt32ForKey:(long long)arg1;
- (void)setUInt32:(unsigned int)arg1 forKey:(long long)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (_Bool)getUInt32:(unsigned int *)arg1 forKey:(long long)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)setAPMGPBGenericValue:(CDUnion_cf1021d0 *)arg1 forAPMGPBGenericValueKey:(CDUnion_cf1021d0 *)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndUInt32sUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithUInt32s:(const unsigned int *)arg1 forKeys:(const long long *)arg2 count:(unsigned long long)arg3;
- (id)init;

@end

