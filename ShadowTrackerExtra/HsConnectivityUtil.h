//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HsConnectivityUtil : NSObject
{
    unsigned long long _defaultBatchSize;
    unsigned long long _maxBatchSize;
}

+ (unsigned long long)getMaxConnectionsPerHost;
- (unsigned long long)getBatchSize;
- (id)initWithDefaultBatchSize:(unsigned long long)arg1 andMaximumBatchSize:(unsigned long long)arg2;

@end

