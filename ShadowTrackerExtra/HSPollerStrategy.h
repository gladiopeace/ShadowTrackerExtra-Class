//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HsHTTPBackoff;

@interface HSPollerStrategy : NSObject
{
    HsHTTPBackoff *_successBackoff;
    HsHTTPBackoff *_failureBackoff;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) HsHTTPBackoff *failureBackoff; // @synthesize failureBackoff=_failureBackoff;
@property(retain, nonatomic) HsHTTPBackoff *successBackoff; // @synthesize successBackoff=_successBackoff;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithType:(unsigned long long)arg1 successBackoff:(id)arg2 failureBackoff:(id)arg3;

@end

