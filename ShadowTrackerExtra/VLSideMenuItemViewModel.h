//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VLSideMenuItemViewModel : NSObject
{
    _Bool _isAppeared;
    NSString *_name;
    NSString *_desc;
    NSString *_questionId;
}

@property(nonatomic) _Bool isAppeared; // @synthesize isAppeared=_isAppeared;
@property(copy, nonatomic) NSString *questionId; // @synthesize questionId=_questionId;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) double cellHeight;
- (id)initWithModel:(id)arg1;

@end

