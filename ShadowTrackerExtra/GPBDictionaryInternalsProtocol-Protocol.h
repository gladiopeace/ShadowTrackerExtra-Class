//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class GPBCodedOutputStream, GPBFieldDescriptor;

@protocol GPBDictionaryInternalsProtocol
- (void)enumerateForTextFormat:(void (^)(id, id))arg1;
- (void)setGPBGenericValue:(CDUnion_cf1021d0 *)arg1 forGPBGenericValueKey:(CDUnion_cf1021d0 *)arg2;
- (void)writeToCodedOutputStream:(GPBCodedOutputStream *)arg1 asField:(GPBFieldDescriptor *)arg2;
- (unsigned long long)computeSerializedSizeAsField:(GPBFieldDescriptor *)arg1;
@end

