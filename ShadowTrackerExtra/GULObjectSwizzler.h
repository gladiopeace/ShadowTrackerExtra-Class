//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GULObjectSwizzler : NSObject
{
    id _swizzledObject;
    Class _originalClass;
    Class _generatedClass;
}

+ (id)getAssociatedObject:(id)arg1 key:(id)arg2;
+ (void)setAssociatedObject:(id)arg1 key:(id)arg2 value:(id)arg3 association:(unsigned long long)arg4;
@property(readonly, nonatomic) Class generatedClass; // @synthesize generatedClass=_generatedClass;
- (void).cxx_destruct;
- (_Bool)isSwizzlingProxyObject;
- (void)swizzledObjectHasBeenDeallocatedWithGeneratedSubclass:(_Bool)arg1;
- (void)swizzle;
- (id)getAssociatedObjectForKey:(id)arg1;
- (void)setAssociatedObjectWithKey:(id)arg1 value:(id)arg2 association:(unsigned long long)arg3;
- (void)copySelector:(SEL)arg1 fromClass:(Class)arg2 isClassSelector:(_Bool)arg3;
- (id)initWithObject:(id)arg1;

@end

