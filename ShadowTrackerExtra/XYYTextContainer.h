//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSAttributedString, UIBezierPath;
@protocol OS_dispatch_semaphore, XYYTextLinePositionModifier;

@interface XYYTextContainer : NSObject <NSCoding, NSCopying>
{
    _Bool _readonly;
    NSObject<OS_dispatch_semaphore> *_lock;
    struct CGSize _size;
    struct UIEdgeInsets _insets;
    UIBezierPath *_path;
    NSArray *_exclusionPaths;
    _Bool _pathFillEvenOdd;
    double _pathLineWidth;
    _Bool _verticalForm;
    unsigned long long _maximumNumberOfRows;
    unsigned long long _truncationType;
    NSAttributedString *_truncationToken;
    id <XYYTextLinePositionModifier> _linePositionModifier;
}

+ (id)containerWithPath:(id)arg1;
+ (id)containerWithSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2;
+ (id)containerWithSize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(copy) id <XYYTextLinePositionModifier> linePositionModifier;
@property(copy) NSAttributedString *truncationToken;
@property unsigned long long truncationType;
@property unsigned long long maximumNumberOfRows;
@property(getter=isVerticalForm) _Bool verticalForm;
@property double pathLineWidth;
@property(getter=isPathFillEvenOdd) _Bool pathFillEvenOdd;
@property(copy) NSArray *exclusionPaths;
@property(copy) UIBezierPath *path;
@property struct UIEdgeInsets insets;
@property struct CGSize size;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

