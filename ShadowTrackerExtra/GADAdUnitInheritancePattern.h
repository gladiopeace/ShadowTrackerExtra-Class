//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GADAdUnitInheritancePattern : NSObject
{
    NSArray *_inclusionPatterns;
    NSArray *_exclusionPatterns;
    NSString *_adUnitID;
}

@property(readonly, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
- (void).cxx_destruct;
- (_Bool)isAncestorOfAdUnitID:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

