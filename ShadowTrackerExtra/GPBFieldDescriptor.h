//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GPBEnumDescriptor, GPBOneofDescriptor, NSString;

@interface GPBFieldDescriptor : NSObject
{
    struct GPBMessageFieldDescription *description_;
    GPBOneofDescriptor *containingOneof_;
    SEL getSel_;
    SEL setSel_;
    SEL hasOrCountSel_;
    SEL setHasSel_;
    CDUnion_88782d86 defaultValue_;
    Class msgClass_;
    union {
        GPBEnumDescriptor *enumDescriptor_;
        CDUnknownFunctionPointerType enumVerifier_;
    } enumHandling_;
}

@property(readonly, nonatomic) GPBOneofDescriptor *containingOneof; // @synthesize containingOneof=containingOneof_;
@property(readonly, nonatomic) Class msgClass; // @synthesize msgClass=msgClass_;
- (id)textFormatName;
@property(readonly, nonatomic) CDUnion_cf1021d0 defaultValue;
@property(readonly, nonatomic) GPBEnumDescriptor *enumDescriptor;
- (_Bool)isValidEnumValue:(int)arg1;
@property(readonly, nonatomic, getter=isPackable) _Bool packable;
@property(readonly, nonatomic) unsigned char mapKeyDataType;
@property(readonly, nonatomic) unsigned char fieldType;
@property(readonly, nonatomic, getter=isOptional) _Bool optional;
@property(readonly, nonatomic, getter=isRequired) _Bool required;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned int number;
@property(readonly, nonatomic) _Bool hasDefaultValue;
@property(readonly, nonatomic) unsigned char dataType;
- (void)dealloc;
- (id)initWithFieldDescription:(void *)arg1 includesDefault:(_Bool)arg2 syntax:(unsigned char)arg3;
- (id)init;

@end

